
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct device {int dummy; } ;
typedef struct regulator clk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regulator*) ;
 struct regulator* FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct regulator*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,int) ;
 char* FUNC_5 (struct device*) ;
 struct device* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 struct regulator* FUNC_8 (struct device*,char const*) ;
 int FUNC_9 (struct regulator*) ;

__attribute__((used)) static int FUNC_10(void)
{
 struct device *VAR_2;
 struct regulator *VAR_3;
 struct clk *VAR_4;
 int VAR_5 = 0;
 const char *VAR_6;

 VAR_2 = FUNC_6(0);
 if (!VAR_2) {
  FUNC_7("failed to get cpu0 device\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2, ((void*)0));
 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5) {




  if (VAR_5 == -VAR_1)
   FUNC_3(VAR_2, "clock not ready, retry\n");
  else
   FUNC_4(VAR_2, "failed to get clock: %d\n", VAR_5);

  return VAR_5;
 }

 FUNC_2(VAR_4);

 VAR_6 = FUNC_5(VAR_2);

 if (!VAR_6)
  return 0;

 VAR_3 = FUNC_8(VAR_2, VAR_6);
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5) {




  if (VAR_5 == -VAR_1)
   FUNC_3(VAR_2, "cpu0 regulator not ready, retry\n");
  else
   FUNC_3(VAR_2, "no regulator for cpu0: %d\n", VAR_5);

  return VAR_5;
 }

 FUNC_9(VAR_3);
 return 0;
}
