
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_devinit {TYPE_1__* func; } ;
struct TYPE_2__ {int (* mmio ) (struct nvkm_devinit*,int ) ;} ;


 int FUNC_0 (struct nvkm_devinit*,int ) ;

u32
FUNC_1(struct nvkm_devinit *VAR_0, u32 VAR_1)
{
 if (VAR_0->func->mmio)
  VAR_1 = VAR_0->func->mmio(VAR_0, VAR_1);
 return VAR_1;
}
