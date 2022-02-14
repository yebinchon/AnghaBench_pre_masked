
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum trace_state { ____Placeholder_trace_state } trace_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_3, char *VAR_4, int VAR_5)
{
 enum trace_state VAR_6, VAR_7;
 const char *VAR_8;
 char *VAR_9;

 VAR_7 = VAR_0;
 for (VAR_8 = VAR_3, VAR_9 = VAR_4; *VAR_8 != '\0'; VAR_8++) {
  switch (*VAR_8) {
  case ' ':
  case '\n':
  case '+':
   VAR_6 = VAR_7;
   VAR_7 = FUNC_0(VAR_6);
   if (VAR_6 == VAR_2) {
    *VAR_9 = ' ';
    VAR_9++;
   }
   if (VAR_5 > 1 && VAR_6 == VAR_1) {
    *VAR_9 = '+';
    VAR_9++;
   }
   continue;
  }
  if (VAR_7 == VAR_1 || (VAR_5 > 1 && VAR_7 == VAR_2)) {
   *VAR_9 = *VAR_8;
   VAR_9++;
  }
 }
 *VAR_9 = '\0';
}
