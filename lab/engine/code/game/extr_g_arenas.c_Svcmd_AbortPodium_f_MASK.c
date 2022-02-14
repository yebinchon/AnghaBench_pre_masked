
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ integer; } ;
struct TYPE_5__ {int time; } ;
struct TYPE_4__ {int think; int nextthink; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;

void FUNC_0( void ) {
 if( VAR_2.integer != VAR_1 ) {
  return;
 }

 if( VAR_4 ) {
  VAR_4->nextthink = VAR_3.time;
  VAR_4->think = VAR_0;
 }
}
