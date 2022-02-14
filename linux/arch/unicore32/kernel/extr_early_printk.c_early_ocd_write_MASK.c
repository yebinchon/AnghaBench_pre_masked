
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct console *VAR_0, const char *VAR_1, unsigned VAR_2)
{
 while (*VAR_1 && VAR_2-- > 0) {
  if (*VAR_1 == '\n')
   FUNC_0((int)'\r');
  FUNC_0((int)*VAR_1);
  VAR_1++;
 }
}
