
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 () ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(char *VAR_0)
{
 size_t VAR_1;
 size_t VAR_2;
 char *VAR_3;
 int VAR_4;
 const char *VAR_5 = FUNC_2();

 if (!VAR_5)
  return -1;
 VAR_2 = FUNC_6(VAR_5);
 VAR_1 = FUNC_6(VAR_0);
 VAR_4 = FUNC_4(VAR_0);


 if (VAR_2 <= VAR_1 && !FUNC_1(VAR_0, VAR_5, VAR_2)) {
  if (VAR_0[VAR_2] == '/') {
   FUNC_3(VAR_0, VAR_0 + VAR_2 + 1, VAR_1 - VAR_2);
   return 0;
  } else if (VAR_0[VAR_2 - 1] == '/' || VAR_0[VAR_2] == '\0') {

   FUNC_3(VAR_0, VAR_0 + VAR_2, VAR_1 - VAR_2 + 1);
   return 0;
  }

  VAR_4 = VAR_2;
 }
 VAR_3 = VAR_0;
 VAR_0 += VAR_4;


 while (*VAR_0) {
  VAR_0++;
  if (*VAR_0 == '/') {
   *VAR_0 = '\0';
   if (FUNC_0(FUNC_5(VAR_3), VAR_5) == 0) {
    FUNC_3(VAR_3, VAR_0 + 1, VAR_1 - (VAR_0 - VAR_3));
    return 0;
   }
   *VAR_0 = '/';
  }
 }


 if (FUNC_0(FUNC_5(VAR_3), VAR_5) == 0) {
  *VAR_3 = '\0';
  return 0;
 }

 return -1;
}
