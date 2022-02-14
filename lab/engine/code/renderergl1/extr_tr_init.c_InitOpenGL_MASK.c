
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vidWidth; scalar_t__ maxTextureSize; } ;
typedef scalar_t__ GLint ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int ,scalar_t__*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4( void )
{
 if ( VAR_1.vidWidth == 0 )
 {
  GLint VAR_3;

  FUNC_1( VAR_2 );
  FUNC_2();


  FUNC_3( VAR_0, &VAR_3 );
  VAR_1.maxTextureSize = VAR_3;


  if ( VAR_1.maxTextureSize <= 0 )
  {
   VAR_1.maxTextureSize = 0;
  }
 }


 FUNC_0();
}
