
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_scu {int clk_type; int rsrc_id; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int) ;
 struct clk_scu* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_1)
{
 struct clk_scu *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_2->rsrc_id,
     VAR_2->clk_type, 0, 0);
 if (VAR_3)
  FUNC_1("%s: clk unprepare failed %d\n", FUNC_0(VAR_1),
   VAR_3);
}
