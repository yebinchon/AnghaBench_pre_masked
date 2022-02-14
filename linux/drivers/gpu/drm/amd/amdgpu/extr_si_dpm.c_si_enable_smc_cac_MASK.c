
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_power_info {scalar_t__ enable_dte; } ;
struct ni_power_info {int support_cac_long_term_average; int cac_enabled; scalar_t__ enable_cac; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,int ) ;
 struct ni_power_info* FUNC_1 (struct amdgpu_device*) ;
 struct si_power_info* FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_ps*) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_8,
        struct amdgpu_ps *VAR_9,
        bool VAR_10)
{
 struct ni_power_info *VAR_11 = FUNC_1(VAR_8);
 struct si_power_info *VAR_12 = FUNC_2(VAR_8);
 PPSMC_Result VAR_13;
 int VAR_14 = 0;

 if (VAR_11->enable_cac) {
  if (VAR_10) {
   if (!FUNC_3(VAR_8, VAR_9)) {
    if (VAR_11->support_cac_long_term_average) {
     VAR_13 = FUNC_0(VAR_8, VAR_2);
     if (VAR_13 != VAR_7)
      VAR_11->support_cac_long_term_average = 0;
    }

    VAR_13 = FUNC_0(VAR_8, VAR_5);
    if (VAR_13 != VAR_7) {
     VAR_14 = -VAR_0;
     VAR_11->cac_enabled = 0;
    } else {
     VAR_11->cac_enabled = 1;
    }

    if (VAR_12->enable_dte) {
     VAR_13 = FUNC_0(VAR_8, VAR_6);
     if (VAR_13 != VAR_7)
      VAR_14 = -VAR_0;
    }
   }
  } else if (VAR_11->cac_enabled) {
   if (VAR_12->enable_dte)
    VAR_13 = FUNC_0(VAR_8, VAR_4);

   VAR_13 = FUNC_0(VAR_8, VAR_3);

   VAR_11->cac_enabled = 0;

   if (VAR_11->support_cac_long_term_average)
    VAR_13 = FUNC_0(VAR_8, VAR_1);
  }
 }
 return VAR_14;
}
