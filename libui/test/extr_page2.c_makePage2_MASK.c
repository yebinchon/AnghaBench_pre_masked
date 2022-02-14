
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiTab ;
typedef int uiGroup ;
typedef int uiEntry ;
typedef int uiButton ;
typedef int uiBox ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int ** VAR_7 ;
 size_t VAR_8 ;
 int * VAR_9 ;
 int * FUNC_0 (char*) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int ) ;
 int * FUNC_14 (char*) ;
 int * FUNC_15 () ;
 int * FUNC_16 (char*) ;
 int FUNC_17 (int *,char*,int ) ;

uiBox *FUNC_18(void)
{
 uiBox *VAR_14;
 uiBox *VAR_15;
 uiGroup *VAR_16;
 uiBox *VAR_17;
 uiButton *VAR_18;
 uiBox *VAR_19;
 uiBox *VAR_20;
 uiBox *VAR_21;
 uiBox *VAR_22;
 uiTab *VAR_23;
 uiEntry *VAR_24;
 uiEntry *VAR_25;
 uiButton *VAR_26;

 VAR_14 = FUNC_3();

 VAR_16 = FUNC_0("Moving Label");
 VAR_12 = VAR_16;
 FUNC_4(VAR_14, FUNC_6(VAR_16), 0);
 VAR_17 = FUNC_3();
 FUNC_13(VAR_16, FUNC_6(VAR_17));

 VAR_15 = FUNC_1();
 VAR_18 = FUNC_14("Move the Label!");
 FUNC_5(VAR_18, VAR_4, ((void*)0));
 FUNC_4(VAR_15, FUNC_6(VAR_18), 1);

 FUNC_4(VAR_15, FUNC_6(FUNC_16("")), 1);
 FUNC_4(VAR_17, FUNC_6(VAR_15), 0);

 VAR_15 = FUNC_1();
 VAR_7[0] = FUNC_3();
 FUNC_4(VAR_15, FUNC_6(VAR_7[0]), 1);
 VAR_7[1] = FUNC_3();
 FUNC_4(VAR_15, FUNC_6(VAR_7[1]), 1);
 FUNC_4(VAR_17, FUNC_6(VAR_15), 0);

 VAR_8 = 0;
 VAR_9 = FUNC_16("This label moves!");
 FUNC_4(VAR_7[VAR_8], FUNC_6(VAR_9), 0);

 VAR_15 = FUNC_1();
 VAR_18 = FUNC_14(VAR_5);
 FUNC_5(VAR_18, VAR_6, ((void*)0));
 FUNC_4(VAR_15, FUNC_6(VAR_18), 0);
 FUNC_4(VAR_14, FUNC_6(VAR_15), 0);
 VAR_3 = 0;

 VAR_15 = FUNC_1();
 FUNC_4(VAR_15, FUNC_6(FUNC_16("Label Alignment Test")), 0);
 VAR_18 = FUNC_14("Open Menued Window");
 FUNC_5(VAR_18, VAR_11, VAR_18);
 FUNC_4(VAR_15, FUNC_6(VAR_18), 0);
 VAR_18 = FUNC_14("Open Menuless Window");
 FUNC_5(VAR_18, VAR_11, ((void*)0));
 FUNC_4(VAR_15, FUNC_6(VAR_18), 0);
 VAR_18 = FUNC_14("Disabled Menued");
 FUNC_5(VAR_18, VAR_10, VAR_18);
 FUNC_4(VAR_15, FUNC_6(VAR_18), 0);
 VAR_18 = FUNC_14("Disabled Menuless");
 FUNC_5(VAR_18, VAR_10, ((void*)0));
 FUNC_4(VAR_15, FUNC_6(VAR_18), 0);
 FUNC_4(VAR_14, FUNC_6(VAR_15), 0);

 VAR_19 = FUNC_1();
 VAR_20 = FUNC_1();
 FUNC_4(VAR_20, FUNC_6(FUNC_14("These")), 0);
 VAR_18 = FUNC_14("buttons");
 FUNC_7(FUNC_6(VAR_18));
 FUNC_4(VAR_20, FUNC_6(VAR_18), 0);
 FUNC_4(VAR_19, FUNC_6(VAR_20), 0);
 VAR_20 = FUNC_1();
 FUNC_4(VAR_20, FUNC_6(FUNC_14("are")), 0);
 VAR_21 = FUNC_1();
 VAR_18 = FUNC_14("in");
 FUNC_7(FUNC_6(VAR_18));
 FUNC_4(VAR_21, FUNC_6(VAR_18), 0);
 FUNC_4(VAR_20, FUNC_6(VAR_21), 0);
 FUNC_4(VAR_19, FUNC_6(VAR_20), 0);
 VAR_20 = FUNC_1();
 VAR_21 = FUNC_1();
 FUNC_4(VAR_21, FUNC_6(FUNC_14("nested")), 0);
 VAR_22 = FUNC_1();
 VAR_18 = FUNC_14("boxes");
 FUNC_7(FUNC_6(VAR_18));
 FUNC_4(VAR_22, FUNC_6(VAR_18), 0);
 FUNC_4(VAR_21, FUNC_6(VAR_22), 0);
 FUNC_4(VAR_20, FUNC_6(VAR_21), 0);
 FUNC_4(VAR_19, FUNC_6(VAR_20), 0);
 FUNC_4(VAR_14, FUNC_6(VAR_19), 0);

 VAR_15 = FUNC_1();
 VAR_18 = FUNC_14("Enable Nested Box");
 FUNC_5(VAR_18, VAR_2, VAR_19);
 FUNC_4(VAR_15, FUNC_6(VAR_18), 0);
 VAR_18 = FUNC_14("Disable Nested Box");
 FUNC_5(VAR_18, VAR_0, VAR_19);
 FUNC_4(VAR_15, FUNC_6(VAR_18), 0);
 FUNC_4(VAR_14, FUNC_6(VAR_15), 0);

 VAR_23 = FUNC_2();
 FUNC_17(VAR_23, "Disabled", FUNC_6(FUNC_14("Button")));
 FUNC_17(VAR_23, "Tab", FUNC_6(FUNC_16("Label")));
 FUNC_7(FUNC_6(VAR_23));
 FUNC_4(VAR_14, FUNC_6(VAR_23), 1);

 VAR_24 = FUNC_15();
 VAR_25 = FUNC_15();
 FUNC_9(VAR_24, VAR_1, VAR_25);
 FUNC_12(VAR_25, "If you can see this, uiEntryReadOnly() isn't working properly.");
 FUNC_11(VAR_25, 1);
 if (FUNC_10(VAR_25))
  FUNC_12(VAR_25, "");
 FUNC_4(VAR_14, FUNC_6(VAR_24), 0);
 FUNC_4(VAR_14, FUNC_6(VAR_25), 0);

 VAR_15 = FUNC_1();
 VAR_18 = FUNC_14("Show Button 2");
 VAR_26 = FUNC_14("Button 2");
 FUNC_5(VAR_18, VAR_13, VAR_26);
 FUNC_8(FUNC_6(VAR_26));
 FUNC_4(VAR_15, FUNC_6(VAR_18), 1);
 FUNC_4(VAR_15, FUNC_6(VAR_26), 0);
 FUNC_4(VAR_14, FUNC_6(VAR_15), 0);

 return VAR_14;
}
