
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*,scalar_t__) ;
 int FUNC_1 (struct clk_hw*,unsigned long,unsigned long) ;

int FUNC_2(struct clk_hw *VAR_1,
        unsigned long VAR_2,
        unsigned long VAR_3,
        u8 VAR_4)
{
 int VAR_5;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;






 if (VAR_4)
  VAR_5 = FUNC_0(VAR_1, VAR_4);
 else
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);

 return VAR_5;
}
