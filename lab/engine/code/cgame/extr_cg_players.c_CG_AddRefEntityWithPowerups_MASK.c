
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int customShader; } ;
typedef TYPE_2__ refEntity_t ;
struct TYPE_11__ {int powerups; } ;
typedef TYPE_3__ entityState_t ;
struct TYPE_13__ {int time; } ;
struct TYPE_9__ {int battleSuitShader; int regenShader; int quadShader; int redQuadShader; int invisShader; } ;
struct TYPE_12__ {TYPE_1__ media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1( refEntity_t *VAR_7, entityState_t *VAR_8, int VAR_9 ) {

 if ( VAR_8->powerups & ( 1 << VAR_1 ) ) {
  VAR_7->customShader = VAR_6.media.invisShader;
  FUNC_0( VAR_7 );
 } else {
   FUNC_0( VAR_7 );


  if ( VAR_8->powerups & ( 1 << VAR_2 ) )
  {
   if (VAR_9 == VAR_4)
    VAR_7->customShader = VAR_6.media.redQuadShader;
   else
    VAR_7->customShader = VAR_6.media.quadShader;
   FUNC_0( VAR_7 );
  }
  if ( VAR_8->powerups & ( 1 << VAR_3 ) ) {
   if ( ( ( VAR_5.time / 100 ) % 10 ) == 1 ) {
    VAR_7->customShader = VAR_6.media.regenShader;
    FUNC_0( VAR_7 );
   }
  }
  if ( VAR_8->powerups & ( 1 << VAR_0 ) ) {
   VAR_7->customShader = VAR_6.media.battleSuitShader;
   FUNC_0( VAR_7 );
  }
 }
}
