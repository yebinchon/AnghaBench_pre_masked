
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* visible; } ;
typedef TYPE_1__ serverInfo_t ;
typedef void* qboolean ;
struct TYPE_4__ {TYPE_1__* favoriteServers; TYPE_1__* globalServers; TYPE_1__* localServers; } ;






 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_0(int VAR_3, int VAR_4, qboolean VAR_5 ) {
 if (VAR_4 == -1) {
  int VAR_6 = VAR_1;
  serverInfo_t *VAR_7 = ((void*)0);
  switch (VAR_3) {
   case 129 :
    VAR_7 = &VAR_2.localServers[0];
    break;
   case 128:
   case 130 :
    VAR_7 = &VAR_2.globalServers[0];
    VAR_6 = VAR_0;
    break;
   case 131 :
    VAR_7 = &VAR_2.favoriteServers[0];
    break;
  }
  if (VAR_7) {
   for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
    VAR_7[VAR_4].visible = VAR_5;
   }
  }

 } else {
  switch (VAR_3) {
   case 129 :
    if (VAR_4 >= 0 && VAR_4 < VAR_1) {
     VAR_2.localServers[VAR_4].visible = VAR_5;
    }
    break;
   case 128:
   case 130 :
    if (VAR_4 >= 0 && VAR_4 < VAR_0) {
     VAR_2.globalServers[VAR_4].visible = VAR_5;
    }
    break;
   case 131 :
    if (VAR_4 >= 0 && VAR_4 < VAR_1) {
     VAR_2.favoriteServers[VAR_4].visible = VAR_5;
    }
    break;
  }
 }
}
