
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ modified; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char const*) ;

int FUNC_1(const char *VAR_2)
{
 cvar_t *VAR_3;

 if(!(VAR_3 = FUNC_0(VAR_2)))
  return VAR_1;
 else
 {
  if(VAR_3->modified)
   return VAR_3->flags | VAR_0;
  else
   return VAR_3->flags;
 }
}
