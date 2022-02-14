
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;
typedef int qboolean ;


 float VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_4( winding_t *VAR_3 ){
 qboolean VAR_4 = VAR_2;
 int VAR_5, VAR_6, VAR_7;
 vec3_t VAR_8;
 float VAR_9;



 if ( !VAR_3 ) {
  return VAR_1;
 }


 for ( VAR_5 = 0; VAR_5 < VAR_3->numpoints; VAR_5++ )
 {

  if ( VAR_3->numpoints == 3 ) {
   return VAR_4;
  }


  VAR_6 = ( VAR_5 + 1 ) % VAR_3->numpoints;


  FUNC_3( VAR_3->p[ VAR_5 ], VAR_3->p[ VAR_6 ], VAR_8 );
  VAR_9 = FUNC_2( VAR_8 );
  if ( VAR_9 < VAR_0 ) {
   VAR_4 = VAR_1;



   FUNC_0( VAR_3->p[ VAR_5 ], VAR_3->p[ VAR_6 ], VAR_8 );
   FUNC_1( VAR_8, VAR_3->p[ VAR_5 ] );




   for ( VAR_7 = VAR_5 + 2; VAR_7 < VAR_3->numpoints; VAR_7++ )
   {
    FUNC_1( VAR_3->p[ VAR_7 ], VAR_3->p[ VAR_7 - 1 ] );
   }
   VAR_3->numpoints--;
  }
 }


 if ( VAR_3->numpoints < 3 ) {
  VAR_4 = VAR_1;
 }
 return VAR_4;
}
