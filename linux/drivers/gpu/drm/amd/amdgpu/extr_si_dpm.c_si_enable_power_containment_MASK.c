
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_power_info {int pc_enabled; scalar_t__ enable_power_containment; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,int ) ;
 struct ni_power_info* FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_ps*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_4,
           struct amdgpu_ps *VAR_5,
           bool VAR_6)
{
 struct ni_power_info *VAR_7 = FUNC_1(VAR_4);
 PPSMC_Result VAR_8;
 int VAR_9 = 0;

 if (VAR_7->enable_power_containment) {
  if (VAR_6) {
   if (!FUNC_2(VAR_4, VAR_5)) {
    VAR_8 = FUNC_0(VAR_4, VAR_2);
    if (VAR_8 != VAR_1) {
     VAR_9 = -VAR_0;
     VAR_7->pc_enabled = 0;
    } else {
     VAR_7->pc_enabled = 1;
    }
   }
  } else {
   VAR_8 = FUNC_0(VAR_4, VAR_3);
   if (VAR_8 != VAR_1)
    VAR_9 = -VAR_0;
   VAR_7->pc_enabled = 0;
  }
 }

 return VAR_9;
}
