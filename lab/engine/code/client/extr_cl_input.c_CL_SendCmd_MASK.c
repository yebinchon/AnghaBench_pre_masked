
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_7__ {scalar_t__ integer; } ;
struct TYPE_6__ {scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 TYPE_5__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

void FUNC_4( void ) {

 if ( VAR_3.state < VAR_0 ) {
  return;
 }


 if ( VAR_4->integer && VAR_5->integer && VAR_1->integer ) {
  return;
 }


 FUNC_0();


 if ( !FUNC_1() ) {
  if ( VAR_2->integer ) {
   FUNC_3( ". " );
  }
  return;
 }

 FUNC_2();
}
