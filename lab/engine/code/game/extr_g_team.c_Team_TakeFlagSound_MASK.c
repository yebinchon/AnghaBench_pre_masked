
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int svFlags; } ;
struct TYPE_9__ {int trBase; } ;
struct TYPE_10__ {int eventParm; TYPE_1__ pos; } ;
struct TYPE_12__ {TYPE_3__ r; TYPE_2__ s; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_14__ {int time; } ;
struct TYPE_13__ {int redTakenTime; int redStatus; int blueTakenTime; int blueStatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int VAR_4 ;


 TYPE_6__ VAR_5 ;
 TYPE_5__ VAR_6 ;

void FUNC_2( gentity_t *VAR_7, int VAR_8 ) {
 gentity_t *VAR_9;

 if (VAR_7 == ((void*)0)) {
  FUNC_0 ("Warning:  NULL passed to Team_TakeFlagSound\n");
  return;
 }



 switch(VAR_8) {
  case 128:
   if( VAR_6.blueStatus != VAR_1 ) {
    if (VAR_6.blueTakenTime > VAR_5.time - 10000)
     return;
   }
   VAR_6.blueTakenTime = VAR_5.time;
   break;

  case 129:
   if( VAR_6.redStatus != VAR_1 ) {
    if (VAR_6.redTakenTime > VAR_5.time - 10000)
     return;
   }
   VAR_6.redTakenTime = VAR_5.time;
   break;
 }

 VAR_9 = FUNC_1( VAR_7->s.pos.trBase, VAR_0 );
 if( VAR_8 == 129 ) {
  VAR_9->s.eventParm = VAR_3;
 }
 else {
  VAR_9->s.eventParm = VAR_2;
 }
 VAR_9->r.svFlags |= VAR_4;
}
