
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * List ;


 int * FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int *) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static List FUNC_8(const char *VAR_0) {
 List VAR_1 = ((void*)0);
 char VAR_2 = ':';

 if (VAR_0 == ((void*)0))
  return ((void*)0);
 if (FUNC_3(VAR_0, ';'))
  VAR_2 = ';';
 while (*VAR_0) {
  char *VAR_3, VAR_4[512];
  if ((VAR_3 = FUNC_3(VAR_0, VAR_2))) {
   FUNC_1(VAR_3 - VAR_0 < sizeof VAR_4);
   FUNC_6(VAR_4, VAR_0, VAR_3 - VAR_0);
   VAR_4[VAR_3-VAR_0] = '\0';
  } else {
   FUNC_1(FUNC_5(VAR_0) < sizeof VAR_4);
   FUNC_4(VAR_4, VAR_0);
  }
  if (!FUNC_2(VAR_4, VAR_1))
   VAR_1 = FUNC_0(FUNC_7(VAR_4), VAR_1);
  if (VAR_3 == 0)
   break;
  VAR_0 = VAR_3 + 1;
 }
 return VAR_1;
}
