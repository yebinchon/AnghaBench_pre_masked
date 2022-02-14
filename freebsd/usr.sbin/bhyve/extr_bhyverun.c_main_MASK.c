
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct vmctx*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vmctx*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_10 ;
 struct vmctx* FUNC_9 (char*) ;
 int VAR_11 ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct vmctx*,int ,int ,int ) ;
 int FUNC_13 (struct vmctx*,int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 () ;
 int FUNC_16 (int,char**,char*) ;
 int VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct vmctx*,int,int) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 scalar_t__ FUNC_23 (struct vmctx*) ;
 int FUNC_24 (struct vmctx*) ;
 scalar_t__ FUNC_25 () ;
 int FUNC_26 (char*) ;
 int FUNC_27 () ;
 scalar_t__ VAR_16 ;
 int FUNC_28 () ;
 int FUNC_29 (struct vmctx*,int) ;
 int FUNC_30 (struct vmctx*) ;
 char* VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_31 (struct vmctx*) ;
 int FUNC_32 (char*) ;
 int FUNC_33 () ;
 int FUNC_34 (char*) ;
 int FUNC_35 (char*) ;
 int VAR_19 ;
 int FUNC_36 (struct vmctx*,int) ;
 int FUNC_37 (struct vmctx*) ;
 int FUNC_38 (char*,char*) ;
 int FUNC_39 (struct vmctx*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_40 (char*) ;
 int FUNC_41 (char*,char*,int ) ;
 int VAR_24 ;
 int FUNC_42 (char*) ;
 int FUNC_43 (int) ;
 int FUNC_44 (struct vmctx*,int ) ;
 int VAR_25 ;
 int FUNC_45 (struct vmctx*,int ,int ,int *) ;
 int FUNC_46 (char*,size_t*) ;
 scalar_t__ FUNC_47 (struct vmctx*,int ,int ,int) ;
 int FUNC_48 (struct vmctx*,int) ;
 int FUNC_49 (struct vmctx*,size_t,int ) ;
 char* VAR_26 ;
 int VAR_27 ;

int
FUNC_50(int VAR_28, char *VAR_29[])
{
 int VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
 int VAR_36, VAR_37, VAR_38;
 int VAR_39;
 bool VAR_40;
 struct vmctx *VAR_41;
 uint64_t VAR_42;
 size_t VAR_43;
 char *VAR_44;

 VAR_35 = 0;
 VAR_19 = FUNC_4(VAR_29[0]);
 VAR_32 = 0;
 VAR_33 = 0;
 VAR_40 = 0;
 VAR_12 = 1;
 VAR_20 = VAR_10 = VAR_24 = 1;
 VAR_16 = 0;
 VAR_43 = 256 * VAR_3;
 VAR_37 = 1;
 VAR_39 = 1;
 VAR_38 = 0;

 VAR_44 = "abehuwxACHIPSWYp:g:G:c:s:m:l:U:";
 while ((VAR_30 = FUNC_16(VAR_28, VAR_29, VAR_44)) != -1) {
  switch (VAR_30) {
  case 'a':
   VAR_27 = 0;
   break;
  case 'A':
   VAR_9 = 1;
   break;
  case 'b':
   VAR_35 = 1;
   break;
  case 'p':
                        if (FUNC_35(VAR_17) != 0) {
                            FUNC_10(VAR_2, "invalid vcpu pinning "
                                 "configuration '%s'", VAR_17);
                        }
   break;
                case 'c':
   if (FUNC_42(VAR_17) != 0) {
       FUNC_10(VAR_2, "invalid cpu topology "
    "'%s'", VAR_17);
   }
   break;
  case 'C':
   VAR_38 |= VAR_5;
   break;
  case 'g':
   VAR_32 = FUNC_3(VAR_17);
   break;
  case 'G':
   if (VAR_17[0] == 'w') {
    VAR_40 = 1;
    VAR_17++;
   }
   VAR_33 = FUNC_3(VAR_17);
   break;
  case 'l':
   if (FUNC_41(VAR_17, "help", FUNC_40(VAR_17)) == 0) {
    FUNC_27();
    FUNC_11(0);
   } else if (FUNC_26(VAR_17) != 0) {
    FUNC_10(VAR_2, "invalid lpc device "
        "configuration '%s'", VAR_17);
   }
   break;
  case 's':
   if (FUNC_41(VAR_17, "help", FUNC_40(VAR_17)) == 0) {
    FUNC_33();
    FUNC_11(0);
   } else if (FUNC_32(VAR_17) != 0)
    FUNC_11(4);
   else
    break;
  case 'S':
   VAR_38 |= VAR_6;
   break;
                case 'm':
   VAR_31 = FUNC_46(VAR_17, &VAR_43);
   if (VAR_31)
    FUNC_10(VAR_2, "invalid memsize '%s'", VAR_17);
   break;
  case 'H':
   VAR_14 = 1;
   break;
  case 'I':







   break;
  case 'P':
   VAR_15 = 1;
   break;
  case 'e':
   VAR_22 = 1;
   break;
  case 'u':
   VAR_39 = 0;
   break;
  case 'U':
   VAR_13 = VAR_17;
   break;
  case 'w':
   VAR_23 = 0;
   break;
  case 'W':
   VAR_25 = 0;
   break;
  case 'x':
   VAR_27 = 1;
   break;
  case 'Y':
   VAR_37 = 0;
   break;
  case 'h':
   FUNC_43(0);
  default:
   FUNC_43(1);
  }
 }
 VAR_28 -= VAR_18;
 VAR_29 += VAR_18;

 if (VAR_28 != 1)
  FUNC_43(1);

 VAR_26 = VAR_29[0];
 VAR_41 = FUNC_9(VAR_26);

 VAR_36 = FUNC_30(VAR_41);
 if (VAR_12 > VAR_36) {
  FUNC_14(VAR_21, "%d vCPUs requested but only %d available\n",
   VAR_12, VAR_36);
  FUNC_11(4);
 }

 FUNC_13(VAR_41, VAR_0);

 FUNC_48(VAR_41, VAR_38);
 VAR_34 = FUNC_49(VAR_41, VAR_43, VAR_7);
 if (VAR_34) {
  FUNC_14(VAR_21, "Unable to setup memory (%d)\n", VAR_11);
  FUNC_11(4);
 }

 VAR_31 = FUNC_22();
 if (VAR_31) {
  FUNC_14(VAR_21, "init_msr error %d", VAR_31);
  FUNC_11(4);
 }

 FUNC_21();
 FUNC_20();
 FUNC_2(VAR_41);
 FUNC_31(VAR_41);
 FUNC_24(VAR_41);

 FUNC_36(VAR_41, VAR_39);
 FUNC_37(VAR_41);




 if (FUNC_23(VAR_41) != 0) {
  FUNC_34("device emulation initialization error");
  FUNC_11(4);
 }

 if (VAR_32 != 0)
  FUNC_18(VAR_32);

 if (VAR_33 != 0)
  FUNC_19(VAR_41, VAR_33, VAR_40);

 if (VAR_35)
  FUNC_17();

 if (FUNC_25()) {
  if (FUNC_47(VAR_41, VAR_0, VAR_4, 1)) {
   FUNC_14(VAR_21, "ROM boot failed: unrestricted guest "
       "capability not available\n");
   FUNC_11(4);
  }
  VAR_31 = FUNC_44(VAR_41, VAR_0);
  FUNC_1(VAR_31 == 0);
 }

 VAR_31 = FUNC_45(VAR_41, VAR_0, VAR_8, &VAR_42);
 FUNC_1(VAR_31 == 0);




 if (VAR_37) {
  VAR_31 = FUNC_29(VAR_41, VAR_12);
  if (VAR_31) {
   FUNC_34("error to build the guest tables");
   FUNC_11(4);
  }
 }

 VAR_31 = FUNC_39(VAR_41);
 FUNC_1(VAR_31 == 0);

 if (VAR_9) {
  VAR_31 = FUNC_0(VAR_41, VAR_12);
  FUNC_1(VAR_31 == 0);
 }

 if (FUNC_25())
  FUNC_15();




 FUNC_38("%s", VAR_26);


 FUNC_5();

 if (FUNC_8() == -1 || FUNC_7() == -1)
  FUNC_10(VAR_1, "Unable to apply rights for sandbox");

 if (FUNC_6() == -1)
  FUNC_10(VAR_1, "cap_enter() failed");





 FUNC_12(VAR_41, VAR_0, VAR_0, VAR_42);




 FUNC_28();

 FUNC_11(4);
}
