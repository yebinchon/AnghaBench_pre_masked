
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiWindow ;
typedef int uiCheckbox ;
typedef int uiButton ;
typedef int uiBox ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*) ;
 int * FUNC_7 (char*) ;
 int * FUNC_8 (char*) ;
 int * FUNC_9 (int ,int ) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int *,int ,int *) ;
 int FUNC_13 (int *) ;
 int * VAR_10 ;

uiBox *FUNC_14(uiWindow *VAR_11)
{
 uiBox *VAR_12;
 uiBox *VAR_13;
 uiButton *VAR_14;
 uiCheckbox *VAR_15;

 VAR_12 = FUNC_1();

 VAR_13 = FUNC_0();
 FUNC_2(VAR_12, FUNC_5(VAR_13), 0);

 FUNC_2(VAR_13, FUNC_5(FUNC_8("Size")), 0);
 VAR_10 = FUNC_9(VAR_1, VAR_0);
 FUNC_2(VAR_13, FUNC_5(VAR_10), 1);
 VAR_5 = FUNC_9(VAR_1, VAR_0);
 FUNC_2(VAR_13, FUNC_5(VAR_5), 1);
 VAR_4 = FUNC_7("Fullscreen");
 FUNC_2(VAR_13, FUNC_5(VAR_4), 0);

 FUNC_11(VAR_10, VAR_9, VAR_11);
 FUNC_11(VAR_5, VAR_8, VAR_11);
 FUNC_4(VAR_4, VAR_7, VAR_11);
 FUNC_12(VAR_11, VAR_6, ((void*)0));
 FUNC_13(VAR_11);

 VAR_15 = FUNC_7("Borderless");
 FUNC_4(VAR_15, VAR_3, VAR_11);
 FUNC_2(VAR_12, FUNC_5(VAR_15), 0);

 VAR_14 = FUNC_6("Borderless Resizes");
 FUNC_3(VAR_14, VAR_2, ((void*)0));
 FUNC_2(VAR_12, FUNC_5(VAR_14), 0);

 VAR_13 = FUNC_0();
 FUNC_2(VAR_12, FUNC_5(VAR_13), 1);

 FUNC_2(VAR_13, FUNC_5(FUNC_10()), 0);

 return VAR_12;
}
