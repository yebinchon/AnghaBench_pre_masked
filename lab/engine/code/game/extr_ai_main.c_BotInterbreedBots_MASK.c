
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_kills; int num_deaths; scalar_t__ inuse; int gs; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int,float*,int*,int*,int*) ;

void FUNC_3(void) {
 float VAR_2[VAR_0];
 int VAR_3, VAR_4, VAR_5;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if ( VAR_1[VAR_6] && VAR_1[VAR_6]->inuse ) {
   VAR_2[VAR_6] = VAR_1[VAR_6]->num_kills * 2 - VAR_1[VAR_6]->num_deaths;
  }
  else {
   VAR_2[VAR_6] = -1;
  }
 }

 if (FUNC_2(VAR_0, VAR_2, &VAR_3, &VAR_4, &VAR_5)) {
  FUNC_0(VAR_1[VAR_3]->gs, VAR_1[VAR_4]->gs, VAR_1[VAR_5]->gs);
  FUNC_1(VAR_1[VAR_5]->gs, 1);
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_1[VAR_6] && VAR_1[VAR_6]->inuse) {
   VAR_1[VAR_6]->num_kills = 0;
   VAR_1[VAR_6]->num_deaths = 0;
  }
 }
}
