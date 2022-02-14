
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_clk_unit {int dummy; } ;
struct mmp2_clk_unit {scalar_t__ mpmu_base; struct mmp_clk_unit unit; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mmp_clk_unit*,int ,struct clk*) ;
 struct clk* FUNC_2 (char*,char*,int ,scalar_t__,int *,int ,int ,int *) ;
 int FUNC_3 (struct mmp_clk_unit*,int ,int ) ;
 int FUNC_4 (struct mmp_clk_unit*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct mmp2_clk_unit *VAR_7)
{
 struct clk *VAR_8;
 struct mmp_clk_unit *VAR_9 = &VAR_7->unit;

 FUNC_4(VAR_9, VAR_4,
     FUNC_0(VAR_4));

 FUNC_3(VAR_9, VAR_3,
     FUNC_0(VAR_3));

 VAR_8 = FUNC_2("uart_pll", "pll1_4",
    VAR_0,
    VAR_7->mpmu_base + VAR_2,
    &VAR_5, VAR_6,
    FUNC_0(VAR_6), ((void*)0));
 FUNC_1(VAR_9, VAR_1, VAR_8);
}
