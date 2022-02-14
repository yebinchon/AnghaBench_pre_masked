
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_drvdata {int dummy; } ;


 scalar_t__ FUNC_0 (struct cc_drvdata*) ;
 struct cc_drvdata* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;

int FUNC_4(struct device *VAR_0)
{
 int VAR_1 = 0;
 struct cc_drvdata *VAR_2 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_2))
  VAR_1 = FUNC_3(VAR_0);
 else
  FUNC_2(VAR_0);

 return VAR_1;
}
