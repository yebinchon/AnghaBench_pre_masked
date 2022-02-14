
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct cdce706_hw_data {int idx; int dev_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct cdce706_hw_data* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1)
{
 struct cdce706_hw_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->dev_data, FUNC_0(VAR_2->idx),
      VAR_0, 0);
}
