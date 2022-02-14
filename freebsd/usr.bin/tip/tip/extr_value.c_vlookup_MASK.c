
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ v_abrev; scalar_t__ v_name; } ;
typedef TYPE_1__ value_t ;


 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static value_t *
FUNC_1(char *VAR_1)
{
 value_t *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->v_name; VAR_2++)
  if (FUNC_0(VAR_2->v_name, VAR_1) || (VAR_2->v_abrev && FUNC_0(VAR_2->v_abrev, VAR_1)))
   return (VAR_2);
 return (((void*)0));
}
