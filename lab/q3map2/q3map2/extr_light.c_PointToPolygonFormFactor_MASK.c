
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int const vec3_t ;


 int FUNC_0 (int const,int const,int const) ;
 float FUNC_1 (int const,int const) ;
 int VAR_0 ;
 float VAR_1 ;
 int FUNC_2 (int const,int const) ;
 float FUNC_3 (int const,int const) ;
 int FUNC_4 (int ,int const,int const) ;
 float FUNC_5 (float) ;

float FUNC_6( const vec3_t VAR_2, const vec3_t VAR_3, const winding_t *VAR_4 ){
 vec3_t VAR_5, VAR_6;
 int VAR_7, VAR_8;
 vec3_t VAR_9[ VAR_0 ];
 float VAR_10;
 float VAR_11, VAR_12, VAR_13;



 for ( VAR_7 = 0; VAR_7 < VAR_4->numpoints; VAR_7++ )
 {
  FUNC_4( VAR_4->p[ VAR_7 ], VAR_2, VAR_9[ VAR_7 ] );
  FUNC_3( VAR_9[ VAR_7 ], VAR_9[ VAR_7 ] );
 }


 FUNC_2( VAR_9[ 0 ], VAR_9[ VAR_7 ] );


 VAR_10 = 0.0f;
 for ( VAR_7 = 0; VAR_7 < VAR_4->numpoints; VAR_7++ )
 {

  VAR_8 = VAR_7 + 1;
  VAR_11 = FUNC_1( VAR_9[ VAR_7 ], VAR_9[ VAR_8 ] );


  if ( VAR_11 > 1.0f ) {
   VAR_11 = 1.0f;
  }
  else if ( VAR_11 < -1.0f ) {
   VAR_11 = -1.0f;
  }


  VAR_12 = FUNC_5( VAR_11 );

  FUNC_0( VAR_9[ VAR_7 ], VAR_9[ VAR_8 ], VAR_5 );
  if ( FUNC_3( VAR_5, VAR_6 ) < 0.0001f ) {
   continue;
  }

  VAR_13 = FUNC_1( VAR_3, VAR_6 );
  VAR_10 += VAR_13 * VAR_12;


  if ( VAR_10 > 6.3f || VAR_10 < -6.3f ) {
   return 0.0f;
  }
 }



 VAR_10 *= VAR_1;
 return VAR_10;
}
