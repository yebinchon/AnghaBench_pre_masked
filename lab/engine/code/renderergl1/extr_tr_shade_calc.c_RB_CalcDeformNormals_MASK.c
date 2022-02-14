
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int frequency; float amplitude; } ;
struct TYPE_6__ {TYPE_1__ deformationWave; } ;
typedef TYPE_2__ deformStage_t ;
struct TYPE_7__ {int numVertexes; int shaderTime; scalar_t__ normal; scalar_t__ xyz; } ;


 float FUNC_0 (int,float,float,int) ;
 int FUNC_1 (float*) ;
 TYPE_3__ VAR_0 ;

void FUNC_2( deformStage_t *VAR_1 ) {
 int VAR_2;
 float VAR_3;
 float *VAR_4 = ( float * ) VAR_0.xyz;
 float *VAR_5 = ( float * ) VAR_0.normal;

 for ( VAR_2 = 0; VAR_2 < VAR_0.numVertexes; VAR_2++, VAR_4 += 4, VAR_5 += 4 ) {
  VAR_3 = 0.98f;
  VAR_3 = FUNC_0( VAR_4[0] * VAR_3, VAR_4[1] * VAR_3, VAR_4[2] * VAR_3,
   VAR_0.shaderTime * VAR_1->deformationWave.frequency );
  VAR_5[ 0 ] += VAR_1->deformationWave.amplitude * VAR_3;

  VAR_3 = 0.98f;
  VAR_3 = FUNC_0( 100 + VAR_4[0] * VAR_3, VAR_4[1] * VAR_3, VAR_4[2] * VAR_3,
   VAR_0.shaderTime * VAR_1->deformationWave.frequency );
  VAR_5[ 1 ] += VAR_1->deformationWave.amplitude * VAR_3;

  VAR_3 = 0.98f;
  VAR_3 = FUNC_0( 200 + VAR_4[0] * VAR_3, VAR_4[1] * VAR_3, VAR_4[2] * VAR_3,
   VAR_0.shaderTime * VAR_1->deformationWave.frequency );
  VAR_5[ 2 ] += VAR_1->deformationWave.amplitude * VAR_3;

  FUNC_1( VAR_5 );
 }
}
