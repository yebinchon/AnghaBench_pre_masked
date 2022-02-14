
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiWindow ;
typedef int uiInitOptions ;
typedef int uiButton ;
typedef int uiBox ;


 int FUNC_0 () ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int) ;
 int * FUNC_10 (char*) ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;
 int * FUNC_13 (char*,int,int,int ) ;
 int FUNC_14 (int,int ,int *) ;
 int FUNC_15 (int *,int ,int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int) ;

int FUNC_18(void)
{
 uiInitOptions VAR_4;
 uiWindow *VAR_5;
 uiBox *VAR_6;
 uiButton *VAR_7;

 FUNC_1(&VAR_4, 0, sizeof (uiInitOptions));
 if (FUNC_7(&VAR_4) != ((void*)0))
  FUNC_0();

 VAR_5 = FUNC_13("Hello", 320, 240, 0);
 FUNC_17(VAR_5, 1);

 VAR_6 = FUNC_12();
 FUNC_3(VAR_6, 1);
 FUNC_16(VAR_5, FUNC_5(VAR_6));

 VAR_0 = FUNC_11();
 FUNC_9(VAR_0, 1);

 VAR_7 = FUNC_10("Say Something");
 FUNC_4(VAR_7, VAR_2, ((void*)0));
 FUNC_2(VAR_6, FUNC_5(VAR_7), 0);

 FUNC_2(VAR_6, FUNC_5(VAR_0), 1);

 FUNC_14(1000, VAR_3, ((void*)0));

 FUNC_15(VAR_5, VAR_1, ((void*)0));
 FUNC_6(FUNC_5(VAR_5));
 FUNC_8();
 return 0;
}
