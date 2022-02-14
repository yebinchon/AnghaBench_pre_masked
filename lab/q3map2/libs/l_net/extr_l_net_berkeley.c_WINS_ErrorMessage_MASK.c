
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int errnum; scalar_t__ errstr; } ;


 TYPE_1__* VAR_0 ;

char *FUNC_0( int VAR_1 ){
 int VAR_2 = 0;

 if ( !VAR_1 ) {
  return "No error occurred";
 }

 for ( VAR_2 = 0; VAR_0[VAR_2].errstr; VAR_2++ )
 {
  if ( VAR_1 == VAR_0[VAR_2].errnum ) {
   return (char *)VAR_0[VAR_2].errstr;
  }
 }

 return "Unknown error";
}
