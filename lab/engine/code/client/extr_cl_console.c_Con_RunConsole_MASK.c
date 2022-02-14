
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {double realFrametime; } ;
struct TYPE_5__ {double finalFrac; double displayFrac; } ;
struct TYPE_4__ {double value; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_1 (void) {

 if ( FUNC_0( ) & VAR_0 )
  VAR_2.finalFrac = 0.5;
 else
  VAR_2.finalFrac = 0;


 if (VAR_2.finalFrac < VAR_2.displayFrac)
 {
  VAR_2.displayFrac -= VAR_3->value*VAR_1.realFrametime*0.001;
  if (VAR_2.finalFrac > VAR_2.displayFrac)
   VAR_2.displayFrac = VAR_2.finalFrac;

 }
 else if (VAR_2.finalFrac > VAR_2.displayFrac)
 {
  VAR_2.displayFrac += VAR_3->value*VAR_1.realFrametime*0.001;
  if (VAR_2.finalFrac < VAR_2.displayFrac)
   VAR_2.displayFrac = VAR_2.finalFrac;
 }

}
