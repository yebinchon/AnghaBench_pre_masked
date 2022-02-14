
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int svFlags; } ;
struct TYPE_7__ {int trBase; } ;
struct TYPE_8__ {int eventParm; TYPE_1__ pos; } ;
struct TYPE_10__ {TYPE_3__ r; TYPE_2__ s; } ;
typedef TYPE_4__ gentity_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_2( gentity_t *VAR_5, int VAR_6 ) {
 gentity_t *VAR_7;

 if (VAR_5 == ((void*)0)) {
  FUNC_0 ("Warning:  NULL passed to Team_CaptureFlagSound\n");
  return;
 }

 VAR_7 = FUNC_1( VAR_5->s.pos.trBase, VAR_0 );
 if( VAR_6 == VAR_4 ) {
  VAR_7->s.eventParm = VAR_1;
 }
 else {
  VAR_7->s.eventParm = VAR_2;
 }
 VAR_7->r.svFlags |= VAR_3;
}
