
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 char* FUNC_6 (size_t) ;
 int VAR_1 ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char const*,size_t) ;
 size_t FUNC_10 (char const*) ;

__attribute__((used)) static const char *
FUNC_11(int VAR_2, char **VAR_3, char **VAR_4, const char **VAR_5)
{
 const char *VAR_6, *VAR_7, *VAR_8;
 char *VAR_9, *VAR_10;
 int VAR_11;
 size_t VAR_12, VAR_13;

 VAR_11 = 1;
 VAR_6 = VAR_7 = (*VAR_5) + 1;
 if (*VAR_6++ == '{')
  if (*VAR_6 == '_' || FUNC_5(*VAR_6)) {
   VAR_7 = VAR_6 + 1;
   while (*VAR_7 == '_' || FUNC_4(*VAR_7))
    VAR_7++;
   if (*VAR_7 == '}')
    VAR_11 = 0;
  }
 if (VAR_11)
  FUNC_0(1, "Only ${VARNAME} expansion is supported, error at: %s",
      *VAR_5);







 *VAR_5 = VAR_7;
 VAR_12 = VAR_7 - VAR_6 + 1;
 VAR_10 = FUNC_6(VAR_12);
 FUNC_9(VAR_10, VAR_6, VAR_12);
 VAR_8 = FUNC_3(VAR_10);
 if (VAR_8 == ((void*)0) || *VAR_8 == '\0') {
  if (VAR_0 > 2)
   FUNC_1(VAR_1,
       "#env  replacing ${%s} with null string\n",
       VAR_10);
  FUNC_2(VAR_10);
  return (((void*)0));
 }

 if (VAR_0 > 2)
  FUNC_1(VAR_1, "#env  expanding ${%s} into '%s'\n", VAR_10,
      VAR_8);






 if (FUNC_10(VAR_10) + 3 >= FUNC_10(VAR_8)) {
  FUNC_2(VAR_10);
  return (VAR_8);
 }
 VAR_13 = FUNC_10(VAR_8) + FUNC_10(*VAR_5) + 1;
 if (VAR_2) {
  **VAR_4 = '\0';
  VAR_13 += FUNC_10(*VAR_3);
  VAR_9 = FUNC_6(VAR_13);
  FUNC_8(VAR_9, *VAR_3);
  *VAR_3 = VAR_9;
 } else {
  VAR_9 = FUNC_6(VAR_13);
  *VAR_9 = '\0';
 }
 *VAR_4 = FUNC_7(VAR_9, '\0');
 FUNC_2(VAR_10);
 return (VAR_8);
}
