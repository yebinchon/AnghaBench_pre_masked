
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mmp_clk_unit {int dummy; } ;
struct mmp2_clk_unit {scalar_t__ apmu_base; struct mmp_clk_unit unit; } ;
struct clk {int dummy; } ;
struct TYPE_6__ {scalar_t__ reg_clk_ctrl; } ;
struct TYPE_7__ {TYPE_1__ reg_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct mmp_clk_unit*,int ,struct clk*) ;
 struct clk* FUNC_2 (int *,char*,int ,int ,int ,TYPE_2__*,int *) ;
 int FUNC_3 (struct mmp_clk_unit*,int ,scalar_t__,int ) ;
 int FUNC_4 (struct mmp_clk_unit*,int ,scalar_t__,int ) ;
 int FUNC_5 (struct mmp_clk_unit*,int ,scalar_t__,int ) ;
 int VAR_14 ;
 TYPE_2__ VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_6(struct mmp2_clk_unit *VAR_17)
{
 struct clk *VAR_18;
 struct mmp_clk_unit *VAR_19 = &VAR_17->unit;

 VAR_15.reg_info.reg_clk_ctrl = VAR_17->apmu_base + VAR_2;
 VAR_18 = FUNC_2(((void*)0), "sdh_mix_clk", VAR_16,
     FUNC_0(VAR_16),
     VAR_3,
     &VAR_15, &VAR_14);

 VAR_10.reg_info.reg_clk_ctrl = VAR_17->apmu_base + VAR_0;
 VAR_18 = FUNC_2(((void*)0), "ccic0_mix_clk", VAR_13,
     FUNC_0(VAR_13),
     VAR_3,
     &VAR_10, &VAR_9);
 FUNC_1(VAR_19, VAR_4, VAR_18);

 VAR_12.reg_info.reg_clk_ctrl = VAR_17->apmu_base + VAR_1;
 VAR_18 = FUNC_2(((void*)0), "ccic1_mix_clk", VAR_13,
     FUNC_0(VAR_13),
     VAR_3,
     &VAR_12, &VAR_11);
 FUNC_1(VAR_19, VAR_5, VAR_18);

 FUNC_5(VAR_19, VAR_8, VAR_17->apmu_base,
    FUNC_0(VAR_8));

 FUNC_3(VAR_19, VAR_6, VAR_17->apmu_base,
    FUNC_0(VAR_6));

 FUNC_4(VAR_19, VAR_7, VAR_17->apmu_base,
    FUNC_0(VAR_7));
}
