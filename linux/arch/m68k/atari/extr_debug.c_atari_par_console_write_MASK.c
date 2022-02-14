
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 int FUNC_0 (char) ;

__attribute__((used)) static void FUNC_1(struct console *VAR_0, const char *VAR_1,
        unsigned int VAR_2)
{
 static int VAR_3 = 1;

 if (!VAR_3)
  return;

 while (VAR_2--) {
  if (*VAR_1 == '\n') {
   if (!FUNC_0('\r')) {
    VAR_3 = 0;
    return;
   }
  }
  if (!FUNC_0(*VAR_1++)) {
   VAR_3 = 0;
   return;
  }
 }
}
