
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_3__ {int zFar; } ;
struct TYPE_4__ {TYPE_1__ viewParms; } ;


 int FUNC_0 (int*,int*) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int,int *,int*) ;
 float FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (float) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,float,int*) ;
 TYPE_2__ VAR_2 ;
 float**** VAR_3 ;
 float*** VAR_4 ;
 int FUNC_6 (int) ;

void FUNC_7( float VAR_5 )
{
 int VAR_6, VAR_7, VAR_8;
 float VAR_9 = 4096;
 float VAR_10;
 float VAR_11, VAR_12;
 vec3_t VAR_13;
 vec3_t VAR_14;



 VAR_2.viewParms.zFar = 1024;

 for ( VAR_6 = 0; VAR_6 < 6; VAR_6++ )
 {
  for ( VAR_8 = 0; VAR_8 <= VAR_1; VAR_8++ )
  {
   for ( VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++ )
   {

    FUNC_1( ( VAR_7 - VAR_0 ) / ( float ) VAR_0,
       ( VAR_8 - VAR_0 ) / ( float ) VAR_0,
       VAR_6,
       ((void*)0),
       VAR_13 );


    VAR_10 = ( 1.0f / ( 2 * FUNC_0( VAR_13, VAR_13 ) ) ) *
     ( -2 * VAR_13[2] * VAR_9 +
        2 * FUNC_6( FUNC_3( VAR_13[2] ) * FUNC_3( VAR_9 ) +
                  2 * FUNC_3( VAR_13[0] ) * VAR_9 * VAR_5 +
         FUNC_3( VAR_13[0] ) * FUNC_3( VAR_5 ) +
         2 * FUNC_3( VAR_13[1] ) * VAR_9 * VAR_5 +
         FUNC_3( VAR_13[1] ) * FUNC_3( VAR_5 ) +
         2 * FUNC_3( VAR_13[2] ) * VAR_9 * VAR_5 +
         FUNC_3( VAR_13[2] ) * FUNC_3( VAR_5 ) ) );

    VAR_4[VAR_6][VAR_8][VAR_7] = VAR_10;


    FUNC_5( VAR_13, VAR_10, VAR_14 );
    VAR_14[2] += VAR_9;


    FUNC_4( VAR_14 );

    VAR_11 = FUNC_2( VAR_14[0] );
    VAR_12 = FUNC_2( VAR_14[1] );

    VAR_3[VAR_6][VAR_8][VAR_7][0] = VAR_11;
    VAR_3[VAR_6][VAR_8][VAR_7][1] = VAR_12;
   }
  }
 }
}
