
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,size_t) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,char*,size_t) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (char*,char*,uintptr_t) ;
 char* FUNC_7 (char*,char const*) ;

void
FUNC_8(char **VAR_0, const char *VAR_1, const char *VAR_2, size_t VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;

 VAR_4 = *VAR_0;
 if (VAR_4 == ((void*)0))
  return;
 if (VAR_3 == 0) {
  VAR_1 = ((void*)0);
  VAR_3 = FUNC_5(VAR_4) + 1;
 }
 VAR_5 = FUNC_0(1, VAR_3);
 if (VAR_5 == ((void*)0))
  FUNC_1(1, "calloc");

 if (VAR_2 == ((void*)0))
  VAR_2 = "";

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == FUNC_5(VAR_4)) {
  FUNC_4(VAR_5, VAR_4, VAR_3);
  goto done;
 }

 for (;;) {
  VAR_6 = FUNC_7(VAR_4, VAR_1);
  if (VAR_6 == ((void*)0))
   break;
  if ((FUNC_5(VAR_5) + FUNC_5(VAR_4) + FUNC_5(VAR_2) -
      FUNC_5(VAR_1) + 1) > VAR_3) {
   FUNC_3(VAR_5, VAR_4, VAR_3);
   goto done;
  }
  FUNC_6(VAR_5, VAR_4, (uintptr_t)VAR_6 - (uintptr_t)VAR_4);
  FUNC_2(VAR_5, VAR_2);
  VAR_4 = VAR_6 + FUNC_5(VAR_1);
 }
 FUNC_2(VAR_5, VAR_4);
done:
 *VAR_0 = VAR_5;
 return;
}
