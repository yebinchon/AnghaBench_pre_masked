
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rv7xx_ps {int high; int medium; int low; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ SMC_Evergreen_MCRegisters ;


 int FUNC_0 (struct radeon_device*,int *,int *) ;
 struct rv7xx_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
      struct radeon_ps *VAR_1,
      SMC_Evergreen_MCRegisters *VAR_2)
{
 struct rv7xx_ps *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_0,
        &VAR_3->low,
        &VAR_2->data[2]);
 FUNC_0(VAR_0,
        &VAR_3->medium,
        &VAR_2->data[3]);
 FUNC_0(VAR_0,
        &VAR_3->high,
        &VAR_2->data[4]);
}
