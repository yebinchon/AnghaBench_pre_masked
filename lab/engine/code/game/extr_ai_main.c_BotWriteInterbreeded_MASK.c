
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_kills; int num_deaths; int gs; scalar_t__ inuse; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int ,char*) ;

void FUNC_1(char *VAR_2) {
 float VAR_3, VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = 0;
 VAR_6 = -1;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if ( VAR_1[VAR_5] && VAR_1[VAR_5]->inuse ) {
   VAR_3 = VAR_1[VAR_5]->num_kills * 2 - VAR_1[VAR_5]->num_deaths;
  }
  else {
   VAR_3 = -1;
  }
  if (VAR_3 > VAR_4) {
   VAR_4 = VAR_3;
   VAR_6 = VAR_5;
  }
 }
 if (VAR_6 >= 0) {

  FUNC_0(VAR_1[VAR_6]->gs, VAR_2);
 }
}
