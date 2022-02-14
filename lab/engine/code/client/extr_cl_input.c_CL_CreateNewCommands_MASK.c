
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cmdNumber; int * cmds; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_1( void ) {
 int VAR_7;


 if ( VAR_3.state < VAR_0 ) {
  return;
 }

 VAR_5 = VAR_4 - VAR_6;



 if ( VAR_5 < 1 ) {
  VAR_5 = 1;
 }



 if ( VAR_5 > 200 ) {
  VAR_5 = 200;
 }
 VAR_6 = VAR_4;



 VAR_2.cmdNumber++;
 VAR_7 = VAR_2.cmdNumber & VAR_1;
 VAR_2.cmds[VAR_7] = FUNC_0 ();
}
