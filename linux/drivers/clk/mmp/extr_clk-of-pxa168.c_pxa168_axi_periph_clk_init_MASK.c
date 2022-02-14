
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_clk_unit {int dummy; } ;
struct pxa168_clk_unit {int apmu_base; struct mmp_clk_unit unit; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mmp_clk_unit*,int ,int ,int ) ;
 int FUNC_2 (struct mmp_clk_unit*,int ,int ,int ) ;
 int FUNC_3 (struct mmp_clk_unit*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pxa168_clk_unit *VAR_3)
{
 struct mmp_clk_unit *VAR_4 = &VAR_3->unit;

 FUNC_3(VAR_4, VAR_2, VAR_3->apmu_base,
    FUNC_0(VAR_2));

 FUNC_1(VAR_4, VAR_0, VAR_3->apmu_base,
    FUNC_0(VAR_0));

 FUNC_2(VAR_4, VAR_1, VAR_3->apmu_base,
    FUNC_0(VAR_1));
}
