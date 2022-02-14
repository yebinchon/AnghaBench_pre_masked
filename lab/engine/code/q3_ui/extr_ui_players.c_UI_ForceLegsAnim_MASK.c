
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int legsAnim; int legsAnimationTimer; } ;
typedef TYPE_1__ playerInfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0( playerInfo_t *VAR_3, int VAR_4 ) {
 VAR_3->legsAnim = ( ( VAR_3->legsAnim & VAR_0 ) ^ VAR_0 ) | VAR_4;

 if ( VAR_4 == VAR_1 ) {
  VAR_3->legsAnimationTimer = VAR_2;
 }
}
