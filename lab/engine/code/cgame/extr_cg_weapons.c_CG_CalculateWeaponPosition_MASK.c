
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_3__ {int vieworg; } ;
struct TYPE_4__ {int bobcycle; float xyspeed; float bobfracsin; double time; int landTime; double landChange; int stepTime; double stepChange; int refdefViewAngles; TYPE_1__ refdef; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,float*) ;
 size_t VAR_5 ;
 TYPE_2__ VAR_6 ;
 float FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2( vec3_t VAR_7, vec3_t VAR_8 ) {
 float VAR_9;
 int VAR_10;
 float VAR_11;

 FUNC_0( VAR_6.refdef.vieworg, VAR_7 );
 FUNC_0( VAR_6.refdefViewAngles, VAR_8 );


 if ( VAR_6.bobcycle & 1 ) {
  VAR_9 = -VAR_6.xyspeed;
 } else {
  VAR_9 = VAR_6.xyspeed;
 }


 VAR_8[VAR_3] += VAR_9 * VAR_6.bobfracsin * 0.005;
 VAR_8[VAR_5] += VAR_9 * VAR_6.bobfracsin * 0.01;
 VAR_8[VAR_2] += VAR_6.xyspeed * VAR_6.bobfracsin * 0.005;


 VAR_10 = VAR_6.time - VAR_6.landTime;
 if ( VAR_10 < VAR_0 ) {
  VAR_7[2] += VAR_6.landChange*0.25 * VAR_10 / VAR_0;
 } else if ( VAR_10 < VAR_0 + VAR_1 ) {
  VAR_7[2] += VAR_6.landChange*0.25 *
   (VAR_0 + VAR_1 - VAR_10) / VAR_1;
 }
 VAR_9 = VAR_6.xyspeed + 40;
 VAR_11 = FUNC_1( VAR_6.time * 0.001 );
 VAR_8[VAR_3] += VAR_9 * VAR_11 * 0.01;
 VAR_8[VAR_5] += VAR_9 * VAR_11 * 0.01;
 VAR_8[VAR_2] += VAR_9 * VAR_11 * 0.01;
}
