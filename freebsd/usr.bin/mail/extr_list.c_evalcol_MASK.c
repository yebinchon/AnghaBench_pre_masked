
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coltab {char co_char; int co_bit; } ;


 struct coltab* VAR_0 ;
 int VAR_1 ;

int
FUNC_0(int VAR_2)
{
 struct coltab *VAR_3;

 if (VAR_2 == 0)
  return (VAR_1);
 for (VAR_3 = &VAR_0[0]; VAR_3->co_char != '\0'; VAR_3++)
  if (VAR_3->co_char == VAR_2)
   return (VAR_3->co_bit);
 return (0);
}
