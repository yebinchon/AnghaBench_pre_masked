
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int* origin; int radius; int renderfx; int* shaderRGBA; int customShader; int reType; } ;
typedef TYPE_4__ refEntity_t ;
typedef int qhandle_t ;
typedef int ent ;
struct TYPE_10__ {scalar_t__ number; } ;
struct TYPE_14__ {int lerpOrigin; TYPE_1__ currentState; } ;
typedef TYPE_5__ centity_t ;
struct TYPE_15__ {int renderingThirdPerson; TYPE_3__* snap; } ;
struct TYPE_11__ {scalar_t__ clientNum; } ;
struct TYPE_12__ {TYPE_2__ ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*) ;
 TYPE_8__ VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3( centity_t *VAR_3, qhandle_t VAR_4 ) {
 int VAR_5;
 refEntity_t VAR_6;

 if ( VAR_3->currentState.number == VAR_2.snap->ps.clientNum && !VAR_2.renderingThirdPerson ) {
  VAR_5 = VAR_0;
 } else {
  VAR_5 = 0;
 }

 FUNC_1( &VAR_6, 0, sizeof( VAR_6 ) );
 FUNC_0( VAR_3->lerpOrigin, VAR_6.origin );
 VAR_6.origin[2] += 48;
 VAR_6.reType = VAR_1;
 VAR_6.customShader = VAR_4;
 VAR_6.radius = 10;
 VAR_6.renderfx = VAR_5;
 VAR_6.shaderRGBA[0] = 255;
 VAR_6.shaderRGBA[1] = 255;
 VAR_6.shaderRGBA[2] = 255;
 VAR_6.shaderRGBA[3] = 255;
 FUNC_2( &VAR_6 );
}
