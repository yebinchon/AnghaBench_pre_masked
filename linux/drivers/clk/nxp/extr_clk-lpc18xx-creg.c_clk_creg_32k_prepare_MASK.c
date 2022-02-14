
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_creg_data {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int ) ;
 struct clk_creg_data* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_3)
{
 struct clk_creg_data *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->reg, VAR_0,
     VAR_1 |
     VAR_2, 0);





 FUNC_0(2500);

 return VAR_5;
}
