
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_gpio {TYPE_1__* func; } ;
struct TYPE_2__ {int (* reset ) (struct nvkm_gpio*,int ) ;} ;


 int FUNC_0 (struct nvkm_gpio*,int ) ;

void
FUNC_1(struct nvkm_gpio *VAR_0, u8 VAR_1)
{
 if (VAR_0->func->reset)
  VAR_0->func->reset(VAR_0, VAR_1);
}
