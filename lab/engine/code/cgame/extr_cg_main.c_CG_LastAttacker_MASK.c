
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* snap; int attackerTime; } ;
struct TYPE_4__ {int* persistant; } ;
struct TYPE_5__ {TYPE_1__ ps; } ;


 size_t VAR_0 ;
 TYPE_3__ VAR_1 ;

int FUNC_0( void ) {
 if ( !VAR_1.attackerTime ) {
  return -1;
 }
 return VAR_1.snap->ps.persistant[VAR_0];
}
