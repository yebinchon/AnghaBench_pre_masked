
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_clk_unit {int dummy; } ;
struct pxa1928_clk_unit {int apbc_base; struct mmp_clk_unit unit; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mmp_clk_unit*,int ,int ,int ) ;
 int FUNC_2 (struct mmp_clk_unit*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pxa1928_clk_unit *VAR_2)
{
 struct mmp_clk_unit *VAR_3 = &VAR_2->unit;

 FUNC_2(VAR_3, VAR_1, VAR_2->apbc_base,
    FUNC_0(VAR_1));

 FUNC_1(VAR_3, VAR_0, VAR_2->apbc_base,
    FUNC_0(VAR_0));
}
