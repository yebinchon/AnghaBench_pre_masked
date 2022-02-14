
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu_context {TYPE_2__* adev; int pm_enabled; } ;
struct TYPE_3__ {scalar_t__ vram_type; } ;
struct TYPE_4__ {TYPE_1__ gmc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct smu_context*,int ) ;
 int FUNC_1 (struct smu_context*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_3->pm_enabled)
  return VAR_4;
 if (FUNC_0(VAR_3, VAR_1) &&
     VAR_3->adev->gmc.vram_type == VAR_0)
  VAR_4 = FUNC_1(VAR_3, VAR_2, 1);

 return VAR_4;
}
