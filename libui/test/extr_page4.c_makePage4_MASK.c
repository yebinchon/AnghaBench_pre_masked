
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiSpinbox ;
typedef int uiSlider ;
typedef int uiButton ;
typedef int uiBox ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,char*) ;
 int * FUNC_9 (char*) ;
 int * FUNC_10 () ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;
 int * FUNC_13 () ;
 int * FUNC_14 () ;
 int * FUNC_15 () ;
 int * FUNC_16 () ;
 int * FUNC_17 (int,int) ;
 int * FUNC_18 (int,int) ;
 int * FUNC_19 () ;
 int FUNC_20 (int *,char*) ;
 int FUNC_21 (int *,int ,int *) ;
 int FUNC_22 (int *,int ,int *) ;
 int FUNC_23 (int *,int ,int *) ;

uiBox *FUNC_24(void)
{
 uiBox *VAR_18;
 uiBox *VAR_19;
 uiSpinbox *VAR_20;
 uiButton *VAR_21;
 uiSlider *VAR_22;

 VAR_18 = FUNC_1();

 VAR_17 = FUNC_18(0, 100);
 FUNC_23(VAR_17, VAR_7, ((void*)0));
 FUNC_2(VAR_18, FUNC_6(VAR_17), 0);

 VAR_16 = FUNC_17(0, 100);
 FUNC_22(VAR_16, VAR_6, ((void*)0));
 FUNC_2(VAR_18, FUNC_6(VAR_16), 0);

 VAR_8 = FUNC_15();
 FUNC_2(VAR_18, FUNC_6(VAR_8), 0);

 FUNC_2(VAR_18, FUNC_6(FUNC_14()), 0);

 VAR_19 = FUNC_0();
 VAR_20 = FUNC_18(-40, 40);
 FUNC_2(VAR_19, FUNC_6(VAR_20), 0);
 VAR_21 = FUNC_9("Bad Low");
 FUNC_3(VAR_21, VAR_15, VAR_20);
 FUNC_2(VAR_19, FUNC_6(VAR_21), 0);
 VAR_21 = FUNC_9("Bad High");
 FUNC_3(VAR_21, VAR_14, VAR_20);
 FUNC_2(VAR_19, FUNC_6(VAR_21), 0);
 FUNC_2(VAR_18, FUNC_6(VAR_19), 0);

 VAR_19 = FUNC_0();
 VAR_22 = FUNC_17(-40, 40);
 FUNC_2(VAR_19, FUNC_6(VAR_22), 0);
 VAR_21 = FUNC_9("Bad Low");
 FUNC_3(VAR_21, VAR_13, VAR_22);
 FUNC_2(VAR_19, FUNC_6(VAR_21), 0);
 VAR_21 = FUNC_9("Bad High");
 FUNC_3(VAR_21, VAR_12, VAR_22);
 FUNC_2(VAR_19, FUNC_6(VAR_21), 0);
 FUNC_2(VAR_18, FUNC_6(VAR_19), 0);

 FUNC_2(VAR_18, FUNC_6(FUNC_14()), 0);

 VAR_1 = FUNC_10();
 FUNC_4(VAR_1, "Item 1");
 FUNC_4(VAR_1, "Item 2");
 FUNC_4(VAR_1, "Item 3");
 FUNC_5(VAR_1, VAR_3, "noneditable");
 FUNC_2(VAR_18, FUNC_6(VAR_1), 0);

 VAR_2 = FUNC_13();
 FUNC_7(VAR_2, "Editable Item 1");
 FUNC_7(VAR_2, "Editable Item 2");
 FUNC_7(VAR_2, "Editable Item 3");
 FUNC_8(VAR_2, VAR_4, "editable");
 FUNC_2(VAR_18, FUNC_6(VAR_2), 0);

 VAR_9 = FUNC_16();
 FUNC_20(VAR_9, "Item 1");
 FUNC_20(VAR_9, "Item 2");
 FUNC_20(VAR_9, "Item 3");
 FUNC_21(VAR_9, VAR_5, ((void*)0));
 FUNC_2(VAR_18, FUNC_6(VAR_9), 0);

 VAR_19 = FUNC_0();
 VAR_21 = FUNC_9("Append");
 FUNC_3(VAR_21, VAR_0, ((void*)0));
 FUNC_2(VAR_19, FUNC_6(VAR_21), 0);
 VAR_21 = FUNC_9("Second");
 FUNC_3(VAR_21, VAR_11, ((void*)0));
 FUNC_2(VAR_19, FUNC_6(VAR_21), 0);
 VAR_21 = FUNC_9("None");
 FUNC_3(VAR_21, VAR_10, ((void*)0));
 FUNC_2(VAR_19, FUNC_6(VAR_21), 0);
 FUNC_2(VAR_18, FUNC_6(VAR_19), 0);

 FUNC_2(VAR_18, FUNC_6(FUNC_14()), 0);

 FUNC_2(VAR_18, FUNC_6(FUNC_12()), 0);
 FUNC_2(VAR_18, FUNC_6(FUNC_11()), 0);
 FUNC_2(VAR_18, FUNC_6(FUNC_19()), 0);

 return VAR_18;
}
