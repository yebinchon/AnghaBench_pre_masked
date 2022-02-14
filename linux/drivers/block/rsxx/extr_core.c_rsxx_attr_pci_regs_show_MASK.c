
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct rsxx_cardinfo* private; } ;
struct rsxx_cardinfo {scalar_t__ regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_27, void *VAR_28)
{
 struct rsxx_cardinfo *VAR_29 = VAR_27->private;

 FUNC_1(VAR_27, "HWID		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_12));
 FUNC_1(VAR_27, "SCRATCH		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_26));
 FUNC_1(VAR_27, "IER		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_14));
 FUNC_1(VAR_27, "IPR		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_16));
 FUNC_1(VAR_27, "CREG_CMD		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_1));
 FUNC_1(VAR_27, "CREG_ADD		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_0));
 FUNC_1(VAR_27, "CREG_CNT		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_2));
 FUNC_1(VAR_27, "CREG_STAT	0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_11));
 FUNC_1(VAR_27, "CREG_DATA0	0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_3));
 FUNC_1(VAR_27, "CREG_DATA1	0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_4));
 FUNC_1(VAR_27, "CREG_DATA2	0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_5));
 FUNC_1(VAR_27, "CREG_DATA3	0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_6));
 FUNC_1(VAR_27, "CREG_DATA4	0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_7));
 FUNC_1(VAR_27, "CREG_DATA5	0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_8));
 FUNC_1(VAR_27, "CREG_DATA6	0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_9));
 FUNC_1(VAR_27, "CREG_DATA7	0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_10));
 FUNC_1(VAR_27, "INTR_COAL	0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_15));
 FUNC_1(VAR_27, "HW_ERROR		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_13));
 FUNC_1(VAR_27, "DEBUG0		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_17));
 FUNC_1(VAR_27, "DEBUG1		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_18));
 FUNC_1(VAR_27, "DEBUG2		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_19));
 FUNC_1(VAR_27, "DEBUG3		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_20));
 FUNC_1(VAR_27, "DEBUG4		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_21));
 FUNC_1(VAR_27, "DEBUG5		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_22));
 FUNC_1(VAR_27, "DEBUG6		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_23));
 FUNC_1(VAR_27, "DEBUG7		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_24));
 FUNC_1(VAR_27, "RECONFIG		0x%08x\n",
     FUNC_0(VAR_29->regmap + VAR_25));

 return 0;
}
