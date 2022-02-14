
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_secboot {TYPE_1__* acr; } ;
typedef enum nvkm_secboot_falcon { ____Placeholder_nvkm_secboot_falcon } nvkm_secboot_falcon ;
struct TYPE_2__ {int managed_falcons; } ;


 int FUNC_0 (int) ;

bool
FUNC_1(struct nvkm_secboot *VAR_0, enum nvkm_secboot_falcon VAR_1)
{
 if (!VAR_0)
  return 0;

 return VAR_0->acr->managed_falcons & FUNC_0(VAR_1);
}
