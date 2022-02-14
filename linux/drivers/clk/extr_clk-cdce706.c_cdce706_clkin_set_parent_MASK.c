
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
struct cdce706_hw_data {int parent; } ;


 struct cdce706_hw_data* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_1(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct cdce706_hw_data *VAR_2 = FUNC_0(VAR_0);

 VAR_2->parent = VAR_1;
 return 0;
}
