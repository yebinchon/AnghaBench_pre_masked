
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int currenttmu; } ;
struct TYPE_3__ {int (* Error ) (int ,char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int ,char*,int) ;

void FUNC_4( int VAR_5 )
{
 if ( VAR_3.currenttmu == VAR_5 )
 {
  return;
 }

 if ( VAR_5 == 0 )
 {
  FUNC_1( VAR_1 );
  FUNC_0( "glActiveTextureARB( GL_TEXTURE0_ARB )\n" );
  FUNC_2( VAR_1 );
  FUNC_0( "glClientActiveTextureARB( GL_TEXTURE0_ARB )\n" );
 }
 else if ( VAR_5 == 1 )
 {
  FUNC_1( VAR_2 );
  FUNC_0( "glActiveTextureARB( GL_TEXTURE1_ARB )\n" );
  FUNC_2( VAR_2 );
  FUNC_0( "glClientActiveTextureARB( GL_TEXTURE1_ARB )\n" );
 } else {
  VAR_4.Error( VAR_0, "GL_SelectTexture: unit = %i", VAR_5 );
 }

 VAR_3.currenttmu = VAR_5;
}
