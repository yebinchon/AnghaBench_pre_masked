
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {struct device* dev; } ;
struct device {int dummy; } ;
struct clk_lookup {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 struct clk* FUNC_1 (struct device*,char const*) ;
 int FUNC_2 (struct clk*) ;
 struct clk_lookup* FUNC_3 (struct clk*,char const*,int ) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct sysc *VAR_3,
          struct device *VAR_4,
          const char *VAR_5)
{
 struct clk *VAR_6;
 struct clk_lookup *VAR_7;
 int VAR_8 = 0;

 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (!FUNC_0(VAR_6)) {
  FUNC_2(VAR_6);

  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_3->dev, VAR_5);
 if (FUNC_0(VAR_6))
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_6, VAR_5, FUNC_4(VAR_4));
 if (!VAR_7)
  VAR_8 = -VAR_2;

 FUNC_2(VAR_6);

 return VAR_8;
}
