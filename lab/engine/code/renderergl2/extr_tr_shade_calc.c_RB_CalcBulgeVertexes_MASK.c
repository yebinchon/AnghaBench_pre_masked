
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef float* vec3_t ;
typedef size_t int64_t ;
typedef int int16_t ;
struct TYPE_8__ {double bulgeSpeed; float const bulgeWidth; float bulgeHeight; } ;
typedef TYPE_2__ deformStage_t ;
struct TYPE_7__ {double time; } ;
struct TYPE_11__ {TYPE_1__ refdef; } ;
struct TYPE_10__ {int numVertexes; int ** normal; scalar_t__ xyz; scalar_t__* texCoords; } ;
struct TYPE_9__ {float* sinTable; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (float*,int *) ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;

void FUNC_1( deformStage_t *VAR_6 ) {
 int VAR_7;
 const float *VAR_8 = ( const float * ) VAR_4.texCoords[0];
 float *VAR_9 = ( float * ) VAR_4.xyz;
 int16_t *VAR_10 = VAR_4.normal[0];
 double VAR_11;

 VAR_11 = VAR_3.refdef.time * 0.001 * VAR_6->bulgeSpeed;

 for ( VAR_7 = 0; VAR_7 < VAR_4.numVertexes; VAR_7++, VAR_9 += 4, VAR_8 += 2, VAR_10 += 4 ) {
  int64_t VAR_12;
  float VAR_13;
  vec3_t VAR_14;

  FUNC_0(VAR_14, VAR_10);

  VAR_12 = (float)( VAR_1 / (VAR_2*2) ) * ( VAR_8[0] * VAR_6->bulgeWidth + VAR_11 );

  VAR_13 = VAR_5.sinTable[ VAR_12 & VAR_0 ] * VAR_6->bulgeHeight;

  VAR_9[0] += VAR_14[0] * VAR_13;
  VAR_9[1] += VAR_14[1] * VAR_13;
  VAR_9[2] += VAR_14[2] * VAR_13;
 }
}
