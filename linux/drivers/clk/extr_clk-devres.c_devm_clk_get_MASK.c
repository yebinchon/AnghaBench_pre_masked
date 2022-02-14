
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (struct device*,char const*) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct clk**) ;
 struct clk** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct clk**) ;

struct clk *FUNC_6(struct device *VAR_3, const char *VAR_4)
{
 struct clk **VAR_5, *VAR_6;

 VAR_5 = FUNC_4(VAR_2, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (!FUNC_1(VAR_6)) {
  *VAR_5 = VAR_6;
  FUNC_3(VAR_3, VAR_5);
 } else {
  FUNC_5(VAR_5);
 }

 return VAR_6;
}
