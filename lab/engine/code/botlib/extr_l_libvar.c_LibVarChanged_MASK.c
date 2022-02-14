
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int modified; } ;
typedef TYPE_1__ libvar_t ;


 TYPE_1__* FUNC_0 (char const*) ;
 int VAR_0 ;

qboolean FUNC_1(const char *VAR_1)
{
 libvar_t *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
 {
  return VAR_2->modified;
 }
 else
 {
  return VAR_0;
 }
}
