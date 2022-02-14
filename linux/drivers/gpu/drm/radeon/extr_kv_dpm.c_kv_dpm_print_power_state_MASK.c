
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int dclk; int vclk; int caps; int class2; int class; } ;
struct radeon_device {int dummy; } ;
struct kv_ps {int num_levels; struct kv_pl* levels; } ;
struct kv_pl {int vddc_index; int sclk; } ;


 int FUNC_0 (struct radeon_device*,int ) ;
 struct kv_ps* FUNC_1 (struct radeon_ps*) ;
 int FUNC_2 (char*,int,int ,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ps*) ;

void FUNC_6(struct radeon_device *VAR_0,
         struct radeon_ps *VAR_1)
{
 int VAR_2;
 struct kv_ps *VAR_3 = FUNC_1(VAR_1);

 FUNC_4(VAR_1->class, VAR_1->class2);
 FUNC_3(VAR_1->caps);
 FUNC_2("\tuvd    vclk: %d dclk: %d\n", VAR_1->vclk, VAR_1->dclk);
 for (VAR_2 = 0; VAR_2 < VAR_3->num_levels; VAR_2++) {
  struct kv_pl *VAR_4 = &VAR_3->levels[VAR_2];
  FUNC_2("\t\tpower level %d    sclk: %u vddc: %u\n",
         VAR_2, VAR_4->sclk,
         FUNC_0(VAR_0, VAR_4->vddc_index));
 }
 FUNC_5(VAR_0, VAR_1);
}
