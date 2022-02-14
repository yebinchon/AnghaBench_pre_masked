
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ stereoFrame_t ;
struct TYPE_22__ {scalar_t__ integer; } ;
struct TYPE_21__ {scalar_t__ integer; } ;
struct TYPE_20__ {scalar_t__ integer; } ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {int integer; } ;
struct TYPE_16__ {scalar_t__ orderTime; scalar_t__ gametype; scalar_t__ orderPending; } ;
struct TYPE_14__ {scalar_t__ pm_type; scalar_t__* persistant; scalar_t__* stats; } ;
struct TYPE_15__ {TYPE_1__ ps; } ;
struct TYPE_13__ {scalar_t__ time; int scoreBoardShowing; TYPE_2__* snap; int showScores; scalar_t__ levelShot; } ;
struct TYPE_12__ {scalar_t__ integer; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 scalar_t__ VAR_0 ;
 int FUNC_26 () ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_11__ VAR_6 ;
 TYPE_10__ VAR_7 ;
 TYPE_9__ VAR_8 ;
 TYPE_8__ VAR_9 ;
 TYPE_7__ VAR_10 ;
 TYPE_6__ VAR_11 ;
 TYPE_5__ VAR_12 ;
 TYPE_4__ VAR_13 ;
 TYPE_3__ VAR_14 ;

__attribute__((used)) static void FUNC_27(stereoFrame_t VAR_15)
{






 if ( VAR_6.levelShot ) {
  return;
 }

 if ( VAR_7.integer == 0 || VAR_9.integer != 0) {
  if (VAR_15 == VAR_4) {
   if (VAR_8.integer != 0) FUNC_3();
   if (VAR_9.integer != 0) FUNC_18();
   if (VAR_11.integer !=0) FUNC_15();
   if (VAR_10.integer !=0) FUNC_14();
  }
  return;
 }

 if ( VAR_6.snap->ps.pm_type == VAR_2 ) {
  FUNC_7();
  return;
 }






 if ( VAR_6.snap->ps.persistant[VAR_1] == VAR_5 ) {
  FUNC_16();

  if(VAR_15 == VAR_4)
   FUNC_3();

  FUNC_4();
 } else {

  if ( !VAR_6.showScores && VAR_6.snap->ps.stats[VAR_3] > 0 ) {







   FUNC_17();


   FUNC_1();




   if(VAR_15 == VAR_4)
    FUNC_3();
   FUNC_4();
   FUNC_25();


   FUNC_6();



   FUNC_12();
  }
 }

 if ( VAR_14.gametype >= VAR_0 ) {

  FUNC_19();

 }

 FUNC_15();
 FUNC_14();
 FUNC_23();
 FUNC_20();

 FUNC_8();






 FUNC_22(VAR_15);



 FUNC_10();
 FUNC_9();


 if ( !FUNC_5() ) {
  FUNC_24();
 }


 VAR_6.scoreBoardShowing = FUNC_13();
 if ( !VAR_6.scoreBoardShowing) {
  FUNC_2();
 }
}
