
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* upmove; void* rightmove; void* forwardmove; int buttons; } ;
typedef TYPE_1__ usercmd_t ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {int active; } ;
struct TYPE_7__ {scalar_t__ active; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;

void FUNC_2( usercmd_t *VAR_12 ) {
 int VAR_13;
 int VAR_14, VAR_15, VAR_16;






 if ( VAR_9.active ^ VAR_1->integer ) {
  VAR_13 = 127;
  VAR_12->buttons &= ~VAR_0;
 } else {
  VAR_12->buttons |= VAR_0;
  VAR_13 = 64;
 }

 VAR_14 = 0;
 VAR_15 = 0;
 VAR_16 = 0;
 if ( VAR_10.active ) {
  VAR_15 += VAR_13 * FUNC_0 (&VAR_8);
  VAR_15 -= VAR_13 * FUNC_0 (&VAR_5);
 }

 VAR_15 += VAR_13 * FUNC_0 (&VAR_7);
 VAR_15 -= VAR_13 * FUNC_0 (&VAR_6);


 VAR_16 += VAR_13 * FUNC_0 (&VAR_11);
 VAR_16 -= VAR_13 * FUNC_0 (&VAR_3);

 VAR_14 += VAR_13 * FUNC_0 (&VAR_4);
 VAR_14 -= VAR_13 * FUNC_0 (&VAR_2);

 VAR_12->forwardmove = FUNC_1( VAR_14 );
 VAR_12->rightmove = FUNC_1( VAR_15 );
 VAR_12->upmove = FUNC_1( VAR_16 );
}
