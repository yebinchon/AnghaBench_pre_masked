
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t*,size_t,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int * VAR_1 ;
 char* VAR_2 ;
 int FUNC_3 (int ,char*,char const*) ;
 char* FUNC_4 (char*,char const) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(
 char **VAR_3, bool *VAR_4, const char *VAR_5, int VAR_6)
{
 char *VAR_7, *VAR_8, *VAR_9;
 size_t VAR_10 = FUNC_5(VAR_5), VAR_11;

 *VAR_4 = 0;

 if (FUNC_0(&VAR_11, VAR_10, 1) ||
  (VAR_7 = FUNC_2(VAR_11)) == ((void*)0)) {
  return -1;
 }

 VAR_8 = VAR_7;

 while (*VAR_5 != '\0') {
  if (*VAR_5 == '"') {
   VAR_6++;
  } else if (*VAR_5 != '\\') {
   *VAR_8++ = *VAR_5;
  } else {

   VAR_5++;

   if (*VAR_5 == '\0') {
    *VAR_4 = 1;
    goto done;
   }
   if ((VAR_9 = FUNC_4(VAR_2, *VAR_5)) != ((void*)0)) {
    *VAR_8++ = VAR_1[VAR_9 - VAR_2];
   } else {
    FUNC_1(VAR_7);
    FUNC_3(VAR_0, "invalid escape at %s", VAR_5);
    return -1;
   }
  }
  VAR_5++;
 }

done:
 *VAR_8 = '\0';
 *VAR_3 = VAR_7;

 return 0;
}
