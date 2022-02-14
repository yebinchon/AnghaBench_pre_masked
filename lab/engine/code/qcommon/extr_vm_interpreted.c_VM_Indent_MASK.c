
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int callLevel; } ;
typedef TYPE_1__ vm_t ;



char *FUNC_0( vm_t *VAR_0 ) {
 static char *VAR_1 = "                                        ";
 if ( VAR_0->callLevel > 20 ) {
  return VAR_1;
 }
 return VAR_1 + 2 * ( 20 - VAR_0->callLevel );
}
