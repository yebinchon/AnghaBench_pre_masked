
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* set_rate ) (struct clk_hw*,unsigned long,unsigned long) ;} ;


 TYPE_1__ VAR_0 ;
 struct clk_hw* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct clk_hw*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3)
{
 struct clk_hw *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_1);

 VAR_5 = FUNC_3(VAR_4);

 if (VAR_5)
  FUNC_1(VAR_4);

 VAR_6 = VAR_0.set_rate(VAR_1, VAR_2, VAR_3);

 if (VAR_5)
  FUNC_2(VAR_4);

 return VAR_6;
}
