
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct prompt {int dummy; } ;
struct bits {int b_mask; int b_val; } ;


 struct bits* VAR_0 ;
 int FUNC_0 (struct prompt*,char*,int,int,char*) ;

__attribute__((used)) static void
FUNC_1(struct prompt *VAR_1, u_int32_t VAR_2, unsigned VAR_3)
{
  char VAR_4[33], *VAR_5;
  register struct bits *VAR_6 = VAR_0;

  if (VAR_3 > sizeof VAR_4 - 1)
    VAR_3 = sizeof VAR_4 - 1;

  for (VAR_5 = VAR_4; VAR_6->b_mask && VAR_5 - VAR_4 < (int)VAR_3; VAR_6++)
    if (VAR_6->b_mask & VAR_2)
      *VAR_5++ = VAR_6->b_val;
  *VAR_5 = '\0';
  FUNC_0(VAR_1, "%-*.*s", (int)VAR_3, (int)VAR_3, VAR_4);
}
