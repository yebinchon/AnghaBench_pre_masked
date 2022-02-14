
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {int frequency; int phase; int amplitude; int base; int func; } ;
struct TYPE_6__ {int moveVector; TYPE_1__ deformationWave; } ;
typedef TYPE_2__ deformStage_t ;
struct TYPE_7__ {int numVertexes; scalar_t__ xyz; } ;


 float* FUNC_0 (int ) ;
 int FUNC_1 (float*,int ,float*) ;
 int FUNC_2 (int ,float,int ) ;
 float FUNC_3 (float*,int ,int ,int ,int ) ;
 TYPE_3__ VAR_0 ;

void FUNC_4( deformStage_t *VAR_1 ) {
 int VAR_2;
 float *VAR_3;
 float *VAR_4;
 float VAR_5;
 vec3_t VAR_6;

 VAR_4 = FUNC_0( VAR_1->deformationWave.func );

 VAR_5 = FUNC_3( VAR_4, VAR_1->deformationWave.base,
  VAR_1->deformationWave.amplitude,
  VAR_1->deformationWave.phase,
  VAR_1->deformationWave.frequency );

 FUNC_2( VAR_1->moveVector, VAR_5, VAR_6 );

 VAR_3 = ( float * ) VAR_0.xyz;
 for ( VAR_2 = 0; VAR_2 < VAR_0.numVertexes; VAR_2++, VAR_3 += 4 ) {
  FUNC_1( VAR_3, VAR_6, VAR_3 );
 }
}
