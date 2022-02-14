
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int resp ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (char*,char) ;

int
FUNC_5(char *VAR_2[])
{
 char *VAR_3, VAR_4[256];

 (void)FUNC_2(VAR_0, "\"%s", *VAR_2);
 while (*++VAR_2)
  (void)FUNC_2(VAR_0, " %s", *VAR_2);
 (void)FUNC_2(VAR_0, "\"? ");
 (void)FUNC_0(VAR_0);

 if (FUNC_1(VAR_4, sizeof(VAR_4), VAR_1) == ((void*)0))
  *VAR_4 = '\0';
 if ((VAR_3 = FUNC_4(VAR_4, '\n')) != ((void*)0))
  *VAR_3 = '\0';
 else {
  (void)FUNC_2(VAR_0, "\n");
  (void)FUNC_0(VAR_0);
 }
        return (FUNC_3(VAR_4) == 1);
}
