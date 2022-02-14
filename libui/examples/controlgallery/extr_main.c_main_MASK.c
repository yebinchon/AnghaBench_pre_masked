
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiTab ;
typedef int uiInitOptions ;


 int FUNC_0 (int ,char*,char const*) ;
 int * VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 () ;
 int * FUNC_10 () ;
 int * FUNC_11 (char*,int,int,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,char*,int ) ;
 int FUNC_14 (int *,int,int) ;
 int FUNC_15 (int *,int ,int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int) ;

int FUNC_18(void)
{
 uiInitOptions VAR_4;
 const char *VAR_5;
 uiTab *VAR_6;

 FUNC_4(&VAR_4, 0, sizeof (uiInitOptions));
 VAR_5 = FUNC_8(&VAR_4);
 if (VAR_5 != ((void*)0)) {
  FUNC_0(VAR_3, "error initializing libui: %s", VAR_5);
  FUNC_7(VAR_5);
  return 1;
 }

 VAR_0 = FUNC_11("libui Control Gallery", 640, 480, 1);
 FUNC_15(VAR_0, VAR_1, ((void*)0));
 FUNC_12(VAR_2, VAR_0);

 VAR_6 = FUNC_10();
 FUNC_16(VAR_0, FUNC_5(VAR_6));
 FUNC_17(VAR_0, 1);

 FUNC_13(VAR_6, "Basic Controls", FUNC_1());
 FUNC_14(VAR_6, 0, 1);

 FUNC_13(VAR_6, "Numbers and Lists", FUNC_3());
 FUNC_14(VAR_6, 1, 1);

 FUNC_13(VAR_6, "Data Choosers", FUNC_2());
 FUNC_14(VAR_6, 2, 1);

 FUNC_6(FUNC_5(VAR_0));
 FUNC_9();
 return 0;
}
