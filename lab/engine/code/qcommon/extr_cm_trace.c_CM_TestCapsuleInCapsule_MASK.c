
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_6__ {scalar_t__ fraction; void* allsolid; void* startsolid; } ;
struct TYPE_5__ {double* offset; float radius; } ;
struct TYPE_7__ {double* start; TYPE_2__ trace; TYPE_1__ sphere; } ;
typedef TYPE_3__ traceWork_t ;
typedef int clipHandle_t ;


 int FUNC_0 (int ,double*,double*) ;
 float FUNC_1 (float) ;
 int FUNC_2 (double*,double*,double*) ;
 int FUNC_3 (double*,double*) ;
 float FUNC_4 (double*) ;
 int FUNC_5 (double*,double*,double*) ;
 void* VAR_0 ;

void FUNC_6( traceWork_t *VAR_1, clipHandle_t VAR_2 ) {
 int VAR_3;
 vec3_t VAR_4, VAR_5;
 vec3_t VAR_6, VAR_7;
 vec3_t VAR_8, VAR_9, VAR_10;
 vec3_t VAR_11, VAR_12[2];
 float VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 FUNC_0(VAR_2, VAR_4, VAR_5);

 FUNC_2(VAR_1->start, VAR_1->sphere.offset, VAR_6);
 FUNC_5(VAR_1->start, VAR_1->sphere.offset, VAR_7);
 for ( VAR_3 = 0 ; VAR_3 < 3 ; VAR_3++ ) {
  VAR_11[VAR_3] = ( VAR_4[VAR_3] + VAR_5[VAR_3] ) * 0.5;
  VAR_12[0][VAR_3] = VAR_4[VAR_3] - VAR_11[VAR_3];
  VAR_12[1][VAR_3] = VAR_5[VAR_3] - VAR_11[VAR_3];
 }
 VAR_14 = VAR_12[ 1 ][ 0 ];
 VAR_15 = VAR_12[ 1 ][ 2 ];
 VAR_13 = ( VAR_14 > VAR_15 ) ? VAR_15 : VAR_14;
 VAR_16 = VAR_15 - VAR_13;

 VAR_17 = FUNC_1(VAR_1->sphere.radius + VAR_13);

 FUNC_3(VAR_11, VAR_8);
 VAR_8[2] += VAR_16;
 FUNC_5(VAR_8, VAR_6, VAR_10);
 if ( FUNC_4(VAR_10) < VAR_17 ) {
  VAR_1->trace.startsolid = VAR_1->trace.allsolid = VAR_0;
  VAR_1->trace.fraction = 0;
 }
 FUNC_5(VAR_8, VAR_7, VAR_10);
 if ( FUNC_4(VAR_10) < VAR_17 ) {
  VAR_1->trace.startsolid = VAR_1->trace.allsolid = VAR_0;
  VAR_1->trace.fraction = 0;
 }
 FUNC_3(VAR_11, VAR_9);
 VAR_9[2] -= VAR_16;
 FUNC_5(VAR_9, VAR_6, VAR_10);
 if ( FUNC_4(VAR_10) < VAR_17 ) {
  VAR_1->trace.startsolid = VAR_1->trace.allsolid = VAR_0;
  VAR_1->trace.fraction = 0;
 }
 FUNC_5(VAR_9, VAR_7, VAR_10);
 if ( FUNC_4(VAR_10) < VAR_17 ) {
  VAR_1->trace.startsolid = VAR_1->trace.allsolid = VAR_0;
  VAR_1->trace.fraction = 0;
 }

 if ( (VAR_6[2] >= VAR_8[2] && VAR_6[2] <= VAR_9[2]) ||
  (VAR_7[2] >= VAR_8[2] && VAR_7[2] <= VAR_9[2]) ) {

  VAR_6[2] = VAR_8[2] = 0;

  FUNC_5(VAR_6, VAR_8, VAR_10);
  if ( FUNC_4(VAR_10) < VAR_17 ) {
   VAR_1->trace.startsolid = VAR_1->trace.allsolid = VAR_0;
   VAR_1->trace.fraction = 0;
  }
 }
}
