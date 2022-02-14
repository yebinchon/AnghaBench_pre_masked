
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float phase; float frequency; float amplitude; } ;
typedef TYPE_1__ waveForm_t ;
struct TYPE_5__ {float shaderTime; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0( const waveForm_t *VAR_1, float *VAR_2, float *VAR_3 )
{
 *VAR_3 = VAR_1->phase + VAR_0.shaderTime * VAR_1->frequency;
 *VAR_2 = VAR_1->amplitude;
}
