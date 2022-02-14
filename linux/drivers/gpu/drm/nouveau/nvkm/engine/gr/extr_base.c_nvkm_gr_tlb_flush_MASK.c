
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_gr {TYPE_1__* func; } ;
struct TYPE_2__ {int (* tlb_flush ) (struct nvkm_gr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_gr*) ;

int
FUNC_1(struct nvkm_gr *VAR_1)
{
 if (VAR_1->func->tlb_flush)
  return VAR_1->func->tlb_flush(VAR_1);
 return -VAR_0;
}
