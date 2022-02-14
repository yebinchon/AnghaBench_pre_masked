
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int numpoints; float** p; } ;
typedef TYPE_1__ winding_t ;
typedef float* vec3_t ;
typedef scalar_t__ qboolean ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (float*,float*,float*) ;
 float FUNC_3 (float*,float*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 float VAR_1 ;
 int FUNC_5 (float*,float*) ;
 int FUNC_6 (float*,float*) ;
 int FUNC_7 (float*,float*,float*) ;
 int FUNC_8 (float**,float**,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_9( winding_t *VAR_4, winding_t **VAR_5, vec3_t VAR_6 ) {
 int VAR_7, VAR_8, VAR_9;
 float *VAR_10, *VAR_11;
 vec3_t VAR_12;
 float VAR_13;
 int VAR_14, VAR_15;
 vec3_t VAR_16[VAR_0];
 vec3_t VAR_17[VAR_0];
 vec3_t VAR_18[VAR_0];
 qboolean VAR_19[VAR_0];
 qboolean VAR_20;

 if ( !*VAR_5 ) {
  *VAR_5 = FUNC_1( VAR_4 );
  return;
 }

 VAR_14 = ( *VAR_5 )->numpoints;
 FUNC_8( VAR_16, ( *VAR_5 )->p, VAR_14 * sizeof( vec3_t ) );

 for ( VAR_7 = 0 ; VAR_7 < VAR_4->numpoints ; VAR_7++ ) {
  VAR_10 = VAR_4->p[VAR_7];


  for ( VAR_8 = 0 ; VAR_8 < VAR_14 ; VAR_8++ ) {
   VAR_9 = ( VAR_8 + 1 ) % VAR_14;

   FUNC_7( VAR_16[VAR_9], VAR_16[VAR_8], VAR_12 );
   FUNC_6( VAR_12, VAR_12 );
   FUNC_2( VAR_6, VAR_12, VAR_18[VAR_8] );
  }

  VAR_20 = VAR_2;
  for ( VAR_8 = 0 ; VAR_8 < VAR_14 ; VAR_8++ ) {
   FUNC_7( VAR_10, VAR_16[VAR_8], VAR_12 );
   VAR_13 = FUNC_3( VAR_12, VAR_18[VAR_8] );
   if ( VAR_13 >= VAR_1 ) {
    VAR_20 = VAR_3;
   }
   if ( VAR_13 >= -VAR_1 ) {
    VAR_19[VAR_8] = VAR_3;
   }
   else {
    VAR_19[VAR_8] = VAR_2;
   }
  }


  if ( !VAR_20 ) {
   continue;
  }


  for ( VAR_8 = 0 ; VAR_8 < VAR_14 ; VAR_8++ ) {
   if ( !VAR_19[ VAR_8 % VAR_14 ] && VAR_19[ ( VAR_8 + 1 ) % VAR_14 ] ) {
    break;
   }
  }
  if ( VAR_8 == VAR_14 ) {
   continue;
  }


  FUNC_5( VAR_10, VAR_17[0] );
  VAR_15 = 1;


  VAR_8 = ( VAR_8 + 1 ) % VAR_14;
  for ( VAR_9 = 0 ; VAR_9 < VAR_14 ; VAR_9++ ) {
   if ( VAR_19[ ( VAR_8 + VAR_9 ) % VAR_14 ] && VAR_19[ ( VAR_8 + VAR_9 + 1 ) % VAR_14 ] ) {
    continue;
   }
   VAR_11 = VAR_16[ ( VAR_8 + VAR_9 + 1 ) % VAR_14 ];
   FUNC_5( VAR_11, VAR_17[VAR_15] );
   VAR_15++;
  }

  VAR_14 = VAR_15;
  FUNC_8( VAR_16, VAR_17, VAR_14 * sizeof( vec3_t ) );
 }

 FUNC_4( *VAR_5 );
 VAR_4 = FUNC_0( VAR_14 );
 VAR_4->numpoints = VAR_14;
 *VAR_5 = VAR_4;
 FUNC_8( VAR_4->p, VAR_16, VAR_14 * sizeof( vec3_t ) );
}
