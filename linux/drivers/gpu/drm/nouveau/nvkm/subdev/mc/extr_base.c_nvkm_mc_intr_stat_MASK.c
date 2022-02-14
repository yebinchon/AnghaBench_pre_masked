
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_mc {TYPE_1__* func; } ;
struct TYPE_2__ {int (* intr_stat ) (struct nvkm_mc*) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_mc*) ;

__attribute__((used)) static u32
FUNC_2(struct nvkm_mc *VAR_0)
{
 u32 VAR_1 = VAR_0->func->intr_stat(VAR_0);
 if (FUNC_0(VAR_1 == 0xffffffff))
  VAR_1 = 0;
 return VAR_1;
}
