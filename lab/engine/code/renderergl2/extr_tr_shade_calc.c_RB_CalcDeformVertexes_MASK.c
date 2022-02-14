
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
typedef int int16_t ;
struct TYPE_7__ {scalar_t__ frequency; scalar_t__ phase; int amplitude; int base; int func; } ;
struct TYPE_5__ {float deformationSpread; TYPE_4__ deformationWave; } ;
typedef TYPE_1__ deformStage_t ;
struct TYPE_6__ {int numVertexes; int ** normal; scalar_t__ xyz; } ;


 float FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (float*,int *) ;
 float* FUNC_2 (int ) ;
 float FUNC_3 (float*,int ,int ,scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_0 ;

void FUNC_4( deformStage_t *VAR_1 )
{
 int VAR_2;
 vec3_t VAR_3;
 float VAR_4;
 float *VAR_5 = ( float * ) VAR_0.xyz;
 int16_t *VAR_6 = VAR_0.normal[0];
 float *VAR_7;

 if ( VAR_1->deformationWave.frequency == 0 )
 {
  VAR_4 = FUNC_0( &VAR_1->deformationWave );

  for ( VAR_2 = 0; VAR_2 < VAR_0.numVertexes; VAR_2++, VAR_5 += 4, VAR_6 += 4 )
  {
   FUNC_1(VAR_3, VAR_6);

   VAR_5[0] += VAR_3[0] * VAR_4;
   VAR_5[1] += VAR_3[1] * VAR_4;
   VAR_5[2] += VAR_3[2] * VAR_4;
  }
 }
 else
 {
  VAR_7 = FUNC_2( VAR_1->deformationWave.func );

  for ( VAR_2 = 0; VAR_2 < VAR_0.numVertexes; VAR_2++, VAR_5 += 4, VAR_6 += 4 )
  {
   float VAR_8 = ( VAR_5[0] + VAR_5[1] + VAR_5[2] ) * VAR_1->deformationSpread;

   VAR_4 = FUNC_3( VAR_7, VAR_1->deformationWave.base,
    VAR_1->deformationWave.amplitude,
    VAR_1->deformationWave.phase + VAR_8,
    VAR_1->deformationWave.frequency );

   FUNC_1(VAR_3, VAR_6);

   VAR_5[0] += VAR_3[0] * VAR_4;
   VAR_5[1] += VAR_3[1] * VAR_4;
   VAR_5[2] += VAR_3[2] * VAR_4;
  }
 }
}
