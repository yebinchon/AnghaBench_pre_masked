
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ps; } ;
struct TYPE_3__ {scalar_t__ pm_type; scalar_t__ legsTimer; int legsAnim; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_0( int VAR_3 ) {
 if ( VAR_2->ps->pm_type >= VAR_1 ) {
  return;
 }
 if ( VAR_2->ps->legsTimer > 0 ) {
  return;
 }
 VAR_2->ps->legsAnim = ( ( VAR_2->ps->legsAnim & VAR_0 ) ^ VAR_0 )
  | VAR_3;
}
