
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 int FUNC_0 (char) ;

__attribute__((used)) static void FUNC_1(struct console *VAR_0, const char *VAR_1,
         unsigned int VAR_2)
{
 while (VAR_2--) {
  if (*VAR_1 == '\n')
   FUNC_0('\r');
  FUNC_0(*VAR_1++);
 }
}
