
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct device*,char*,char*) ;
 int FUNC_4 (struct device*,void (*) (void*),struct clk*) ;
 struct clk* FUNC_5 (struct device*,char*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, char *VAR_3)
{
 struct clk *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_2, VAR_3);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 != -VAR_0)
   FUNC_3(VAR_2, "failed to get %s", VAR_3);
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_2, "failed to enable %s", VAR_3);
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_2,
           (void(*)(void *))VAR_1,
           VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_2, "failed to add reset action on %s", VAR_3);
  return VAR_5;
 }

 return 0;
}
