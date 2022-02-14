
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_msgqueue_queue {int offset; int position; int index; } ;
struct nvkm_msgqueue_hdr {int size; int unit_id; } ;
struct nvkm_msgqueue {TYPE_1__* falcon; } ;
typedef int cmd ;
struct TYPE_2__ {struct nvkm_subdev* owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_msgqueue*,struct nvkm_msgqueue_queue*,struct nvkm_msgqueue_hdr*,int) ;
 int FUNC_1 (struct nvkm_subdev const*,char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_msgqueue *VAR_1, struct nvkm_msgqueue_queue *VAR_2)
{
 const struct nvkm_subdev *VAR_3 = VAR_1->falcon->owner;
 struct nvkm_msgqueue_hdr VAR_4;
 int VAR_5;

 VAR_4.unit_id = VAR_0;
 VAR_4.size = sizeof(VAR_4);
 VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_4, VAR_4.size);
 if (VAR_5)
  FUNC_1(VAR_3, "queue %d rewind failed\n", VAR_2->index);
 else
  FUNC_1(VAR_3, "queue %d rewinded\n", VAR_2->index);

 VAR_2->position = VAR_2->offset;
}
