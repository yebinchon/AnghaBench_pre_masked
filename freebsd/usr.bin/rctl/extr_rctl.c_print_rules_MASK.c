
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_0, int VAR_1, int VAR_2)
{
 char *VAR_3;

 while ((VAR_3 = FUNC_3(&VAR_0, ",")) != ((void*)0)) {
  if (VAR_3[0] == '\0')
   break;
  if (VAR_2 == 0)
   VAR_3 = FUNC_1(VAR_3);
  if (VAR_1)
   VAR_3 = FUNC_0(VAR_3);
  FUNC_2("%s\n", VAR_3);
 }
}
