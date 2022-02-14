
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_apb_mul {int bit_idx; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 struct clk_apb_mul* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_2,
          unsigned long VAR_3)
{
 struct clk_apb_mul *VAR_4 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_1 + VAR_0) & FUNC_0(VAR_4->bit_idx))
  return VAR_3 * 2;

 return VAR_3;
}
