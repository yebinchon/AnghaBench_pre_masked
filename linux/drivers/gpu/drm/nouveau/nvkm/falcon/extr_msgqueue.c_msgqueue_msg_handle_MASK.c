
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_msgqueue_seq {scalar_t__ state; scalar_t__ completion; int (* callback ) (struct nvkm_msgqueue*,struct nvkm_msgqueue_hdr*) ;int id; } ;
struct nvkm_msgqueue_hdr {size_t seq_id; } ;
struct nvkm_msgqueue {struct nvkm_msgqueue_seq* seq; TYPE_1__* falcon; } ;
struct TYPE_2__ {struct nvkm_subdev* owner; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nvkm_msgqueue*,struct nvkm_msgqueue_seq*) ;
 int FUNC_2 (struct nvkm_subdev const*,char*,int ) ;
 int FUNC_3 (struct nvkm_msgqueue*,struct nvkm_msgqueue_hdr*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_msgqueue *VAR_3, struct nvkm_msgqueue_hdr *VAR_4)
{
 const struct nvkm_subdev *VAR_5 = VAR_3->falcon->owner;
 struct nvkm_msgqueue_seq *VAR_6;

 VAR_6 = &VAR_3->seq[VAR_4->seq_id];
 if (VAR_6->state != VAR_2 && VAR_6->state != VAR_1) {
  FUNC_2(VAR_5, "msg for unknown sequence %d", VAR_6->id);
  return -VAR_0;
 }

 if (VAR_6->state == VAR_2) {
  if (VAR_6->callback)
   VAR_6->callback(VAR_3, VAR_4);
 }

 if (VAR_6->completion)
  FUNC_0(VAR_6->completion);

 FUNC_1(VAR_3, VAR_6);

 return 0;
}
