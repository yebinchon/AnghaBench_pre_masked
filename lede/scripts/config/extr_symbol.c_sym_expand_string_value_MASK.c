
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (struct symbol*) ;
 struct symbol* FUNC_7 (char*) ;
 char* FUNC_8 (struct symbol*) ;
 char* FUNC_9 (size_t) ;

const char *FUNC_10(const char *VAR_1)
{
 const char *VAR_2;
 char *VAR_3;
 size_t VAR_4;

 VAR_4 = FUNC_4(VAR_1) + 1;
 VAR_3 = FUNC_9(VAR_4);
 VAR_3[0] = '\0';

 while ((VAR_2 = FUNC_3(VAR_1, '$'))) {
  char *VAR_5, VAR_6[VAR_0];
  const char *VAR_7 = "";
  struct symbol *VAR_8;
  size_t VAR_9;

  FUNC_5(VAR_3, VAR_1, VAR_2 - VAR_1);
  VAR_2++;

  VAR_5 = VAR_6;
  while (FUNC_0(*VAR_2) || *VAR_2 == '_')
   *VAR_5++ = *VAR_2++;
  *VAR_5 = '\0';

  VAR_8 = FUNC_7(VAR_6);
  if (VAR_8 != ((void*)0)) {
   FUNC_6(VAR_8);
   VAR_7 = FUNC_8(VAR_8);
  }

  VAR_9 = FUNC_4(VAR_3) + FUNC_4(VAR_7) + FUNC_4(VAR_2) + 1;
  if (VAR_9 > VAR_4) {
   VAR_4 = VAR_9;
   VAR_3 = FUNC_1(VAR_3, VAR_4);
  }

  FUNC_2(VAR_3, VAR_7);
  VAR_1 = VAR_2;
 }
 FUNC_2(VAR_3, VAR_1);

 return VAR_3;
}
