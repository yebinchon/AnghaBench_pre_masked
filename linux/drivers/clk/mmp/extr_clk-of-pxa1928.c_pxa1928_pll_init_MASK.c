
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_clk_unit {int dummy; } ;
struct pxa1928_clk_unit {scalar_t__ mpmu_base; struct mmp_clk_unit unit; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct clk* FUNC_1 (char*,char*,int ,scalar_t__,int *,int ,int ,int *) ;
 int FUNC_2 (struct mmp_clk_unit*,int ,int ) ;
 int FUNC_3 (struct mmp_clk_unit*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(struct pxa1928_clk_unit *VAR_6)
{
 struct clk *VAR_7;
 struct mmp_clk_unit *VAR_8 = &VAR_6->unit;

 FUNC_3(VAR_8, VAR_3,
     FUNC_0(VAR_3));

 FUNC_2(VAR_8, VAR_2,
     FUNC_0(VAR_2));

 VAR_7 = FUNC_1("uart_pll", "pll1_416",
    VAR_0,
    VAR_6->mpmu_base + VAR_1,
    &VAR_4, VAR_5,
    FUNC_0(VAR_5), ((void*)0));
}
