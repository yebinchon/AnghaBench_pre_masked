
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_drvdata {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cc_drvdata*) ;
 int FUNC_2 (struct cc_drvdata*) ;
 int FUNC_3 (struct cc_drvdata*,int ,int ) ;
 int FUNC_4 (struct cc_drvdata*) ;
 int FUNC_5 (struct cc_drvdata*) ;
 int FUNC_6 (struct cc_drvdata*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,char*,...) ;
 struct cc_drvdata* FUNC_9 (struct device*) ;
 int FUNC_10 (struct cc_drvdata*,int) ;

int FUNC_11(struct device *VAR_3)
{
 int VAR_4;
 struct cc_drvdata *VAR_5 = FUNC_9(VAR_3);

 FUNC_7(VAR_3, "unset HOST_POWER_DOWN_EN\n");

 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4) {
  FUNC_8(VAR_3, "failed getting clock back on. We're toast.\n");
  return VAR_4;
 }

 if (!FUNC_6(VAR_5)) {
  FUNC_8(VAR_3, "Cryptocell reset not completed");
  return -VAR_0;
 }

 FUNC_3(VAR_5, FUNC_0(VAR_1), VAR_2);
 VAR_4 = FUNC_10(VAR_5, 0);
 if (VAR_4) {
  FUNC_8(VAR_3, "init_cc_regs (%x)\n", VAR_4);
  return VAR_4;
 }

 FUNC_5(VAR_5);

 VAR_4 = FUNC_4(VAR_5);
 if (VAR_4) {
  FUNC_8(VAR_3, "cc_resume_req_queue (%x)\n", VAR_4);
  return VAR_4;
 }


 FUNC_2(VAR_5);

 return 0;
}
