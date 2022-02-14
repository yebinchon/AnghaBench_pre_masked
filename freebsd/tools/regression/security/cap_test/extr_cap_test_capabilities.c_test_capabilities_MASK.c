
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int FUNC_0 (int ) ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,char*,int ) ;

int
FUNC_11(void)
{
 int VAR_72, VAR_73, VAR_74;
 int VAR_75 = VAR_71;
 char VAR_76[] = "/tmp/cap_test.XXXXXXXXXX";
 char VAR_77[] = "/tmp/cap_test.XXXXXXXXXX";

 VAR_72 = FUNC_5(VAR_76);
 if (VAR_72 < 0)
  FUNC_3(-1, "mkstemp");
 if (FUNC_4(VAR_77) == ((void*)0)) {
  FUNC_0(FUNC_9(VAR_76));
  FUNC_3(-1, "mkdtemp");
 }
 VAR_73 = FUNC_6(VAR_77, VAR_70 | VAR_69);
 if (VAR_73 == -1) {
  FUNC_0(FUNC_9(VAR_76));
  FUNC_0(FUNC_7(VAR_77));
  FUNC_3(-1, "open");
 }
 VAR_74 = FUNC_6("/tmp", VAR_70 | VAR_69);
 if (VAR_74 == -1) {
  FUNC_0(FUNC_9(VAR_76));
  FUNC_0(FUNC_7(VAR_77));
  FUNC_3(-1, "open");
 }

 if (FUNC_2() == -1) {
  FUNC_0(FUNC_9(VAR_76));
  FUNC_0(FUNC_7(VAR_77));
  FUNC_3(-1, "cap_enter");
 }

 FUNC_1(VAR_55);
 FUNC_1(VAR_68);
 FUNC_1(VAR_58);
 FUNC_1(VAR_53);
 FUNC_1(VAR_54);
 FUNC_1(VAR_55 | VAR_68);
 FUNC_1(VAR_53 | VAR_54);
 FUNC_1(VAR_40);
 FUNC_1(VAR_41);
 FUNC_1(VAR_45);
 FUNC_1(VAR_47);
 FUNC_1(VAR_42);
 FUNC_1(VAR_44);
 FUNC_1(VAR_46);
 FUNC_1(VAR_43);
 FUNC_1(VAR_8 | VAR_55 | VAR_34);
 FUNC_1(VAR_8 | VAR_68 | VAR_34);
 FUNC_1(VAR_8 | VAR_55 | VAR_68 | VAR_34);



 FUNC_1(VAR_25);
 FUNC_1(VAR_25 | VAR_55 | VAR_34);
 FUNC_1(VAR_25 | VAR_68 | VAR_34);
 FUNC_1(VAR_25 | VAR_55 | VAR_68 | VAR_34);
 FUNC_1(VAR_26);
 FUNC_1(VAR_26 | VAR_55 | VAR_34);
 FUNC_1(VAR_26 | VAR_68 | VAR_34);
 FUNC_1(VAR_26 | VAR_55 | VAR_68 | VAR_34);



 FUNC_1(VAR_15);
 FUNC_1(VAR_17);
 FUNC_1(VAR_17 | VAR_34);
 FUNC_1(VAR_16 | VAR_34);
 FUNC_1(VAR_18);



 FUNC_1(VAR_21);



 FUNC_1(VAR_23 | VAR_34);
 FUNC_1(VAR_24);
 FUNC_1(VAR_27 | VAR_34);
 FUNC_1(VAR_32 | VAR_34);
 FUNC_1(VAR_37 | VAR_34);
 FUNC_1(VAR_38 | VAR_34);
 FUNC_1(VAR_39 | VAR_34);
 FUNC_1(VAR_65 | VAR_34);
 FUNC_1(VAR_67 | VAR_34);

 FUNC_1(VAR_57 | VAR_67 | VAR_34);
 (void)FUNC_10(VAR_74, VAR_76 + FUNC_8("/tmp/"), 0);
 (void)FUNC_10(VAR_74, VAR_77 + FUNC_8("/tmp/"), VAR_0);

 return (VAR_75);
}
