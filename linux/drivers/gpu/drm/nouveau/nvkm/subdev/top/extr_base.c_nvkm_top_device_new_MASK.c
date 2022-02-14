
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_top_device {int fault; int engine; int runlist; int reset; int intr; int head; scalar_t__ addr; int index; } ;
struct nvkm_top {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_top_device* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

struct nvkm_top_device *
FUNC_2(struct nvkm_top *VAR_2)
{
 struct nvkm_top_device *VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  VAR_3->index = VAR_1;
  VAR_3->addr = 0;
  VAR_3->fault = -1;
  VAR_3->engine = -1;
  VAR_3->runlist = -1;
  VAR_3->reset = -1;
  VAR_3->intr = -1;
  FUNC_1(&VAR_3->head, &VAR_2->device);
 }
 return VAR_3;
}
