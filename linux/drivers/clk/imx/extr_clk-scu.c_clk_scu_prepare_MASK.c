
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_scu {int clk_type; int rsrc_id; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 struct clk_scu* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct clk_scu *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0, VAR_2->rsrc_id,
      VAR_2->clk_type, 1, 0);
}
