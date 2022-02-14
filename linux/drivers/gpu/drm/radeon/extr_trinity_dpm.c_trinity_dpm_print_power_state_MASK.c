
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trinity_ps {int num_levels; struct trinity_pl* levels; } ;
struct trinity_pl {int vddc_index; int sclk; } ;
struct radeon_ps {int dclk; int vclk; int caps; int class2; int class; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*,int,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_4 (struct radeon_device*,int ) ;
 struct trinity_ps* FUNC_5 (struct radeon_ps*) ;

void FUNC_6(struct radeon_device *VAR_0,
       struct radeon_ps *VAR_1)
{
 int VAR_2;
 struct trinity_ps *VAR_3 = FUNC_5(VAR_1);

 FUNC_2(VAR_1->class, VAR_1->class2);
 FUNC_1(VAR_1->caps);
 FUNC_0("\tuvd    vclk: %d dclk: %d\n", VAR_1->vclk, VAR_1->dclk);
 for (VAR_2 = 0; VAR_2 < VAR_3->num_levels; VAR_2++) {
  struct trinity_pl *VAR_4 = &VAR_3->levels[VAR_2];
  FUNC_0("\t\tpower level %d    sclk: %u vddc: %u\n",
         VAR_2, VAR_4->sclk,
         FUNC_4(VAR_0, VAR_4->vddc_index));
 }
 FUNC_3(VAR_0, VAR_1);
}
