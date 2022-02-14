
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_ram {int dummy; } ;
struct TYPE_2__ {int * next; } ;
struct gk104_ram {int fuc; TYPE_1__ base; } ;


 struct gk104_ram* FUNC_0 (struct nvkm_ram*) ;
 int FUNC_1 (int *,int) ;

void
FUNC_2(struct nvkm_ram *VAR_0)
{
 struct gk104_ram *VAR_1 = FUNC_0(VAR_0);
 VAR_1->base.next = ((void*)0);
 FUNC_1(&VAR_1->fuc, 0);
}
