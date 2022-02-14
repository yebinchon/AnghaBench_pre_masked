
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_drvdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cc_drvdata*) ;
 int FUNC_1 (struct device*,char*) ;
 struct cc_drvdata* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

int FUNC_5(struct device *VAR_1)
{
 int VAR_2 = 0;
 struct cc_drvdata *VAR_3 = FUNC_2(VAR_1);

 if (!FUNC_0(VAR_3)) {
  FUNC_3(VAR_1);
  VAR_2 = FUNC_4(VAR_1);
 } else {

  FUNC_1(VAR_1, "request to suspend already suspended queue");
  VAR_2 = -VAR_0;
 }
 return VAR_2;
}
