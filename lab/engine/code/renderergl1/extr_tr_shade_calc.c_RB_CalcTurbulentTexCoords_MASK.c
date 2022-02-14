
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double phase; double frequency; float amplitude; } ;
typedef TYPE_1__ waveForm_t ;
typedef size_t int64_t ;
struct TYPE_7__ {double shaderTime; int numVertexes; double** xyz; } ;
struct TYPE_6__ {float* sinTable; } ;


 size_t VAR_0 ;
 double VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_0( const waveForm_t *VAR_4, float *VAR_5 )
{
 int VAR_6;
 double VAR_7;

 VAR_7 = ( VAR_4->phase + VAR_2.shaderTime * VAR_4->frequency );

 for ( VAR_6 = 0; VAR_6 < VAR_2.numVertexes; VAR_6++, VAR_5 += 2 )
 {
  float VAR_8 = VAR_5[0];
  float VAR_9 = VAR_5[1];

  VAR_5[0] = VAR_8 + VAR_3.sinTable[ ( ( int64_t ) ( ( ( VAR_2.xyz[VAR_6][0] + VAR_2.xyz[VAR_6][2] )* 1.0/128 * 0.125 + VAR_7 ) * VAR_1 ) ) & ( VAR_0 ) ] * VAR_4->amplitude;
  VAR_5[1] = VAR_9 + VAR_3.sinTable[ ( ( int64_t ) ( ( VAR_2.xyz[VAR_6][1] * 1.0/128 * 0.125 + VAR_7 ) * VAR_1 ) ) & ( VAR_0 ) ] * VAR_4->amplitude;
 }
}
