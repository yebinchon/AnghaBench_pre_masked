
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double** p; int numpoints; } ;
typedef TYPE_1__ winding_accu_t ;
typedef double vec_t ;
typedef double vec_accu_t ;
typedef scalar_t__* vec3_t ;
typedef double* vec3_accu_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (double*,double*,double*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (double*,double*,double*) ;
 int FUNC_4 (scalar_t__*,double*) ;
 int FUNC_5 (double*,double,double*) ;
 int FUNC_6 (double*,double*,double*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

winding_accu_t *FUNC_8( vec3_t VAR_1, vec_t VAR_2 ){
 int VAR_3, VAR_4;
 vec_t VAR_5, VAR_6;
 vec3_accu_t VAR_7, VAR_8, VAR_9, VAR_10;
 winding_accu_t *VAR_11;




 VAR_5 = 0.56;

 VAR_3 = -1;
 for ( VAR_4 = 0; VAR_4 < 3; VAR_4++ ) {
  VAR_6 = (vec_t) FUNC_7( VAR_1[VAR_4] );
  if ( VAR_6 > VAR_5 ) {
   VAR_3 = VAR_4;
   VAR_5 = VAR_6;
  }
 }
 if ( VAR_3 == -1 ) {
  FUNC_2( "BaseWindingForPlaneAccu: no dominant axis found because normal is too short" );
 }

 switch ( VAR_3 ) {
 case 0:
 case 1:
  VAR_7[0] = (vec_accu_t) -VAR_1[1];
  VAR_7[1] = (vec_accu_t) VAR_1[0];
  VAR_7[2] = 0;
  break;
 case 2:
  VAR_7[0] = 0;
  VAR_7[1] = (vec_accu_t) -VAR_1[2];
  VAR_7[2] = (vec_accu_t) VAR_1[1];
  break;
 }
 FUNC_5( VAR_7, ( (vec_accu_t) VAR_0 ) * 4.0, VAR_7 );






 FUNC_4( VAR_1, VAR_10 );
 FUNC_1( VAR_10, VAR_7, VAR_8 );



 FUNC_5( VAR_10, (vec_accu_t) VAR_2, VAR_9 );
 VAR_11 = FUNC_0( 4 );

 FUNC_6( VAR_9, VAR_7, VAR_11->p[0] );
 FUNC_3( VAR_11->p[0], VAR_8, VAR_11->p[0] );

 FUNC_3( VAR_9, VAR_7, VAR_11->p[1] );
 FUNC_3( VAR_11->p[1], VAR_8, VAR_11->p[1] );

 FUNC_3( VAR_9, VAR_7, VAR_11->p[2] );
 FUNC_6( VAR_11->p[2], VAR_8, VAR_11->p[2] );

 FUNC_6( VAR_9, VAR_7, VAR_11->p[3] );
 FUNC_6( VAR_11->p[3], VAR_8, VAR_11->p[3] );

 VAR_11->numpoints = 4;

 return VAR_11;
}
