
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int integer; } ;
struct TYPE_4__ {int num_entities; } ;
struct TYPE_5__ {TYPE_1__ refdef; } ;


 int FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_1 (void) {
 int VAR_2;

 if ( !VAR_0->integer ) {
  return;
 }

 for ( VAR_2 = 0; VAR_2 < VAR_1.refdef.num_entities; VAR_2++)
  FUNC_0(VAR_2);
}
