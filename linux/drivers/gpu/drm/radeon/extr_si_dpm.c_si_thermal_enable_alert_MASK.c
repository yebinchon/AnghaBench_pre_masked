
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dpm_thermal; } ;
struct radeon_device {TYPE_1__ irq; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_6,
       bool VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_0);

 if (VAR_7) {
  PPSMC_Result VAR_9;

  VAR_8 &= ~(VAR_4 | VAR_5);
  FUNC_2(VAR_0, VAR_8);
  VAR_6->irq.dpm_thermal = 0;
  VAR_9 = FUNC_3(VAR_6, VAR_2);
  if (VAR_9 != VAR_3) {
   FUNC_0("Could not enable thermal interrupts.\n");
   return -VAR_1;
  }
 } else {
  VAR_8 |= VAR_4 | VAR_5;
  FUNC_2(VAR_0, VAR_8);
  VAR_6->irq.dpm_thermal = 1;
 }

 return 0;
}
