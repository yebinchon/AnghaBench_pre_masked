
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int integer; } ;
struct TYPE_8__ {int rdflags; unsigned long long num_dlights; } ;
struct TYPE_6__ {int * visBounds; } ;
struct TYPE_9__ {int currentEntityNum; int shiftedEntityNum; TYPE_3__ refdef; TYPE_2__* world; TYPE_1__ viewParms; } ;
struct TYPE_7__ {int nodes; } ;


 int FUNC_0 (int ,int ) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,unsigned long long) ;
 TYPE_5__* VAR_4 ;
 TYPE_4__ VAR_5 ;

void FUNC_3 (void) {
 if ( !VAR_4->integer ) {
  return;
 }

 if ( VAR_5.refdef.rdflags & VAR_2 ) {
  return;
 }

 VAR_5.currentEntityNum = VAR_3;
 VAR_5.shiftedEntityNum = VAR_5.currentEntityNum << VAR_1;


 FUNC_1 ();


 FUNC_0( VAR_5.viewParms.visBounds[0], VAR_5.viewParms.visBounds[1] );


 if ( VAR_5.refdef.num_dlights > VAR_0 ) {
  VAR_5.refdef.num_dlights = VAR_0 ;
 }
 FUNC_2( VAR_5.world->nodes, 15, ( 1ULL << VAR_5.refdef.num_dlights ) - 1 );
}
