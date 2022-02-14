
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_accu_t ;
typedef scalar_t__ vec_accu_t ;
typedef int vec3_accu_t ;
typedef scalar_t__ qboolean ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

qboolean FUNC_5( winding_accu_t *VAR_3 ){
 int VAR_4, VAR_5, VAR_6;
 vec3_accu_t VAR_7;
 vec_accu_t VAR_8;
 qboolean VAR_9, VAR_10;

 if ( VAR_3 == ((void*)0) ) {
  FUNC_0( "FixWindingAccu: NULL argument" );
 }

 VAR_10 = VAR_1;

 while ( VAR_2 )
 {
  if ( VAR_3->numpoints < 2 ) {
   break;
  }
  VAR_9 = VAR_2;
  for ( VAR_4 = 0; VAR_4 < VAR_3->numpoints; VAR_4++ )
  {
   VAR_5 = ( ( ( VAR_4 + 1 ) == VAR_3->numpoints ) ? 0 : ( VAR_4 + 1 ) );

   FUNC_4( VAR_3->p[VAR_4], VAR_3->p[VAR_5], VAR_7 );
   VAR_8 = FUNC_3( VAR_7 );
   if ( VAR_8 < VAR_0 ) {





    FUNC_1( VAR_3->p[VAR_4], VAR_3->p[VAR_5], VAR_7 );
    FUNC_2( VAR_7, VAR_3->p[VAR_4] );
    for ( VAR_6 = VAR_5 + 1; VAR_6 < VAR_3->numpoints; VAR_6++ )
    {
     FUNC_2( VAR_3->p[VAR_6], VAR_3->p[VAR_6 - 1] );
    }
    VAR_3->numpoints--;
    VAR_10 = VAR_2;






    VAR_9 = VAR_1;
    break;
   }
  }
  if ( VAR_9 ) {
   break;
  }
 }

 return VAR_10;
}
