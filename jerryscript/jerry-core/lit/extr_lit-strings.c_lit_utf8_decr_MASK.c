
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lit_utf8_byte_t ;
typedef scalar_t__* current_p ;


 int FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void
FUNC_1 (const lit_utf8_byte_t **VAR_2)
{
  FUNC_0 (*VAR_2);
  const lit_utf8_byte_t *VAR_3 = *VAR_2;

  do
  {
    VAR_3--;
  }
  while ((*(VAR_3) & VAR_1) == VAR_0);

  *VAR_2 = VAR_3;
}
