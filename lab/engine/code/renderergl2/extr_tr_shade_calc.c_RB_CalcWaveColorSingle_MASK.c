
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ func; float base; int phase; int frequency; float amplitude; } ;
typedef TYPE_1__ waveForm_t ;
struct TYPE_8__ {int shaderTime; } ;
struct TYPE_7__ {float identityLight; } ;


 float FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 float FUNC_1 (int ,int ,int ,int) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;

float FUNC_2( const waveForm_t *VAR_3 )
{
 float VAR_4;

 if ( VAR_3->func == VAR_0 ) {
  VAR_4 = VAR_3->base + FUNC_1( 0, 0, 0, ( VAR_1.shaderTime + VAR_3->phase ) * VAR_3->frequency ) * VAR_3->amplitude;
 } else {
  VAR_4 = FUNC_0( VAR_3 ) * VAR_2.identityLight;
 }

 if ( VAR_4 < 0 ) {
  VAR_4 = 0;
 }
 else if ( VAR_4 > 1 ) {
  VAR_4 = 1;
 }

 return VAR_4;
}
