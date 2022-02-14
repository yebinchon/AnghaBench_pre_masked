
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiWindow ;
typedef int uiLabel ;
typedef int uiInitOptions ;
typedef int uiGrid ;
typedef int uiButton ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *,int ,int,int,int,int,int,int ,int,int ) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 () ;
 int * FUNC_11 (char*) ;
 int * FUNC_12 () ;
 int * FUNC_13 () ;
 int * FUNC_14 () ;
 int * FUNC_15 (char*) ;
 int * FUNC_16 () ;
 int * FUNC_17 (char*,int,int,int ) ;
 int FUNC_18 (int *,int ,int *) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int) ;

int FUNC_21(void)
{
 uiInitOptions VAR_10;
 const char *VAR_11;
 uiWindow *VAR_12;
 uiGrid *VAR_13;
 uiLabel *VAR_14;
 uiButton *VAR_15;

 FUNC_1(&VAR_10, 0, sizeof (uiInitOptions));
 VAR_11 = FUNC_9(&VAR_10);
 if (VAR_11 != ((void*)0)) {
  FUNC_0(VAR_6, "error initializing ui: %s\n", VAR_11);
  FUNC_6(VAR_11);
  return 1;
 }

 VAR_12 = FUNC_17("Date / Time", 320, 240, 0);
 FUNC_20(VAR_12, 1);

 VAR_13 = FUNC_14();
 FUNC_8(VAR_13, 1);
 FUNC_19(VAR_12, FUNC_3(VAR_13));

 VAR_0 = FUNC_13();
 VAR_1 = FUNC_12();
 VAR_2 = FUNC_16();

 FUNC_7(VAR_13, FUNC_3(VAR_0),
  0, 0, 2, 1,
  1, VAR_9, 0, VAR_9);
 FUNC_7(VAR_13, FUNC_3(VAR_1),
  0, 1, 1, 1,
  1, VAR_9, 0, VAR_9);
 FUNC_7(VAR_13, FUNC_3(VAR_2),
  1, 1, 1, 1,
  1, VAR_9, 0, VAR_9);

 VAR_14 = FUNC_15("");
 FUNC_7(VAR_13, FUNC_3(VAR_14),
  0, 2, 2, 1,
  1, VAR_7, 0, VAR_9);
 FUNC_5(VAR_0, VAR_3, VAR_14);
 VAR_14 = FUNC_15("");
 FUNC_7(VAR_13, FUNC_3(VAR_14),
  0, 3, 1, 1,
  1, VAR_7, 0, VAR_9);
 FUNC_5(VAR_1, VAR_3, VAR_14);
 VAR_14 = FUNC_15("");
 FUNC_7(VAR_13, FUNC_3(VAR_14),
  1, 3, 1, 1,
  1, VAR_7, 0, VAR_9);
 FUNC_5(VAR_2, VAR_3, VAR_14);

 VAR_15 = FUNC_11("Now");
 FUNC_2(VAR_15, VAR_4, (void *) 1);
 FUNC_7(VAR_13, FUNC_3(VAR_15),
  0, 4, 1, 1,
  1, VAR_9, 1, VAR_8);
 VAR_15 = FUNC_11("Unix epoch");
 FUNC_2(VAR_15, VAR_4, (void *) 0);
 FUNC_7(VAR_13, FUNC_3(VAR_15),
  1, 4, 1, 1,
  1, VAR_9, 1, VAR_8);

 FUNC_18(VAR_12, VAR_5, ((void*)0));
 FUNC_4(FUNC_3(VAR_12));
 FUNC_10();
 return 0;
}
