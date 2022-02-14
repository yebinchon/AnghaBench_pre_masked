
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_lines; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,char**) ;
 char* FUNC_1 (char*,char*,char const*) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 char* FUNC_3 (char*,char*) ;
 int * FUNC_4 (struct message*) ;

char *
FUNC_5(const char *VAR_1, struct message *VAR_2)
{
 FILE *VAR_3;
 char VAR_4[VAR_0];
 int VAR_5;
 char *VAR_6;
 char *VAR_7, *VAR_8 = ((void*)0);

 VAR_3 = FUNC_4(VAR_2);
 if ((VAR_5 = VAR_2->m_lines - 1) < 0)
  return (((void*)0));
 if (FUNC_2(VAR_3, VAR_4, VAR_0) < 0)
  return (((void*)0));
 while (VAR_5 > 0) {
  if ((VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_7)) < 0)
   return (VAR_8);
  if ((VAR_6 = FUNC_1(VAR_4, VAR_7, VAR_1)) != ((void*)0))
   VAR_8 = FUNC_3(VAR_6, VAR_8);
 }
 return (VAR_8);
}
