
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
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_7,
       bool VAR_8)
{
 u32 VAR_9 = FUNC_1(VAR_0);
 PPSMC_Result VAR_10;

 if (VAR_8) {
  VAR_9 &= ~(VAR_5 | VAR_6);
  FUNC_2(VAR_0, VAR_9);
  VAR_7->irq.dpm_thermal = 0;
  VAR_10 = FUNC_3(VAR_7, VAR_3);
  if (VAR_10 != VAR_4) {
   FUNC_0("Could not enable thermal interrupts.\n");
   return -VAR_1;
  }
 } else {
  VAR_9 |= VAR_5 | VAR_6;
  FUNC_2(VAR_0, VAR_9);
  VAR_7->irq.dpm_thermal = 1;
  VAR_10 = FUNC_3(VAR_7, VAR_2);
  if (VAR_10 != VAR_4) {
   FUNC_0("Could not disable thermal interrupts.\n");
   return -VAR_1;
  }
 }

 return 0;
}
