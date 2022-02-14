
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_apb_mul {int bit_idx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct clk_hw*) ;
 unsigned long FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (scalar_t__) ;
 struct clk_apb_mul* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_6(struct clk_hw *VAR_3, unsigned long VAR_4,
       unsigned long *VAR_5)
{
 struct clk_apb_mul *VAR_6 = FUNC_5(VAR_3);
 unsigned long VAR_7 = 1;

 if (FUNC_4(VAR_2 + VAR_1) & FUNC_0(VAR_6->bit_idx))
  VAR_7 = 2;

 if (FUNC_1(VAR_3) & VAR_0) {
  unsigned long VAR_8 = VAR_4 / VAR_7;

  *VAR_5 = FUNC_3(FUNC_2(VAR_3), VAR_8);
 }

 return *VAR_5 * VAR_7;
}
