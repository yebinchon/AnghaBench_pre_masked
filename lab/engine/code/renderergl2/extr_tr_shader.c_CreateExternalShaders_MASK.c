
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int image_t ;
struct TYPE_14__ {scalar_t__ defaultShader; } ;
struct TYPE_13__ {int stateBits; int active; TYPE_4__* bundle; } ;
struct TYPE_12__ {TYPE_7__* sunFlareShader; int * dlightImage; TYPE_3__* flareShader; void* sunShader; void* projectionShadowShader; } ;
struct TYPE_11__ {int ** image; } ;
struct TYPE_10__ {int numUnfoggedPasses; TYPE_2__** stages; int defaultShader; } ;
struct TYPE_9__ {TYPE_1__* bundle; int stateBits; int adjustColorsForFog; } ;
struct TYPE_8__ {int ** image; } ;


 int VAR_0 ;
 TYPE_7__* FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 void* FUNC_2 (char*,int ,int ) ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 TYPE_5__ VAR_6 ;

__attribute__((used)) static void FUNC_3( void ) {
 VAR_6.projectionShadowShader = FUNC_2( "projectionShadow", VAR_3, VAR_4 );
 VAR_6.flareShader = FUNC_2( "flareShader", VAR_3, VAR_4 );



 if(!VAR_6.flareShader->defaultShader)
 {
  int VAR_7;

  for(VAR_7 = 0; VAR_7 < VAR_6.flareShader->numUnfoggedPasses; VAR_7++)
  {
   VAR_6.flareShader->stages[VAR_7]->adjustColorsForFog = VAR_0;
   VAR_6.flareShader->stages[VAR_7]->stateBits |= VAR_2;
  }
 }

 VAR_6.sunShader = FUNC_2( "sun", VAR_3, VAR_4 );

 VAR_6.sunFlareShader = FUNC_2( "gfx/2d/sunflare", VAR_3, VAR_4);


 if (VAR_6.sunFlareShader->defaultShader)
 {
  image_t *VAR_8;

  if (!VAR_6.flareShader->defaultShader && VAR_6.flareShader->stages[0] && VAR_6.flareShader->stages[0]->bundle[0].image[0])
   VAR_8 = VAR_6.flareShader->stages[0]->bundle[0].image[0];
  else
   VAR_8 = VAR_6.dlightImage;

  FUNC_1( "gfx/2d/sunflare", VAR_3 );
  VAR_5[0].bundle[0].image[0] = VAR_8;
  VAR_5[0].active = VAR_4;
  VAR_5[0].stateBits = VAR_1;
  VAR_6.sunFlareShader = FUNC_0();
 }

}
