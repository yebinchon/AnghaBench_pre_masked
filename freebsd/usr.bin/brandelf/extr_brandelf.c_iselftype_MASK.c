
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; char const* str; } ;


 TYPE_1__* VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static const char *
FUNC_1(int VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_1 == VAR_0[VAR_2].value)
   return (VAR_0[VAR_2].str);
 return (0);
}
