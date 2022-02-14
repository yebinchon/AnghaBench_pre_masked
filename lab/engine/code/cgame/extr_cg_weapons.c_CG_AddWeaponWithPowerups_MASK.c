
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int customShader; } ;
typedef TYPE_2__ refEntity_t ;
struct TYPE_6__ {int quadWeaponShader; int battleWeaponShader; int invisShader; } ;
struct TYPE_8__ {TYPE_1__ media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( refEntity_t *VAR_4, int VAR_5 ) {

 if ( VAR_5 & ( 1 << VAR_1 ) ) {
  VAR_4->customShader = VAR_3.media.invisShader;
  FUNC_0( VAR_4 );
 } else {
  FUNC_0( VAR_4 );

  if ( VAR_5 & ( 1 << VAR_0 ) ) {
   VAR_4->customShader = VAR_3.media.battleWeaponShader;
   FUNC_0( VAR_4 );
  }
  if ( VAR_5 & ( 1 << VAR_2 ) ) {
   VAR_4->customShader = VAR_3.media.quadWeaponShader;
   FUNC_0( VAR_4 );
  }
 }
}
