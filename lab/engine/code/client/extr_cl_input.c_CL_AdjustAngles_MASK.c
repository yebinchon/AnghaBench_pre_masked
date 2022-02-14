
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {float* viewangles; } ;
struct TYPE_13__ {double value; } ;
struct TYPE_12__ {float value; } ;
struct TYPE_11__ {float value; } ;
struct TYPE_10__ {double frametime; } ;
struct TYPE_9__ {scalar_t__ active; } ;
struct TYPE_8__ {int active; } ;


 float FUNC_0 (int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_7__ VAR_2 ;
 TYPE_6__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 TYPE_1__ VAR_12 ;

void FUNC_1( void ) {
 float VAR_13;

 if ( VAR_11.active ) {
  VAR_13 = 0.001 * VAR_6.frametime * VAR_3->value;
 } else {
  VAR_13 = 0.001 * VAR_6.frametime;
 }

 if ( !VAR_12.active ) {
  VAR_2.viewangles[VAR_1] -= VAR_13*VAR_5->value*FUNC_0 (&VAR_10);
  VAR_2.viewangles[VAR_1] += VAR_13*VAR_5->value*FUNC_0 (&VAR_7);
 }

 VAR_2.viewangles[VAR_0] -= VAR_13*VAR_4->value * FUNC_0 (&VAR_9);
 VAR_2.viewangles[VAR_0] += VAR_13*VAR_4->value * FUNC_0 (&VAR_8);
}
