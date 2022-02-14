
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_8__ {scalar_t__* absmin; scalar_t__* absmax; scalar_t__* mins; scalar_t__* maxs; int contents; } ;
struct TYPE_9__ {char* classname; int count; int moverState; int touch; TYPE_1__ r; struct TYPE_9__* parent; struct TYPE_9__* teamchain; int takedamage; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_10__ {int time; } ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5( gentity_t *VAR_4 ) {
 gentity_t *VAR_5;
 vec3_t VAR_6, VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_4) {
  return;
 }


 for ( VAR_5 = VAR_4 ; VAR_5 ; VAR_5 = VAR_5->teamchain ) {
  VAR_5->takedamage = VAR_3;
 }


 FUNC_3 (VAR_4->r.absmin, VAR_6);
 FUNC_3 (VAR_4->r.absmax, VAR_7);

 for (VAR_5 = VAR_4->teamchain ; VAR_5 ; VAR_5=VAR_5->teamchain) {
  FUNC_0 (VAR_5->r.absmin, VAR_6, VAR_7);
  FUNC_0 (VAR_5->r.absmax, VAR_6, VAR_7);
 }


 VAR_9 = 0;
 for ( VAR_8 = 1 ; VAR_8 < 3 ; VAR_8++ ) {
  if ( VAR_7[VAR_8] - VAR_6[VAR_8] < VAR_7[VAR_9] - VAR_6[VAR_9] ) {
   VAR_9 = VAR_8;
  }
 }
 VAR_7[VAR_9] += 120;
 VAR_6[VAR_9] -= 120;


 VAR_5 = FUNC_1 ();
 VAR_5->classname = "door_trigger";
 FUNC_3 (VAR_6, VAR_5->r.mins);
 FUNC_3 (VAR_7, VAR_5->r.maxs);
 VAR_5->parent = VAR_4;
 VAR_5->r.contents = VAR_0;
 VAR_5->touch = VAR_1;

 VAR_5->count = VAR_9;
 FUNC_4 (VAR_5);

 FUNC_2( VAR_4, VAR_4->moverState, VAR_2.time );
}
