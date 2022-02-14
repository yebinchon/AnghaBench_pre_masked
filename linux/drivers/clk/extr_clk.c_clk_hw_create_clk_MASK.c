
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk_hw {struct clk_core* core; } ;
struct clk_core {int ref; int owner; } ;
struct clk {struct device* dev; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (struct clk_hw*) ;
 struct clk* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct clk*) ;
 scalar_t__ FUNC_3 (struct clk_hw*) ;
 struct clk* FUNC_4 (struct clk_core*,char const*,char const*) ;
 int FUNC_5 (struct clk_core*,struct clk*) ;
 int FUNC_6 (struct clk*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

struct clk *FUNC_9(struct device *VAR_1, struct clk_hw *VAR_2,
         const char *VAR_3, const char *VAR_4)
{
 struct clk *VAR_5;
 struct clk_core *VAR_6;


 if (FUNC_3(VAR_2))
  return FUNC_0(VAR_2);

 VAR_6 = VAR_2->core;
 VAR_5 = FUNC_4(VAR_6, VAR_3, VAR_4);
 if (FUNC_2(VAR_5))
  return VAR_5;
 VAR_5->dev = VAR_1;

 if (!FUNC_8(VAR_6->owner)) {
  FUNC_6(VAR_5);
  return FUNC_1(-VAR_0);
 }

 FUNC_7(&VAR_6->ref);
 FUNC_5(VAR_6, VAR_5);

 return VAR_5;
}
