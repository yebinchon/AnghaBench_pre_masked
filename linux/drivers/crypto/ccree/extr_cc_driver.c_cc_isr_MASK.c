
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct cc_drvdata {int irq; int comp_mask; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct cc_drvdata*,int ) ;
 int FUNC_2 (struct cc_drvdata*,int ,int) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (struct cc_drvdata*) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*,char*,int) ;
 struct device* FUNC_7 (struct cc_drvdata*) ;
 int FUNC_8 (struct cc_drvdata*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_8, void *VAR_9)
{
 struct cc_drvdata *VAR_10 = (struct cc_drvdata *)VAR_9;
 struct device *VAR_11 = FUNC_7(VAR_10);
 u32 VAR_12;
 u32 VAR_13;



 if (FUNC_3(VAR_11))
  return VAR_7;


 VAR_12 = FUNC_1(VAR_10, FUNC_0(VAR_5));
 FUNC_5(VAR_11, "Got IRR=0x%08X\n", VAR_12);

 if (VAR_12 == 0)
  return VAR_7;

 VAR_13 = FUNC_1(VAR_10, FUNC_0(VAR_4));


 FUNC_2(VAR_10, FUNC_0(VAR_3), VAR_12);

 VAR_10->irq = VAR_12;

 if (VAR_12 & VAR_10->comp_mask) {



  FUNC_2(VAR_10, FUNC_0(VAR_4), VAR_13 | VAR_10->comp_mask);
  VAR_12 &= ~VAR_10->comp_mask;
  FUNC_4(VAR_10);
 }
 if (VAR_12 & VAR_1) {
  u32 VAR_14;


  VAR_14 = FUNC_1(VAR_10, FUNC_0(VAR_0));
  FUNC_5(VAR_11, "AXI completion error: axim_mon_err=0x%08X\n",
   VAR_14);

  VAR_12 &= ~VAR_1;
 }

 if (VAR_12) {
  FUNC_6(VAR_11, "IRR includes unknown cause bits (0x%08X)\n",
        VAR_12);

 }

 return VAR_6;
}
