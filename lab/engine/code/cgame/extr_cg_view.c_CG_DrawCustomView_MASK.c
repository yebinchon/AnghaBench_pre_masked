
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int time; } ;
struct TYPE_7__ {TYPE_2__ refdef; int renderingThirdPerson; int time; TYPE_1__* snap; } ;
struct TYPE_5__ {int snapFlags; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7() {
 FUNC_5();
 if ( !VAR_1.snap || ( VAR_1.snap->snapFlags & VAR_0 ) ) {
  return;
 }
 VAR_1.refdef.time = VAR_1.time;
 VAR_1.renderingThirdPerson = FUNC_4( &VAR_1.refdef );
 FUNC_2();
 FUNC_1();
 FUNC_3();
 FUNC_0();


 FUNC_6( &VAR_1.refdef );
}
