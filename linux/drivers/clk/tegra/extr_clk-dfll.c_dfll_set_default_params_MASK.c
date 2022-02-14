
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dfll {int sample_rate; int force_mode; int cf; int ci; int cg; int droop_ctrl; scalar_t__ cg_scale; int ref_rate; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct tegra_dfll*) ;
 int FUNC_3 (struct tegra_dfll*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct tegra_dfll *VAR_11)
{
 u32 VAR_12;

 VAR_12 = FUNC_1(VAR_11->ref_rate, VAR_11->sample_rate * 32);
 FUNC_0(VAR_12 > VAR_1);
 FUNC_3(VAR_11, VAR_12, VAR_0);

 VAR_12 = (VAR_11->force_mode << VAR_10) |
  (VAR_11->cf << VAR_6) |
  (VAR_11->ci << VAR_9) |
  (VAR_11->cg << VAR_7) |
  (VAR_11->cg_scale ? VAR_8 : 0);
 FUNC_3(VAR_11, VAR_12, VAR_5);

 FUNC_2(VAR_11);
 FUNC_3(VAR_11, VAR_11->droop_ctrl, VAR_2);
 FUNC_3(VAR_11, VAR_4, VAR_3);
}
