
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clientNum; scalar_t__ spawnTime; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_0( int VAR_2 ) {
 int VAR_3;

 for( VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ ) {
  if( VAR_1[VAR_3].clientNum == VAR_2 ) {
   VAR_1[VAR_3].spawnTime = 0;
   return;
  }
 }
}
