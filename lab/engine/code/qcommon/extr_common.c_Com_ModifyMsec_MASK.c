
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
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {scalar_t__ integer; } ;
struct TYPE_6__ {int value; } ;


 int FUNC_0 (char*,int) ;
 TYPE_5__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

int FUNC_1( int VAR_5 ) {
 int VAR_6;




 if ( VAR_2->integer ) {
  VAR_5 = VAR_2->integer;
 } else if ( VAR_4->value ) {
  VAR_5 *= VAR_4->value;
 } else if (VAR_0->integer) {
  VAR_5 *= VAR_4->value;
 }


 if ( VAR_5 < 1 && VAR_4->value) {
  VAR_5 = 1;
 }

 if ( VAR_1->integer ) {



  if (VAR_3->integer && VAR_5 > 500)
   FUNC_0( "Hitch warning: %i msec frame time\n", VAR_5 );

  VAR_6 = 5000;
 } else
 if ( !VAR_3->integer ) {


  VAR_6 = 5000;
 } else {



  VAR_6 = 200;
 }

 if ( VAR_5 > VAR_6 ) {
  VAR_5 = VAR_6;
 }

 return VAR_5;
}
