
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct mb86a16_state {unsigned char frequency; unsigned char srate; int master_clk; } ;


 scalar_t__ FUNC_0 (struct mb86a16_state*,unsigned char,int) ;
 scalar_t__ FUNC_1 (struct mb86a16_state*,unsigned char,unsigned char,unsigned char) ;
 scalar_t__ FUNC_2 (struct mb86a16_state*,int,int) ;
 scalar_t__ FUNC_3 (struct mb86a16_state*,unsigned char,unsigned char) ;
 int VAR_0 ;
 int FUNC_4 (struct mb86a16_state*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct mb86a16_state*,unsigned char,unsigned char) ;
 int FUNC_6 (struct mb86a16_state*,unsigned char) ;
 int FUNC_7 (struct mb86a16_state*,unsigned char,unsigned char) ;
 int FUNC_8 (struct mb86a16_state*,int) ;
 int FUNC_9 (struct mb86a16_state*,unsigned char,unsigned char) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct mb86a16_state*) ;
 scalar_t__ FUNC_12 (struct mb86a16_state*,unsigned char,unsigned char) ;
 int FUNC_13 (struct mb86a16_state*,int,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_14 (struct mb86a16_state*,unsigned char,unsigned char) ;
 int FUNC_15 (struct mb86a16_state*) ;
 int FUNC_16 (int ,int ,int,char*,...) ;
 int FUNC_17 (struct mb86a16_state*,int,int,int) ;
 scalar_t__ FUNC_18 (struct mb86a16_state*) ;
 int FUNC_19 (struct mb86a16_state*,int) ;
 int FUNC_20 (struct mb86a16_state*,int,unsigned char*) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 scalar_t__ FUNC_23 (struct mb86a16_state*,int,int,unsigned char) ;
 int FUNC_24 (struct mb86a16_state*,int,unsigned char*) ;
 int FUNC_25 (struct mb86a16_state*,int) ;
 scalar_t__ FUNC_26 (struct mb86a16_state*,int) ;
 scalar_t__ FUNC_27 (struct mb86a16_state*) ;
 int FUNC_28 (struct mb86a16_state*,int,int,int*,int,int,unsigned char,int,int,int,unsigned char*) ;
 int FUNC_29 (struct mb86a16_state*,int,int,int,unsigned char,int,int*,int*,unsigned char*,unsigned char*) ;
 int FUNC_30 (struct mb86a16_state*,int,unsigned char,int,int*,int*,unsigned char*,unsigned char*) ;
 int FUNC_31 (struct mb86a16_state*,unsigned char*) ;
 int FUNC_32 (int) ;
 unsigned char FUNC_33 (struct mb86a16_state*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_34(struct mb86a16_state *VAR_5)
{
 u8 VAR_6, VAR_7;

 int VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15[60];
 u8 VAR_16;

 unsigned char VAR_17, VAR_18, VAR_19;
 unsigned char VAR_20;
 unsigned char VAR_21, VAR_22, VAR_23;
 unsigned char VAR_24, VAR_25;
 unsigned char VAR_26;

 unsigned char VAR_27, VAR_28;
 unsigned char VAR_29, VAR_30;
 unsigned char VAR_31;
 unsigned char VAR_32;
 unsigned char VAR_33, VAR_34;
 unsigned char VAR_35;

 int VAR_36;
 int VAR_37;
 int VAR_38, VAR_39, VAR_40;
 int VAR_41, VAR_42;
 int VAR_43, VAR_44[20];
 int VAR_45;
 int VAR_46;
 int VAR_47;
 int VAR_48;
 int VAR_49;
 int VAR_50, VAR_51;
 int VAR_52[4];
 int VAR_53;

 int VAR_54;
 int VAR_55 = -1;
 int VAR_56;

 FUNC_16(VAR_4, VAR_3, 1, "freq=%d Mhz, symbrt=%d Ksps", VAR_5->frequency, VAR_5->srate);

 VAR_13 = 3000;
 VAR_14 = VAR_5->srate / 4;

 for (VAR_8 = 0; VAR_8 < 60; VAR_8++)
  VAR_15[VAR_8] = -1;

 for (VAR_8 = 0; VAR_8 < 20; VAR_8++)
  VAR_44[VAR_8] = 0;

 VAR_16 = 25;

 for (VAR_54 = 0; ((VAR_54 < 3) && (VAR_55 == -1)); VAR_54++) {
  FUNC_8(VAR_5, 0);
  FUNC_19(VAR_5, 0);

  VAR_17 = 0;
  VAR_18 = 0;
  VAR_19 = 1;
  VAR_21 = 0;
  VAR_22 = 1;
  VAR_23 = 2;
  VAR_25 = 0;
  VAR_24 = 0;

  if (FUNC_18(VAR_5) < 0) {
   FUNC_16(VAR_4, VAR_2, 1, "initial set failed");
   return -1;
  }
  if (FUNC_2(VAR_5, 3, 2) < 0) {
   FUNC_16(VAR_4, VAR_2, 1, "DAGC data set error");
   return -1;
  }
  if (FUNC_3(VAR_5, VAR_17, VAR_18) < 0) {
   FUNC_16(VAR_4, VAR_2, 1, "EN set error");
   return -1;
  }
  if (FUNC_0(VAR_5, VAR_19, VAR_5->srate) < 0) {
   FUNC_16(VAR_4, VAR_2, 1, "AFCEXEN set error");
   return -1;
  }
  if (FUNC_1(VAR_5, VAR_21, VAR_22, VAR_23) < 0) {
   FUNC_16(VAR_4, VAR_2, 1, "CNTM set error");
   return -1;
  }
  if (FUNC_5(VAR_5, VAR_25, VAR_24) < 0) {
   FUNC_16(VAR_4, VAR_2, 1, "S01T set error");
   return -1;
  }
  FUNC_25(VAR_5, VAR_5->srate);
  if (FUNC_26(VAR_5, VAR_5->srate) < 0) {
   FUNC_16(VAR_4, VAR_2, 1, "smrt info get error");
   return -1;
  }

  VAR_31 = FUNC_33(VAR_5, VAR_5->srate);
  if (VAR_31 == 1)
   VAR_11 = VAR_5->frequency;

  else if (VAR_31 == 0) {
   if (VAR_5->frequency % 2 == 0) {
    VAR_11 = VAR_5->frequency;
   } else {
    VAR_11 = VAR_5->frequency + 1;
    if (VAR_11 > 2150)
     VAR_11 = VAR_5->frequency - 1;
   }
  }
  VAR_36 = 1;
  VAR_37 = VAR_11 * 1000;
  VAR_39 = 0 ;
  while (VAR_36 == 1) {
   VAR_37 = VAR_37 + VAR_14;
   VAR_39++;


   if (VAR_37 > 2150000) {
    VAR_36 = 0;
    VAR_39--;
   } else {
    if ((VAR_37 == 2150000) ||
        (VAR_37 - VAR_5->frequency * 1000 >= VAR_13 + VAR_5->srate / 4))
     VAR_36 = 0;
   }
  }

  VAR_36 = 1;
  VAR_37 = VAR_11 * 1000;
  VAR_40 = 0 ;
  while (VAR_36 == 1) {
   VAR_37 = VAR_37 - VAR_14;
   VAR_40--;


   if (VAR_37 < 950000) {
    VAR_36 = 0;
    VAR_40++;
   } else {
    if ((VAR_37 == 950000) ||
        (VAR_5->frequency * 1000 - VAR_37 >= VAR_13 + VAR_5->srate / 4))
     VAR_36 = 0;
   }
  }

  VAR_12 = (8000 + VAR_5->srate / 2) / VAR_5->srate;
  if (VAR_12 == 0)
   VAR_12 = 1;

  VAR_8 = 0;
  VAR_9 = 0;
  VAR_45 = 0;
  VAR_36 = 1;
  VAR_48 = 0;
  VAR_41 = 0;
  VAR_42 = 0;
  VAR_38 = 0;

  while (VAR_36 == 1) {
   FUNC_29(VAR_5, VAR_11, VAR_5->srate,
         VAR_38, VAR_31, VAR_14, &VAR_10,
         &VAR_47, &VAR_29, &VAR_30);

   FUNC_32(100);
   if (FUNC_23(VAR_5, VAR_10, VAR_5->srate, VAR_31) < 0) {
    FUNC_16(VAR_4, VAR_2, 1, "rf val set error");
    return -1;
   }
   FUNC_32(100);
   if (FUNC_12(VAR_5, VAR_29, VAR_30) < 0) {
    FUNC_16(VAR_4, VAR_2, 1, "afcex data set error");
    return -1;
   }
   if (FUNC_27(VAR_5) < 0) {
    FUNC_16(VAR_4, VAR_2, 1, "srst error");
    return -1;
   }
   FUNC_22(VAR_12);

   if (FUNC_20(VAR_5, 0x37, &VAR_20) != 2) {
    FUNC_16(VAR_4, VAR_2, 1, "I2C transfer error");
    return -1;
   }
   VAR_15[30 + VAR_38] = VAR_20 ;
   VAR_43 = FUNC_28(VAR_5, VAR_8, VAR_38, VAR_15, VAR_39, VAR_40,
            VAR_16, VAR_10, VAR_47,
            VAR_14, &VAR_20);

   VAR_46 = 0;
   for (VAR_9 = 0; VAR_9 < VAR_45; VAR_9++) {
    if ((FUNC_10(VAR_44[VAR_9] - VAR_43)) < (VAR_14 * 3 / 2)) {
     VAR_46 = 1;
     FUNC_16(VAR_4, VAR_3, 1, "Probably Duplicate Signal, j = %d", VAR_9);
    }
   }
   if ((VAR_46 == 0) && (VAR_43 > 0) && (FUNC_10(VAR_43 - VAR_5->frequency * 1000) < VAR_13 + VAR_5->srate / 6)) {
    FUNC_16(VAR_4, VAR_1, 1, "------ Signal detect ------ [swp_freq=[%07d, srate=%05d]]", VAR_43, VAR_5->srate);
    VAR_44[VAR_45] = VAR_43;
    VAR_45++;
    FUNC_30(VAR_5, VAR_5->srate, VAR_31, VAR_43,
           &VAR_47, &VAR_10,
           &VAR_29, &VAR_30);

    if (FUNC_23(VAR_5, VAR_10, VAR_5->srate, VAR_31) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "rf val set error");
     return -1;
    }
    if (FUNC_12(VAR_5, VAR_29, VAR_30) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "afcex data set error");
     return -1;
    }
    VAR_48 = FUNC_24(VAR_5, VAR_5->srate, &VAR_20);
    if (VAR_48 == 1) {
     FUNC_16(VAR_4, VAR_2, 1, "***** Signal Found *****");
     VAR_36 = 0;
    } else {
     FUNC_16(VAR_4, VAR_2, 1, "!!!!! No signal !!!!!, try again...");
     FUNC_25(VAR_5, VAR_5->srate);
     if (FUNC_26(VAR_5, VAR_5->srate) < 0) {
      FUNC_16(VAR_4, VAR_2, 1, "smrt set error");
      return -1;
     }
    }
   }
   if (VAR_38 > VAR_39)
    VAR_41 = 1 ;
   if (VAR_38 < VAR_40)
    VAR_42 = 1 ;
   VAR_8++;

   if ((VAR_8 % 2 == 1) && (VAR_41 == 1))
    VAR_8++;
   if ((VAR_8 % 2 == 0) && (VAR_42 == 1))
    VAR_8++;

   if (VAR_8 % 2 == 1)
    VAR_38 = (VAR_8 + 1) / 2;
   else
    VAR_38 = -VAR_8 / 2;

   if ((VAR_41 == 1) && (VAR_42 == 1))
    VAR_36 = 0 ;
  }

  if (VAR_48 == 1) {
   FUNC_16(VAR_4, VAR_3, 1, " Start Freq Error Check");
   VAR_25 = 7 ;
   VAR_24 = 1 ;
   VAR_17 = 0 ;
   VAR_18 = 1 ;
   VAR_19 = 0 ;

   if (FUNC_5(VAR_5, VAR_25, VAR_24) < 0) {
    FUNC_16(VAR_4, VAR_2, 1, "S01T set error");
    return -1;
   }
   FUNC_25(VAR_5, VAR_5->srate);
   if (FUNC_26(VAR_5, VAR_5->srate) < 0) {
    FUNC_16(VAR_4, VAR_2, 1, "smrt set error");
    return -1;
   }
   if (FUNC_3(VAR_5, VAR_17, VAR_18) < 0) {
    FUNC_16(VAR_4, VAR_2, 1, "EN set error");
    return -1;
   }
   if (FUNC_0(VAR_5, VAR_19, VAR_5->srate) < 0) {
    FUNC_16(VAR_4, VAR_2, 1, "AFCEXEN set error");
    return -1;
   }
   FUNC_13(VAR_5, VAR_47, &VAR_29, &VAR_30);
   if (FUNC_14(VAR_5, VAR_29, VAR_30) < 0) {
    FUNC_16(VAR_4, VAR_2, 1, "AFCOFS data set error");
    return -1;
   }
   if (FUNC_27(VAR_5) < 0) {
    FUNC_16(VAR_4, VAR_2, 1, "srst error");
    return -1;
   }

   VAR_12 = 200000 / VAR_5->master_clk + 200000 / VAR_5->srate;
   FUNC_21(VAR_12);
   VAR_49 = FUNC_11(VAR_5);
   if (VAR_49 == -1)
    return -1;

   VAR_43 = VAR_10 * 1000 + VAR_49 ;
   VAR_19 = 1 ;
   if (VAR_5->srate >= 1500)
    VAR_53 = VAR_5->srate / 3;
   else
    VAR_53 = VAR_5->srate / 2;
   FUNC_25(VAR_5, VAR_53);
   if (FUNC_26(VAR_5, VAR_53) < 0) {
    FUNC_16(VAR_4, VAR_2, 1, "smrt set error");
    return -1;
   }
   if (FUNC_0(VAR_5, VAR_19, VAR_53) < 0) {
    FUNC_16(VAR_4, VAR_2, 1, "AFCEXEN set error");
    return -1;
   }
   VAR_31 = FUNC_33(VAR_5, VAR_53);
   if (FUNC_2(VAR_5, 2, 0) < 0) {
    FUNC_16(VAR_4, VAR_2, 1, "DAGC data set error");
    return -1;
   }
   for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
    VAR_50 = VAR_43 + (VAR_8 - 1) * VAR_5->srate / 8;
    FUNC_30(VAR_5, VAR_53, VAR_31, VAR_50, &VAR_47, &VAR_10, &VAR_29, &VAR_30);
    if (FUNC_23(VAR_5, VAR_10, VAR_53, VAR_31) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "rf val set error");
     return -1;
    }
    if (FUNC_12(VAR_5, VAR_29, VAR_30) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "afcex data set error");
     return -1;
    }
    VAR_12 = 200000 / VAR_5->master_clk + 40000 / VAR_53;
    FUNC_21(VAR_12);
    VAR_52[VAR_8] = FUNC_15(VAR_5);
   }
   if ((VAR_52[0] > VAR_52[1]) &&
       (VAR_52[0] > VAR_52[2]) &&
       (VAR_52[0] - VAR_52[1] > 2 * (VAR_52[2] - VAR_52[1]))) {

    VAR_50 = VAR_43 - 2 * VAR_5->srate / 8;
    FUNC_30(VAR_5, VAR_53, VAR_31, VAR_50, &VAR_47, &VAR_10, &VAR_29, &VAR_30);
    if (FUNC_23(VAR_5, VAR_10, VAR_53, VAR_31) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "rf val set error");
     return -1;
    }
    if (FUNC_12(VAR_5, VAR_29, VAR_30) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "afcex data set");
     return -1;
    }
    VAR_12 = 200000 / VAR_5->master_clk + 40000 / VAR_53;
    FUNC_21(VAR_12);
    VAR_52[3] = FUNC_15(VAR_5);
    if (VAR_52[3] > VAR_52[1])
     VAR_51 = (VAR_52[2] - VAR_52[0] + VAR_52[1] - VAR_52[3]) * VAR_5->srate / 300;
    else
     VAR_51 = 0;
   } else if ((VAR_52[2] > VAR_52[1]) &&
       (VAR_52[2] > VAR_52[0]) &&
       (VAR_52[2] - VAR_52[1] > 2 * (VAR_52[0] - VAR_52[1]))) {

    VAR_50 = VAR_43 + 2 * VAR_5->srate / 8;
    FUNC_30(VAR_5, VAR_53, VAR_31, VAR_50, &VAR_47, &VAR_10, &VAR_29, &VAR_30);
    if (FUNC_23(VAR_5, VAR_10, VAR_53, VAR_31) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "rf val set");
     return -1;
    }
    if (FUNC_12(VAR_5, VAR_29, VAR_30) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "afcex data set");
     return -1;
    }
    VAR_12 = 200000 / VAR_5->master_clk + 40000 / VAR_53;
    FUNC_21(VAR_12);
    VAR_52[3] = FUNC_15(VAR_5);
    if (VAR_52[3] > VAR_52[1])
     VAR_51 = (VAR_52[2] - VAR_52[0] + VAR_52[3] - VAR_52[1]) * VAR_5->srate / 300;
    else
     VAR_51 = 0 ;

   } else {
    VAR_51 = 0 ;
   }
   FUNC_16(VAR_4, VAR_3, 1, "SWEEP Frequency = %d", VAR_43);
   VAR_43 += VAR_51;
   FUNC_16(VAR_4, VAR_3, 1, "Adjusting .., DELTA Freq = %d, SWEEP Freq=%d", VAR_51, VAR_43);
   if (FUNC_10(VAR_5->frequency * 1000 - VAR_43) > 3800) {
    FUNC_16(VAR_4, VAR_3, 1, "NO  --  SIGNAL !");
   } else {

    VAR_25 = 0;
    VAR_24 = 3;
    VAR_17 = 1;
    VAR_18 = 0;
    VAR_19 = 1;

    if (FUNC_5(VAR_5, VAR_25, VAR_24) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "S01T set error");
     return -1;
    }
    if (FUNC_2(VAR_5, 0, 0) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "DAGC data set error");
     return -1;
    }
    VAR_31 = FUNC_33(VAR_5, VAR_5->srate);
    FUNC_25(VAR_5, VAR_5->srate);
    if (FUNC_26(VAR_5, VAR_5->srate) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "smrt set error");
     return -1;
    }
    if (FUNC_3(VAR_5, VAR_17, VAR_18) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "EN set error");
     return -1;
    }
    if (FUNC_0(VAR_5, VAR_19, VAR_5->srate) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "AFCEXEN set error");
     return -1;
    }
    FUNC_30(VAR_5, VAR_5->srate, VAR_31, VAR_43, &VAR_47, &VAR_10, &VAR_29, &VAR_30);
    if (FUNC_23(VAR_5, VAR_10, VAR_5->srate, VAR_31) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "rf val set error");
     return -1;
    }
    if (FUNC_12(VAR_5, VAR_29, VAR_30) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "afcex data set error");
     return -1;
    }
    if (FUNC_27(VAR_5) < 0) {
     FUNC_16(VAR_4, VAR_2, 1, "srst error");
     return -1;
    }
    VAR_12 = 7 + (10000 + VAR_5->srate / 2) / VAR_5->srate;
    if (VAR_12 == 0)
     VAR_12 = 1;
    FUNC_22(VAR_12);
    if (FUNC_20(VAR_5, 0x37, &VAR_20) != 2) {
     FUNC_16(VAR_4, VAR_2, 1, "I2C transfer error");
     return -VAR_0;
    }

    if (VAR_20 > 110) {
     VAR_26 = 4; VAR_27 = 1; VAR_28 = 6; VAR_33 = 4; VAR_34 = 6;
     VAR_12 = 7 + (917504 + VAR_5->srate / 2) / VAR_5->srate;
    } else if (VAR_20 > 105) {
     VAR_26 = 4; VAR_27 = 2; VAR_28 = 8; VAR_33 = 7; VAR_34 = 2;
     VAR_12 = 7 + (1048576 + VAR_5->srate / 2) / VAR_5->srate;
    } else if (VAR_20 > 85) {
     VAR_26 = 5; VAR_27 = 2; VAR_28 = 8; VAR_33 = 7; VAR_34 = 2;
     VAR_12 = 7 + (1310720 + VAR_5->srate / 2) / VAR_5->srate;
    } else if (VAR_20 > 65) {
     VAR_26 = 6; VAR_27 = 2; VAR_28 = 8; VAR_33 = 7; VAR_34 = 2;
     VAR_12 = 7 + (1572864 + VAR_5->srate / 2) / VAR_5->srate;
    } else {
     VAR_26 = 7; VAR_27 = 2; VAR_28 = 8; VAR_33 = 7; VAR_34 = 2;
     VAR_12 = 7 + (2097152 + VAR_5->srate / 2) / VAR_5->srate;
    }
    VAR_12 *= 2;
    FUNC_6(VAR_5, VAR_26);
    FUNC_7(VAR_5, VAR_27, VAR_28);
    FUNC_9(VAR_5, VAR_33, VAR_34);
    FUNC_27(VAR_5);
    FUNC_22(VAR_12);
    VAR_56 = FUNC_31(VAR_5, &VAR_32);
    FUNC_16(VAR_4, VAR_3, 1, "-------- Viterbi=[%d] SYNC=[%d] ---------", VAR_32, VAR_56);
    if (VAR_32) {
     if (VAR_32 == 4) {

      if (VAR_20 > 110)
       VAR_12 = (786432 + VAR_5->srate / 2) / VAR_5->srate;
      else
       VAR_12 = (1572864 + VAR_5->srate / 2) / VAR_5->srate;
      if (VAR_5->srate < 5000)

       FUNC_22(VAR_12);
      else
       FUNC_22(VAR_12);

      if (FUNC_31(VAR_5, &VAR_35) == 0) {
       FUNC_19(VAR_5, 1);
       FUNC_4(VAR_5);
      }
     }

     if (VAR_20 > 110)
      VAR_12 = (786432 + VAR_5->srate / 2) / VAR_5->srate;
     else
      VAR_12 = (1572864 + VAR_5->srate / 2) / VAR_5->srate;
     FUNC_22(VAR_12);
     FUNC_8(VAR_5, 1);
    } else {
     FUNC_16(VAR_4, VAR_3, 1, "NO  -- SYNC");
     FUNC_8(VAR_5, 1);
     VAR_55 = -1;
    }
   }
  } else {
   FUNC_16(VAR_4, VAR_3, 1, "NO  -- SIGNAL");
   VAR_55 = -1;
  }

  VAR_56 = FUNC_31(VAR_5, &VAR_35);
  if (VAR_56) {
   FUNC_16(VAR_4, VAR_3, 1, "******* SYNC *******");
   FUNC_17(VAR_5, VAR_5->frequency, VAR_5->srate, 1);
   VAR_55 = 0;
   break;
  }
 }

 FUNC_20(VAR_5, 0x15, &VAR_6);
 FUNC_20(VAR_5, 0x26, &VAR_7);
 FUNC_16(VAR_4, VAR_3, 1, "AGC = %02x CNM = %02x", VAR_6, VAR_7);

 return VAR_55;
}
