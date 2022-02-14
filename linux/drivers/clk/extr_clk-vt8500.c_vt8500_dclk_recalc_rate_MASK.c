
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_device {int div_mask; int div_reg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct clk_device* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
    unsigned long VAR_1)
{
 struct clk_device *VAR_2 = FUNC_2(VAR_0);
 u32 VAR_3 = FUNC_1(VAR_2->div_reg) & VAR_2->div_mask;


 if ((VAR_2->div_mask == 0x3F) && (VAR_3 & FUNC_0(5)))
  VAR_3 = 64 * (VAR_3 & 0x1f);


 if (VAR_3 == 0)
  VAR_3 = (VAR_2->div_mask + 1);

 return VAR_1 / VAR_3;
}
