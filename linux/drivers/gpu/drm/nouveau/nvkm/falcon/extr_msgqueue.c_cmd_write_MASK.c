
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_msgqueue_queue {int dummy; } ;
struct nvkm_msgqueue_hdr {int size; } ;
struct nvkm_msgqueue {TYPE_1__* falcon; } ;
struct TYPE_2__ {struct nvkm_subdev* owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_msgqueue*,struct nvkm_msgqueue_queue*,int) ;
 int FUNC_1 (struct nvkm_msgqueue*,struct nvkm_msgqueue_queue*,int ) ;
 int FUNC_2 (struct nvkm_msgqueue*,struct nvkm_msgqueue_queue*,struct nvkm_msgqueue_hdr*,int ) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_3 (unsigned int) ;
 int FUNC_4 (struct nvkm_subdev const*,char*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_msgqueue *VAR_2, struct nvkm_msgqueue_hdr *VAR_3,
   struct nvkm_msgqueue_queue *VAR_4)
{
 const struct nvkm_subdev *VAR_5 = VAR_2->falcon->owner;
 static unsigned VAR_6 = 2000;
 unsigned long VAR_7 = VAR_1 + FUNC_3(VAR_6);
 int VAR_8 = -VAR_0;
 bool VAR_9 = 1;

 while (VAR_8 == -VAR_0 && FUNC_5(VAR_1, VAR_7))
  VAR_8 = FUNC_1(VAR_2, VAR_4, VAR_3->size);
 if (VAR_8) {
  FUNC_4(VAR_5, "pmu_queue_open_write failed\n");
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_3, VAR_3->size);
 if (VAR_8) {
  FUNC_4(VAR_5, "pmu_queue_push failed\n");
  VAR_9 = 0;
 }

 FUNC_0(VAR_2, VAR_4, VAR_9);

 return VAR_8;
}
