
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (unsigned char) ;
 unsigned char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;

void
FUNC_9(const char *VAR_1)
{
 unsigned char *VAR_2;
 FILE *VAR_3;
 int VAR_4;
 char VAR_5[2048 + 1];

 if ((VAR_3 = FUNC_4(VAR_1, "r")) == ((void*)0))
  FUNC_1(1, "%s", VAR_1);
 while (FUNC_3(VAR_5, sizeof(VAR_5), VAR_3)) {
  if (!(VAR_2 = FUNC_7(VAR_5, '\n'))) {
   FUNC_8("line too long");
   while ((VAR_4 = FUNC_5()) != '\n' && VAR_4 != VAR_0);
   continue;
  }
  *VAR_2 = '\0';
  for (VAR_2 = VAR_5; *VAR_2 && FUNC_6(*VAR_2); ++VAR_2);
  if (!*VAR_2 || *VAR_2 == '#')
   continue;
  FUNC_0(VAR_2);
 }
 (void)FUNC_2(VAR_3);
}
