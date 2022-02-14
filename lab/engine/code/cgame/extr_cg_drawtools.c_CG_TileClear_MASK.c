
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int x; int y; int width; int height; } ;
struct TYPE_10__ {TYPE_2__ refdef; } ;
struct TYPE_8__ {int backTileShader; } ;
struct TYPE_6__ {int vidWidth; int vidHeight; } ;
struct TYPE_9__ {TYPE_3__ media; TYPE_1__ glconfig; } ;


 int FUNC_0 (int,int,int,int,int ) ;
 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;

void FUNC_1( void ) {
 int VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = VAR_1.glconfig.vidWidth;
 VAR_7 = VAR_1.glconfig.vidHeight;

 if ( VAR_0.refdef.x == 0 && VAR_0.refdef.y == 0 &&
  VAR_0.refdef.width == VAR_6 && VAR_0.refdef.height == VAR_7 ) {
  return;
 }

 VAR_2 = VAR_0.refdef.y;
 VAR_3 = VAR_2 + VAR_0.refdef.height-1;
 VAR_4 = VAR_0.refdef.x;
 VAR_5 = VAR_4 + VAR_0.refdef.width-1;


 FUNC_0( 0, 0, VAR_6, VAR_2, VAR_1.media.backTileShader );


 FUNC_0( 0, VAR_3, VAR_6, VAR_7 - VAR_3, VAR_1.media.backTileShader );


 FUNC_0( 0, VAR_2, VAR_4, VAR_3 - VAR_2 + 1, VAR_1.media.backTileShader );


 FUNC_0( VAR_5, VAR_2, VAR_6 - VAR_5, VAR_3 - VAR_2 + 1, VAR_1.media.backTileShader );
}
