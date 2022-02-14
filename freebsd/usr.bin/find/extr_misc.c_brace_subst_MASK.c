
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,char*) ;

void
FUNC_6(char *VAR_0, char **VAR_1, char *VAR_2, size_t VAR_3)
{
 const char *VAR_4, *VAR_5, *VAR_6;
 char *VAR_7;
 size_t VAR_8, VAR_9;

 VAR_9 = FUNC_4(VAR_2);
 VAR_8 = FUNC_4(VAR_0) + 1;
 VAR_4 = VAR_0 + VAR_8;
 for (VAR_5 = VAR_0; (VAR_6 = FUNC_5(VAR_5, "{}")) != ((void*)0); VAR_5 = VAR_6 + 2) {
  if (VAR_9 > 2 && VAR_8 + VAR_9 - 2 < VAR_8)
   FUNC_1(2, "brace_subst overflow");
  VAR_8 += VAR_9 - 2;
 }
 if (VAR_8 > VAR_3) {
  *VAR_1 = FUNC_3(*VAR_1, VAR_8);
  if (*VAR_1 == ((void*)0))
   FUNC_0(2, ((void*)0));
 }
 VAR_7 = *VAR_1;
 for (VAR_5 = VAR_0; (VAR_6 = FUNC_5(VAR_5, "{}")) != ((void*)0); VAR_5 = VAR_6 + 2) {
  FUNC_2(VAR_7, VAR_5, VAR_6 - VAR_5);
  VAR_7 += VAR_6 - VAR_5;
  FUNC_2(VAR_7, VAR_2, VAR_9);
  VAR_7 += VAR_9;
 }
 FUNC_2(VAR_7, VAR_5, VAR_4 - VAR_5);
}
