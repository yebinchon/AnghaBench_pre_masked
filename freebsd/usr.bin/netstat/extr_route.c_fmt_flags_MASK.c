
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bits {int b_mask; int b_val; } ;


 struct bits* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_1)
{
 static char VAR_2[33];
 char *VAR_3;
 struct bits *VAR_4 = VAR_0;

 for (VAR_3 = VAR_2; VAR_4->b_mask; VAR_4++)
  if (VAR_4->b_mask & VAR_1)
   *VAR_3++ = VAR_4->b_val;
 *VAR_3 = '\0';
 return (VAR_2);
}
