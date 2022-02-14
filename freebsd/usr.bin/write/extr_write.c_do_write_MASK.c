
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int time_t ;
typedef int line ;
typedef int host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int,char*,int ,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 int * FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (char*,char const*,char*,char*,char*) ;
 int FUNC_8 (int ,int ) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void
FUNC_12(int VAR_8, char *VAR_9, char *VAR_10, const char *VAR_11)
{
 char *VAR_12;
 time_t VAR_13;
 char VAR_14[VAR_0];
 wchar_t VAR_15[512];
 int VAR_16;

 VAR_16 = FUNC_6(VAR_8, VAR_9, VAR_1);
 if (VAR_16 < 0)
  FUNC_1(1, "openat(%s%s)", VAR_4, VAR_9);
 FUNC_2(VAR_7);
 VAR_7 = FUNC_3(VAR_16, "w");
 if (VAR_7 == ((void*)0))
  FUNC_1(1, "%s%s", VAR_4, VAR_9);

 (void)FUNC_8(VAR_3, VAR_5);
 (void)FUNC_8(VAR_2, VAR_5);


 if (FUNC_5(VAR_14, sizeof(VAR_14)) < 0)
  (void)FUNC_9(VAR_14, "???");
 VAR_13 = FUNC_10((time_t *)((void*)0));
 VAR_12 = FUNC_0(&VAR_13);
 VAR_12[16] = '\0';
 (void)FUNC_7("\r\n\007\007\007Message from %s@%s on %s at %s ...\r\n",
     VAR_11, VAR_14, VAR_10, VAR_12 + 11);

 while (FUNC_4(VAR_15, sizeof(VAR_15)/sizeof(wchar_t), VAR_6) != ((void*)0))
  FUNC_11(VAR_15);
}
