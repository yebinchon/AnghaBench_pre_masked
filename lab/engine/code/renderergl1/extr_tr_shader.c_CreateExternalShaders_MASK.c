
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* sunShader; TYPE_2__* flareShader; void* projectionShadowShader; } ;
struct TYPE_5__ {int numUnfoggedPasses; TYPE_1__** stages; int defaultShader; } ;
struct TYPE_4__ {int stateBits; int adjustColorsForFog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int ,int ) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void FUNC_1( void ) {
 VAR_4.projectionShadowShader = FUNC_0( "projectionShadow", VAR_2, VAR_3 );
 VAR_4.flareShader = FUNC_0( "flareShader", VAR_2, VAR_3 );



 if(!VAR_4.flareShader->defaultShader)
 {
  int VAR_5;

  for(VAR_5 = 0; VAR_5 < VAR_4.flareShader->numUnfoggedPasses; VAR_5++)
  {
   VAR_4.flareShader->stages[VAR_5]->adjustColorsForFog = VAR_0;
   VAR_4.flareShader->stages[VAR_5]->stateBits |= VAR_1;
  }
 }

 VAR_4.sunShader = FUNC_0( "sun", VAR_2, VAR_3 );
}
