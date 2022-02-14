
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ stereoFrame_t ;
struct TYPE_6__ {int refdef; TYPE_2__* snap; } ;
struct TYPE_4__ {scalar_t__* persistant; int pm_flags; } ;
struct TYPE_5__ {TYPE_1__ ps; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_5 (int *) ;

void FUNC_6( stereoFrame_t VAR_5 ) {

 if ( !VAR_4.snap ) {
  FUNC_2();
  return;
 }


 if ( VAR_4.snap->ps.persistant[VAR_0] == VAR_3 &&
  ( VAR_4.snap->ps.pm_flags & VAR_1 ) ) {
  FUNC_3();
  return;
 }


 FUNC_4();

 if(VAR_5 != VAR_2)
  FUNC_1();


 FUNC_5( &VAR_4.refdef );


  FUNC_0(VAR_5);
}
