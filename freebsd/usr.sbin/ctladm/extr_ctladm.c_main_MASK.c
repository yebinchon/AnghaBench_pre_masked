
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ctladm_optret ;
typedef int ctladm_cmdfunction ;
typedef int ctladm_cmdargs ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,int,char**,char*) ;
 int FUNC_1 (int,int,int,char**,char*) ;
 int FUNC_2 (int,int,char**,char*) ;
 int FUNC_3 (int,int,char**) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,int,char**,char*) ;
 int FUNC_6 (int,int,int,int) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int,int,char**,char*) ;
 int FUNC_9 (int,int,char**,char*) ;
 int FUNC_10 (int,int,char**,char*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int,char**,char*) ;
 int FUNC_13 (int,int,int,int,int,char**,char*) ;
 int FUNC_14 (int,int,char**,char*) ;
 int FUNC_15 (int,int,int,int,char**,char*,int) ;
 int FUNC_16 (int,int,int,int,char**,char*,int) ;
 int FUNC_17 (int,int,char**,char*) ;
 int FUNC_18 (int,int,char**,char*) ;
 int FUNC_19 (int,int,int,int,int,char**,char*) ;
 int FUNC_20 (int,int,int,int,int,char**,char*,int) ;
 int FUNC_21 (int,int,int,int) ;
 int FUNC_22 (int,int,int) ;
 int FUNC_23 (int,int,int,int) ;
 int FUNC_24 (int,int,char**,char*) ;
 int FUNC_25 (int,int,int,int,int,int,char**,char*) ;
 int FUNC_26 (int,int,int,int,int,char**,char*) ;
 int FUNC_27 (int,int,int,int) ;
 int FUNC_28 (int) ;
 int VAR_11 ;
 int FUNC_29 (int) ;
 int FUNC_30 (int ,char*,char*,...) ;
 int FUNC_31 (int,char**,char*) ;
 scalar_t__ FUNC_32 (int ,char*,int*,int*,char const**) ;
 int FUNC_33 (char) ;
 int FUNC_34 (char*) ;
 int FUNC_35 (char*) ;
 int FUNC_36 (char*,int ) ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_37 (char*,char*,char const*,...) ;
 int VAR_16 ;
 char* FUNC_38 (char*) ;
 char* FUNC_39 (int) ;
 int FUNC_40 (char*,int *,int ) ;
 int FUNC_41 (int) ;
 int FUNC_42 (char*) ;
 int FUNC_43 (char*,char*) ;

