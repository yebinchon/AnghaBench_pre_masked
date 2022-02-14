
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;
struct clk_device {int div_mask; } ;


 struct clk_device* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long *VAR_2)
{
 struct clk_device *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4;

 if (VAR_1 == 0)
  return 0;

 VAR_4 = *VAR_2 / VAR_1;


 if (VAR_1 * VAR_4 < *VAR_2)
  VAR_4++;





 if ((VAR_3->div_mask == 0x3F) && (VAR_4 > 31)) {
  VAR_4 = 64 * ((VAR_4 / 64) + 1);
 }

 return *VAR_2 / VAR_4;
}
