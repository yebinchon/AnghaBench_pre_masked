
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv6xx_pl {int vddc; int mclk; int sclk; } ;
struct rv6xx_ps {struct rv6xx_pl high; struct rv6xx_pl medium; struct rv6xx_pl low; } ;
struct radeon_ps {int dclk; int vclk; int caps; int class2; int class; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*,int ,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ps*) ;
 struct rv6xx_ps* FUNC_4 (struct radeon_ps*) ;

void FUNC_5(struct radeon_device *VAR_0,
     struct radeon_ps *VAR_1)
{
 struct rv6xx_ps *VAR_2 = FUNC_4(VAR_1);
 struct rv6xx_pl *VAR_3;

 FUNC_2(VAR_1->class, VAR_1->class2);
 FUNC_1(VAR_1->caps);
 FUNC_0("\tuvd    vclk: %d dclk: %d\n", VAR_1->vclk, VAR_1->dclk);
 VAR_3 = &VAR_2->low;
 FUNC_0("\t\tpower level 0    sclk: %u mclk: %u vddc: %u\n",
        VAR_3->sclk, VAR_3->mclk, VAR_3->vddc);
 VAR_3 = &VAR_2->medium;
 FUNC_0("\t\tpower level 1    sclk: %u mclk: %u vddc: %u\n",
        VAR_3->sclk, VAR_3->mclk, VAR_3->vddc);
 VAR_3 = &VAR_2->high;
 FUNC_0("\t\tpower level 2    sclk: %u mclk: %u vddc: %u\n",
        VAR_3->sclk, VAR_3->mclk, VAR_3->vddc);
 FUNC_3(VAR_0, VAR_1);
}
