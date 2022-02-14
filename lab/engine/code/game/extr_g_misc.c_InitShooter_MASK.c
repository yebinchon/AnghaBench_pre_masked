
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int weapon; int angles; } ;
struct TYPE_7__ {double random; scalar_t__ nextthink; int think; scalar_t__ target; int movedir; TYPE_1__ s; int use; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_8__ {scalar_t__ time; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 double FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5( gentity_t *VAR_4, int VAR_5 ) {
 VAR_4->use = VAR_2;
 VAR_4->s.weapon = VAR_5;

 FUNC_2( FUNC_0( VAR_5 ) );

 FUNC_1( VAR_4->s.angles, VAR_4->movedir );

 if ( !VAR_4->random ) {
  VAR_4->random = 1.0;
 }
 VAR_4->random = FUNC_3( VAR_1 * VAR_4->random / 180 );

 if ( VAR_4->target ) {
  VAR_4->think = VAR_0;
  VAR_4->nextthink = VAR_3.time + 500;
 }
 FUNC_4( VAR_4 );
}
