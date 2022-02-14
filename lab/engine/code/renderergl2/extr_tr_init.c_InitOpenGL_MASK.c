
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vidWidth; int maxTextureSize; int numTextureUnits; int textureEnvAddAvailable; } ;
struct TYPE_3__ {int glslMaxAnimatedBones; } ;
typedef int GLint ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5( void )
{
 if ( VAR_4.vidWidth == 0 )
 {
  GLint VAR_8;

  FUNC_2( VAR_6 );
  FUNC_3();

  VAR_4.textureEnvAddAvailable = VAR_7;


  FUNC_4( VAR_1, &VAR_8 );
  VAR_4.maxTextureSize = VAR_8;


  if ( VAR_4.maxTextureSize <= 0 )
  {
   VAR_4.maxTextureSize = 0;
  }

  FUNC_4( VAR_0, &VAR_8 );
  VAR_4.numTextureUnits = VAR_8;


  FUNC_4( VAR_2, &VAR_8 );
  VAR_5.glslMaxAnimatedBones = FUNC_0( 0, VAR_3, ( VAR_8 - 160 ) / 16 );
  if ( VAR_5.glslMaxAnimatedBones < 12 ) {
   VAR_5.glslMaxAnimatedBones = 0;
  }
 }


 FUNC_1();
}
