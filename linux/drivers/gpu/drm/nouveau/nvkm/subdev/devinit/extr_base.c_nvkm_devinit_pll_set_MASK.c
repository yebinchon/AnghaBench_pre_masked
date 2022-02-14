
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_devinit {TYPE_1__* func; } ;
struct TYPE_2__ {int (* pll_set ) (struct nvkm_devinit*,int ,int ) ;} ;


 int FUNC_0 (struct nvkm_devinit*,int ,int ) ;

int
FUNC_1(struct nvkm_devinit *VAR_0, u32 VAR_1, u32 VAR_2)
{
 return VAR_0->func->pll_set(VAR_0, VAR_1, VAR_2);
}
