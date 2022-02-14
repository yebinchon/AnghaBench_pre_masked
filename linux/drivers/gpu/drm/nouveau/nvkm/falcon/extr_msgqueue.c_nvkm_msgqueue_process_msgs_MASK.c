
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_msgqueue_queue {int dummy; } ;
struct nvkm_msgqueue_hdr {int dummy; } ;
struct nvkm_msgqueue {int init_msg_received; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nvkm_msgqueue*,struct nvkm_msgqueue_queue*,struct nvkm_msgqueue_hdr*) ;
 int FUNC_1 (struct nvkm_msgqueue*,struct nvkm_msgqueue_hdr*) ;
 int FUNC_2 (struct nvkm_msgqueue*,struct nvkm_msgqueue_hdr*) ;

void
FUNC_3(struct nvkm_msgqueue *VAR_1,
      struct nvkm_msgqueue_queue *VAR_2)
{




 u8 VAR_3[VAR_0];
 struct nvkm_msgqueue_hdr *VAR_4 = (void *)VAR_3;
 int VAR_5;


 if ((!VAR_1->init_msg_received)) {
  VAR_5 = FUNC_1(VAR_1, VAR_4);
  if (!VAR_5)
   VAR_1->init_msg_received = 1;
 } else {
  while (FUNC_0(VAR_1, VAR_2, VAR_4) > 0)
   FUNC_2(VAR_1, VAR_4);
 }
}
