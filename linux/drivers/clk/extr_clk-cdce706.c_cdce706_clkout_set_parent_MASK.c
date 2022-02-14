
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct clk_hw {int dummy; } ;
struct cdce706_hw_data {scalar_t__ parent; int idx; int dev_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 struct cdce706_hw_data* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct cdce706_hw_data *VAR_3 = FUNC_2(VAR_1);

 if (VAR_3->parent == VAR_2)
  return 0;
 VAR_3->parent = VAR_2;
 return FUNC_1(VAR_3->dev_data,
      FUNC_0(VAR_3->idx),
      VAR_0, VAR_2);
}
