
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum trace_state { ____Placeholder_trace_state } trace_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char**,char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_2, char *VAR_3, int VAR_4)
{
 enum trace_state VAR_5, VAR_6;
 const char *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11;

 VAR_6 = VAR_0;
 if (VAR_4 == 1) {
  for (VAR_7 = VAR_2, VAR_8 = VAR_3; *VAR_7 != '\0'; VAR_7++) {
   switch (*VAR_7) {
   case '\n':
    *VAR_8 = *VAR_7;
    VAR_8++;
   case ' ':
   case '+':
    VAR_5 = VAR_6;
    VAR_6 = FUNC_1(VAR_5);
    continue;
   }
   if (VAR_6 == VAR_1) {
    *VAR_8 = *VAR_7;
    VAR_8++;
   }
  }
  *VAR_8 = '\0';
  VAR_10 = VAR_9 = FUNC_2(VAR_3);
 } else
  VAR_10 = VAR_9 = FUNC_2(VAR_2);
        while ((VAR_11 = FUNC_4(&VAR_9, "\n")) != ((void*)0)) {
  if (FUNC_3(VAR_11) != 0 && *VAR_11 != 127)
   FUNC_5("{le:token/%s}", VAR_11);
 }
 FUNC_0(VAR_10);
}
