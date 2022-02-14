
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int class2; int class; } ;
struct radeon_device {int dummy; } ;
struct ni_power_info {int support_cac_long_term_average; int cac_enabled; scalar_t__ enable_cac; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ni_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_7,
        struct radeon_ps *VAR_8,
        bool VAR_9)
{
 struct ni_power_info *VAR_10 = FUNC_0(VAR_7);
 int VAR_11 = 0;
 PPSMC_Result VAR_12;

 if (VAR_10->enable_cac) {
  if (VAR_9) {
   if (!FUNC_1(VAR_8->class, VAR_8->class2)) {
    VAR_12 = FUNC_2(VAR_7, VAR_3);

    if (VAR_10->support_cac_long_term_average) {
     VAR_12 = FUNC_2(VAR_7, VAR_2);
     if (VAR_6 != VAR_12)
      VAR_10->support_cac_long_term_average = 0;
    }

    VAR_12 = FUNC_2(VAR_7, VAR_5);
    if (VAR_6 != VAR_12)
     VAR_11 = -VAR_0;

    VAR_10->cac_enabled = (VAR_6 == VAR_12) ? 1 : 0;
   }
  } else if (VAR_10->cac_enabled) {
   VAR_12 = FUNC_2(VAR_7, VAR_4);

   VAR_10->cac_enabled = 0;

   if (VAR_10->support_cac_long_term_average) {
    VAR_12 = FUNC_2(VAR_7, VAR_1);
    if (VAR_6 != VAR_12)
     VAR_10->support_cac_long_term_average = 0;
   }
  }
 }

 return VAR_11;
}
