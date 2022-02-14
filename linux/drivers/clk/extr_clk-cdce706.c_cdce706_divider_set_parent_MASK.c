
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
struct cdce706_hw_data {int parent; int idx; int dev_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 struct cdce706_hw_data* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct cdce706_hw_data *VAR_2 = FUNC_4(VAR_0);

 if (VAR_2->parent == VAR_1)
  return 0;
 VAR_2->parent = VAR_1;
 return FUNC_3(VAR_2->dev_data,
      FUNC_0(VAR_2->idx),
      FUNC_1(VAR_2->idx),
      VAR_1 << FUNC_2(VAR_2->idx));
}
