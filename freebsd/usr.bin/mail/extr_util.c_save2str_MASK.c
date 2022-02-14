
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_0, char *VAR_1)
{
 char *VAR_2;
 int VAR_3 = FUNC_2(VAR_0) + 1;
 int VAR_4 = VAR_1 ? FUNC_2(VAR_1) + 1 : 0;

 if ((VAR_2 = FUNC_1(VAR_3 + VAR_4)) != ((void*)0)) {
  if (VAR_4) {
   FUNC_0(VAR_1, VAR_2, VAR_4);
   VAR_2[VAR_4 - 1] = ' ';
  }
  FUNC_0(VAR_0, VAR_2 + VAR_4, VAR_3);
 }
 return (VAR_2);
}