int
FUNC_44(int VAR_17, char **VAR_18)
{
 int VAR_19;
 ctladm_cmdfunction VAR_20;
 ctladm_cmdargs VAR_21;
 ctladm_optret VAR_22;
 char *VAR_23;
 const char *VAR_24 = "C:D:I:";
 const char *VAR_25 = ((void*)0);
 char VAR_26[256];
 int VAR_27;
 int VAR_28 = 2;
 int VAR_29, VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;

 VAR_29 = 0;
 VAR_21 = VAR_5;
 VAR_20 = 152;
 VAR_23 = ((void*)0);
 VAR_30 = -1;
 VAR_31 = 0;
 VAR_27 = 0;
 VAR_32 = 7;

 if (VAR_17 < 2) {
  FUNC_41(1);
  VAR_29 = 1;
  goto bailout;
 }




 VAR_22 = FUNC_32(VAR_14,VAR_18[1], &VAR_20, &VAR_21,&VAR_25);

 if (VAR_22 == VAR_0) {
  FUNC_43("ambiguous option %s", VAR_18[1]);
  FUNC_41(0);
  FUNC_29(1);
 } else if (VAR_22 == VAR_1) {
  FUNC_43("option %s not found", VAR_18[1]);
  FUNC_41(0);
  FUNC_29(1);
 }

 if (VAR_21 & VAR_4) {
  if ((VAR_17 < 3) || (!FUNC_33(VAR_18[2][0]))) {
   FUNC_43("option %s requires a lun argument",
         VAR_18[1]);
   FUNC_41(0);
   FUNC_29(1);
  }
  VAR_27 = FUNC_40(VAR_18[2], ((void*)0), 0);

  VAR_21 |= VAR_7;
  VAR_28++;
 }
 if (VAR_25 != ((void*)0))
  FUNC_37(VAR_26, "%s%s", VAR_24, VAR_25);
 else
  FUNC_37(VAR_26, "%s", VAR_24);






 VAR_13 = VAR_28;






 while ((VAR_19 = FUNC_31(VAR_17, VAR_18, VAR_26))!= -1){
  switch (VAR_19) {
  case 'C':
   VAR_21 |= VAR_6;
   VAR_31 = FUNC_40(VAR_12, ((void*)0), 0);
   break;
  case 'D':
   VAR_23 = FUNC_38(VAR_12);
   VAR_21 |= VAR_2;
   break;
  case 'I':
   VAR_21 |= VAR_3;
   VAR_32 = FUNC_40(VAR_12, ((void*)0), 0);
   break;
  default:
   break;
  }
 }

 if ((VAR_21 & VAR_3) == 0)
  VAR_32 = 7;

 VAR_13 = VAR_28;
 VAR_15 = 1;




 if (((VAR_21 & VAR_2) == 0)
  && (VAR_20 != 152)) {
  VAR_23 = FUNC_38(VAR_8);
  VAR_21 |= VAR_2;
 }

 if ((VAR_21 & VAR_2)
  && (VAR_20 != 152)) {
  VAR_30 = FUNC_36(VAR_23, VAR_10);
  if (VAR_30 == -1 && VAR_11 == VAR_9) {
   VAR_33 = VAR_11;
   VAR_29 = FUNC_34("ctl");
   if (VAR_29 != -1)
    VAR_30 = FUNC_36(VAR_23, VAR_10);
   else
    VAR_11 = VAR_33;
  }
  if (VAR_30 == -1) {
   FUNC_30(VAR_16, "%s: error opening %s: %s\n",
    VAR_18[0], VAR_23, FUNC_39(VAR_11));
   VAR_29 = 1;
   goto bailout;
  }







 } else if ((VAR_20 != 152)
  && ((VAR_21 & VAR_2) == 0)) {
  FUNC_30(VAR_16, "%s: you must specify a device with the "
   "--device argument for this command\n", VAR_18[0]);
  VAR_20 = 152;
  VAR_29 = 1;
 }

 switch (VAR_20) {
 case 129:
  VAR_29 = FUNC_27(VAR_30, VAR_27, VAR_32, VAR_31);
  break;
 case 151:
  VAR_29 = FUNC_6(VAR_30, VAR_27, VAR_32, VAR_31);
  break;
 case 135:
  VAR_29 = FUNC_23(VAR_30, VAR_27, VAR_32, VAR_31);
  break;
 case 136:
  VAR_29 = FUNC_21(VAR_30, VAR_27, VAR_32, VAR_31);
  break;
 case 158:
  VAR_29 = FUNC_0(VAR_30, VAR_17, VAR_18, VAR_26);
  break;
 case 134:
  VAR_29 = FUNC_24(VAR_30, VAR_17, VAR_18, VAR_26);
  break;
 case 156:
  VAR_29 = FUNC_2(VAR_30, VAR_17, VAR_18, VAR_26);
  break;
 case 138:
 case 128:
  VAR_29 = FUNC_20(VAR_30, VAR_27, VAR_32, VAR_31,
      VAR_17, VAR_18, VAR_26, VAR_20);
  break;
 case 142:
  VAR_29 = FUNC_17(VAR_30, VAR_17, VAR_18, VAR_26);
  break;
 case 141:
  VAR_29 = FUNC_18(VAR_30, VAR_17, VAR_18, VAR_26);
  break;
 case 145:
  VAR_29 = FUNC_12(VAR_30, VAR_17, VAR_18, VAR_26);
  break;
 case 137:
  VAR_29 = FUNC_19(VAR_30, VAR_27, VAR_32, VAR_31,
         VAR_17, VAR_18, VAR_26);
  break;
 case 144:
  VAR_29 = FUNC_13(VAR_30, VAR_27, VAR_32, VAR_31,
      VAR_17, VAR_18, VAR_26);
  break;
 case 132:
 case 131:
  VAR_29 = FUNC_25(VAR_30, VAR_27, VAR_32, VAR_31,
      (VAR_20 == 132) ? 1 : 0,
      VAR_17, VAR_18, VAR_26);
  break;
 case 130:
  VAR_29 = FUNC_26(VAR_30, VAR_27, VAR_32, VAR_31,
      VAR_17, VAR_18, VAR_26);
  break;
 case 146:
  VAR_29 = FUNC_11(VAR_30);
  break;
 case 157:
  VAR_29 = FUNC_1(VAR_30, VAR_27, VAR_17, VAR_18, VAR_26);
  break;
 case 153:
  VAR_29 = FUNC_5(VAR_30, VAR_27, VAR_17, VAR_18,
        VAR_26);
  break;
 case 155:
  VAR_29 = FUNC_3(VAR_30, VAR_17, VAR_18);
  break;
 case 154:
  VAR_29 = FUNC_4(VAR_30, VAR_21);
  break;
 case 140:
  VAR_29 = FUNC_15(VAR_30, VAR_27, VAR_32,
                                      VAR_17, VAR_18, VAR_26,
          VAR_31);
  break;
 case 139:
  VAR_29 = FUNC_16(VAR_30, VAR_27, VAR_32,
           VAR_17, VAR_18, VAR_26,
           VAR_31);
  break;
 case 150:
         VAR_29 = FUNC_7(VAR_30, VAR_27, VAR_32);
  break;
 case 133:
         VAR_29 = FUNC_22(VAR_30, VAR_27, VAR_32);
  break;
 case 143:
         VAR_29 = FUNC_14(VAR_30, VAR_17, VAR_18, VAR_26);
  break;
 case 149:
         VAR_29 = FUNC_8(VAR_30, VAR_17, VAR_18, VAR_26);
  break;
 case 148:
         VAR_29 = FUNC_9(VAR_30, VAR_17, VAR_18, VAR_26);
  break;
 case 147:
         VAR_29 = FUNC_10(VAR_30, VAR_17, VAR_18, VAR_26);
  break;
 case 152:
 default:
  FUNC_41(VAR_29);
  break;
 }
bailout:

 if (VAR_30 != -1)
  FUNC_28(VAR_30);

 FUNC_29 (VAR_29);
}
