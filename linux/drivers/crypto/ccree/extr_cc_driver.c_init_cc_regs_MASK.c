
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_drvdata {scalar_t__ hw_rev; unsigned int comp_mask; scalar_t__ coherent; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_1 (struct cc_drvdata*,int ) ;
 int FUNC_2 (struct cc_drvdata*,int ,unsigned int) ;
 int FUNC_3 (struct device*,char*,unsigned int,...) ;
 struct device* FUNC_4 (struct cc_drvdata*) ;

int FUNC_5(struct cc_drvdata *VAR_10, bool VAR_11)
{
 unsigned int VAR_12, VAR_13;
 struct device *VAR_14 = FUNC_4(VAR_10);



 if (VAR_10->hw_rev <= VAR_6) {
  VAR_12 = FUNC_1(VAR_10, FUNC_0(VAR_1));
  FUNC_2(VAR_10, FUNC_0(VAR_1), VAR_12 & ~VAR_3);
  FUNC_3(VAR_14, "AXIM_CFG=0x%08X\n",
   FUNC_1(VAR_10, FUNC_0(VAR_1)));
 }


 VAR_12 = FUNC_1(VAR_10, FUNC_0(VAR_9));
 FUNC_3(VAR_14, "IRR=0x%08X\n", VAR_12);
 FUNC_2(VAR_10, FUNC_0(VAR_7), VAR_12);


 VAR_12 = VAR_10->comp_mask | VAR_2;

 if (VAR_10->hw_rev >= VAR_6)
  VAR_12 |= VAR_5;

 FUNC_2(VAR_10, FUNC_0(VAR_8), ~VAR_12);

 VAR_13 = (VAR_10->coherent ? VAR_4 : 0x0);

 VAR_12 = FUNC_1(VAR_10, FUNC_0(VAR_0));

 if (VAR_11)
  FUNC_3(VAR_14, "Cache params previous: 0x%08X\n", VAR_12);

 FUNC_2(VAR_10, FUNC_0(VAR_0), VAR_13);
 VAR_12 = FUNC_1(VAR_10, FUNC_0(VAR_0));

 if (VAR_11)
  FUNC_3(VAR_14, "Cache params current: 0x%08X (expect: 0x%08X)\n",
   VAR_12, VAR_13);

 return 0;
}
