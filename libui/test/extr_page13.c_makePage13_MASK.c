
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiRadioButtons ;
typedef int uiProgressBar ;
typedef int uiForm ;
typedef int uiEntry ;
typedef int uiButton ;
typedef int uiBox ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,char*,int ,int) ;
 int * FUNC_7 (char*) ;
 int * VAR_5 ;
 int * FUNC_8 () ;
 int * FUNC_9 () ;
 int * FUNC_10 () ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;
 int * VAR_6 ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,char*) ;

uiBox *FUNC_15(void)
{
 uiBox *VAR_7;
 uiRadioButtons *VAR_8;
 uiButton *VAR_9;
 uiForm *VAR_10;
 uiEntry *VAR_11;
 uiProgressBar *VAR_12;

 VAR_7 = FUNC_1();

 VAR_8 = FUNC_11();
 FUNC_14(VAR_8, "Item 1");
 FUNC_14(VAR_8, "Item 2");
 FUNC_14(VAR_8, "Item 3");
 FUNC_2(VAR_7, FUNC_4(VAR_8), 0);

 VAR_8 = FUNC_11();
 FUNC_14(VAR_8, "Item A");
 FUNC_14(VAR_8, "Item B");
 FUNC_2(VAR_7, FUNC_4(VAR_8), 0);

 VAR_9 = FUNC_7("Horizontal");
 FUNC_3(VAR_9, VAR_0, VAR_5);
 FUNC_2(VAR_7, FUNC_4(VAR_9), 0);

 VAR_9 = FUNC_7("Vertical");
 FUNC_3(VAR_9, VAR_0, VAR_6);
 FUNC_2(VAR_7, FUNC_4(VAR_9), 0);

 VAR_10 = FUNC_0();

 VAR_11 = FUNC_9();
 FUNC_5(VAR_11, VAR_2, "password");
 FUNC_6(VAR_10, "Password Entry", FUNC_4(VAR_11), 0);

 VAR_11 = FUNC_12();
 FUNC_5(VAR_11, VAR_2, "search");
 FUNC_6(VAR_10, "Search Box", FUNC_4(VAR_11), 0);

 FUNC_6(VAR_10, "MLE", FUNC_4(FUNC_8()), 1);

 VAR_12 = FUNC_10();
 FUNC_13(VAR_12, 50);
 FUNC_2(VAR_7, FUNC_4(VAR_12), 0);
 VAR_9 = FUNC_7("Toggle Indeterminate");
 FUNC_3(VAR_9, VAR_3, VAR_12);
 FUNC_2(VAR_7, FUNC_4(VAR_9), 0);

 VAR_9 = FUNC_7("Show/Hide");
 FUNC_3(VAR_9, VAR_4, VAR_11);
 FUNC_2(VAR_7, FUNC_4(VAR_9), 0);
 VAR_9 = FUNC_7("Delete First");
 FUNC_3(VAR_9, VAR_1, VAR_10);
 FUNC_2(VAR_7, FUNC_4(VAR_9), 0);
 FUNC_2(VAR_7, FUNC_4(VAR_10), 1);

 return VAR_7;
}
