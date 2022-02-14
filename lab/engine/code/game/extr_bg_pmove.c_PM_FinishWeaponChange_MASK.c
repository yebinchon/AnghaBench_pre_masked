
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int weapon; } ;
struct TYPE_6__ {TYPE_2__* ps; TYPE_1__ cmd; } ;
struct TYPE_5__ {int* stats; int weapon; int weaponTime; int weaponstate; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static void FUNC_1( void ) {
 int VAR_6;

 VAR_6 = VAR_5->cmd.weapon;
 if ( VAR_6 < VAR_3 || VAR_6 >= VAR_4 ) {
  VAR_6 = VAR_3;
 }

 if ( !( VAR_5->ps->stats[VAR_0] & ( 1 << VAR_6 ) ) ) {
  VAR_6 = VAR_3;
 }

 VAR_5->ps->weapon = VAR_6;
 VAR_5->ps->weaponstate = VAR_2;
 VAR_5->ps->weaponTime += 250;
 FUNC_0( VAR_1 );
}
