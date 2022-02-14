
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keynum; scalar_t__ name; } ;
typedef TYPE_1__ keyname_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char) ;

int FUNC_4( char *VAR_1 ) {
 keyname_t *VAR_2;

 if ( !VAR_1 || !VAR_1[0] ) {
  return -1;
 }
 if ( !VAR_1[1] ) {
  return FUNC_3( VAR_1[0] );
 }


 if ( FUNC_2( VAR_1 ) == 4 ) {
  int VAR_3 = FUNC_0( VAR_1 );

  if ( VAR_3 >= 0 ) {
   return VAR_3;
  }
 }


 for ( VAR_2=VAR_0 ; VAR_2->name ; VAR_2++ ) {
  if ( !FUNC_1( VAR_1,VAR_2->name ) )
   return VAR_2->keynum;
 }

 return -1;
}
