
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_drvdata {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cc_drvdata*) ;
 int FUNC_2 (struct cc_drvdata*,int ,int ) ;
 int FUNC_3 (struct cc_drvdata*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,int) ;
 struct cc_drvdata* FUNC_6 (struct device*) ;
 int FUNC_7 (struct cc_drvdata*) ;

int FUNC_8(struct device *VAR_2)
{
 struct cc_drvdata *VAR_3 = FUNC_6(VAR_2);
 int VAR_4;

 FUNC_4(VAR_2, "set HOST_POWER_DOWN_EN\n");
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4) {
  FUNC_5(VAR_2, "cc_suspend_req_queue (%x)\n", VAR_4);
  return VAR_4;
 }
 FUNC_7(VAR_3);
 FUNC_2(VAR_3, FUNC_0(VAR_0), VAR_1);
 FUNC_1(VAR_3);
 return 0;
}
