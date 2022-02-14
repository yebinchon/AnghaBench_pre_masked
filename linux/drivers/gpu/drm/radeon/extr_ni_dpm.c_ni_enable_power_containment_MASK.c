
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int class2; int class; } ;
struct radeon_device {int dummy; } ;
struct ni_power_info {int pc_enabled; scalar_t__ enable_power_containment; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ni_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_4,
           struct radeon_ps *VAR_5,
           bool VAR_6)
{
 struct ni_power_info *VAR_7 = FUNC_0(VAR_4);
 PPSMC_Result VAR_8;
 int VAR_9 = 0;

 if (VAR_7->enable_power_containment) {
  if (VAR_6) {
   if (!FUNC_1(VAR_5->class, VAR_5->class2)) {
    VAR_8 = FUNC_2(VAR_4, VAR_2);
    if (VAR_8 != VAR_1) {
     VAR_9 = -VAR_0;
     VAR_7->pc_enabled = 0;
    } else {
     VAR_7->pc_enabled = 1;
    }
   }
  } else {
   VAR_8 = FUNC_2(VAR_4, VAR_3);
   if (VAR_8 != VAR_1)
    VAR_9 = -VAR_0;
   VAR_7->pc_enabled = 0;
  }
 }

 return VAR_9;
}
