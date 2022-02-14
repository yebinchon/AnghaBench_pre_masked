
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int dclk; int vclk; int caps; int class2; int class; } ;
struct radeon_device {int dummy; } ;
struct igp_ps {int max_voltage; int sclk_high; int min_voltage; int sclk_low; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ps*) ;
 struct igp_ps* FUNC_4 (struct radeon_ps*) ;

void FUNC_5(struct radeon_device *VAR_0,
     struct radeon_ps *VAR_1)
{
 struct igp_ps *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(VAR_1->class, VAR_1->class2);
 FUNC_1(VAR_1->caps);
 FUNC_0("\tuvd    vclk: %d dclk: %d\n", VAR_1->vclk, VAR_1->dclk);
 FUNC_0("\t\tpower level 0    sclk: %u vddc_index: %d\n",
        VAR_2->sclk_low, VAR_2->min_voltage);
 FUNC_0("\t\tpower level 1    sclk: %u vddc_index: %d\n",
        VAR_2->sclk_high, VAR_2->max_voltage);
 FUNC_3(VAR_0, VAR_1);
}
