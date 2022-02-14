
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int radius; int* shaderRGBA; int customShader; int origin; int renderfx; int reType; } ;
typedef TYPE_4__ refEntity_t ;
typedef int ent ;
struct TYPE_11__ {int * viewaxis; int vieworg; } ;
struct TYPE_16__ {int damageValue; int time; int damageTime; int damageX; int damageY; TYPE_2__ refdef; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_12__ {int viewBloodShader; } ;
struct TYPE_10__ {scalar_t__ hardwareType; } ;
struct TYPE_14__ {TYPE_3__ media; TYPE_1__ glconfig; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ) ;
 TYPE_9__ VAR_4 ;
 TYPE_8__ VAR_5 ;
 TYPE_7__ VAR_6 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3( void ) {
 int VAR_7;
 int VAR_8;
 refEntity_t VAR_9;

 if (!VAR_5.integer) {
  return;
 }

 if ( !VAR_4.damageValue ) {
  return;
 }






 if ( VAR_6.glconfig.hardwareType == VAR_1 ) {
  return;
 }

 VAR_8 = VAR_0;
 VAR_7 = VAR_4.time - VAR_4.damageTime;
 if ( VAR_7 <= 0 || VAR_7 >= VAR_8 ) {
  return;
 }


 FUNC_1( &VAR_9, 0, sizeof( VAR_9 ) );
 VAR_9.reType = VAR_3;
 VAR_9.renderfx = VAR_2;

 FUNC_0( VAR_4.refdef.vieworg, 8, VAR_4.refdef.viewaxis[0], VAR_9.origin );
 FUNC_0( VAR_9.origin, VAR_4.damageX * -8, VAR_4.refdef.viewaxis[1], VAR_9.origin );
 FUNC_0( VAR_9.origin, VAR_4.damageY * 8, VAR_4.refdef.viewaxis[2], VAR_9.origin );

 VAR_9.radius = VAR_4.damageValue * 3;
 VAR_9.customShader = VAR_6.media.viewBloodShader;
 VAR_9.shaderRGBA[0] = 255;
 VAR_9.shaderRGBA[1] = 255;
 VAR_9.shaderRGBA[2] = 255;
 VAR_9.shaderRGBA[3] = 200 * ( 1.0 - ((float)VAR_7 / VAR_8) );
 FUNC_2( &VAR_9 );
}
