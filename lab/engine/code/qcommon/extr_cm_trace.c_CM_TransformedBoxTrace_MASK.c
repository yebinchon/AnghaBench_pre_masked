
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_7__ {double* normal; } ;
struct TYPE_8__ {double fraction; double* endpos; TYPE_1__ plane; } ;
typedef TYPE_2__ trace_t ;
struct TYPE_9__ {int use; float radius; float halfheight; double* offset; } ;
typedef TYPE_3__ sphere_t ;
typedef scalar_t__ qboolean ;
typedef int clipHandle_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,double*,double*,double*,double*,int ,double* const,int,int,TYPE_3__*) ;
 int FUNC_1 (double* const,double**) ;
 int FUNC_2 (double*,double**) ;
 int FUNC_3 (double**,double**) ;
 int FUNC_4 (double*,int ,int ,float) ;
 int FUNC_5 (double*,double* const,double*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double* VAR_3 ;

void FUNC_6( trace_t *VAR_4, const vec3_t VAR_5, const vec3_t VAR_6,
        vec3_t VAR_7, vec3_t VAR_8,
        clipHandle_t VAR_9, int VAR_10,
        const vec3_t VAR_11, const vec3_t VAR_12, int VAR_13 ) {
 trace_t VAR_14;
 vec3_t VAR_15, VAR_16;
 qboolean VAR_17;
 vec3_t VAR_18;
 vec3_t VAR_19[2];
 vec3_t VAR_20[3], VAR_21[3];
 int VAR_22;
 float VAR_23;
 float VAR_24;
 float VAR_25;
 sphere_t VAR_26;

 if ( !VAR_7 ) {
  VAR_7 = VAR_3;
 }
 if ( !VAR_8 ) {
  VAR_8 = VAR_3;
 }




 for ( VAR_22 = 0 ; VAR_22 < 3 ; VAR_22++ ) {
  VAR_18[VAR_22] = ( VAR_7[VAR_22] + VAR_8[VAR_22] ) * 0.5;
  VAR_19[0][VAR_22] = VAR_7[VAR_22] - VAR_18[VAR_22];
  VAR_19[1][VAR_22] = VAR_8[VAR_22] - VAR_18[VAR_22];
  VAR_15[VAR_22] = VAR_5[VAR_22] + VAR_18[VAR_22];
  VAR_16[VAR_22] = VAR_6[VAR_22] + VAR_18[VAR_22];
 }


 FUNC_5( VAR_15, VAR_11, VAR_15 );
 FUNC_5( VAR_16, VAR_11, VAR_16 );


 if ( VAR_9 != VAR_0 &&
  (VAR_12[0] || VAR_12[1] || VAR_12[2]) ) {
  VAR_17 = VAR_2;
 } else {
  VAR_17 = VAR_1;
 }

 VAR_23 = VAR_19[ 1 ][ 0 ];
 VAR_24 = VAR_19[ 1 ][ 2 ];

 VAR_26.use = VAR_13;
 VAR_26.radius = ( VAR_23 > VAR_24 ) ? VAR_24 : VAR_23;
 VAR_26.halfheight = VAR_24;
 VAR_25 = VAR_24 - VAR_26.radius;

 if (VAR_17) {






  FUNC_1(VAR_12, VAR_20);
  FUNC_2(VAR_15, VAR_20);
  FUNC_2(VAR_16, VAR_20);

  VAR_26.offset[0] = VAR_20[0][ 2 ] * VAR_25;
  VAR_26.offset[1] = -VAR_20[1][ 2 ] * VAR_25;
  VAR_26.offset[2] = VAR_20[2][ 2 ] * VAR_25;
 }
 else {
  FUNC_4( VAR_26.offset, 0, 0, VAR_25 );
 }


 FUNC_0( &VAR_14, VAR_15, VAR_16, VAR_19[0], VAR_19[1], VAR_9, VAR_11, VAR_10, VAR_13, &VAR_26 );


 if ( VAR_17 && VAR_14.fraction != 1.0 ) {

  FUNC_3(VAR_20, VAR_21);
  FUNC_2(VAR_14.plane.normal, VAR_21);
 }



 VAR_14.endpos[0] = VAR_5[0] + VAR_14.fraction * (VAR_6[0] - VAR_5[0]);
 VAR_14.endpos[1] = VAR_5[1] + VAR_14.fraction * (VAR_6[1] - VAR_5[1]);
 VAR_14.endpos[2] = VAR_5[2] + VAR_14.fraction * (VAR_6[2] - VAR_5[2]);

 *VAR_4 = VAR_14;
}
