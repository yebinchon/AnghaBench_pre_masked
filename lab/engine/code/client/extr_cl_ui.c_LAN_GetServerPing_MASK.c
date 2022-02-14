
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ping; } ;
typedef TYPE_1__ serverInfo_t ;
struct TYPE_4__ {TYPE_1__* favoriteServers; TYPE_1__* globalServers; TYPE_1__* localServers; } ;






 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_0( int VAR_3, int VAR_4 ) {
 serverInfo_t *VAR_5 = ((void*)0);
 switch (VAR_3) {
  case 129 :
   if (VAR_4 >= 0 && VAR_4 < VAR_1) {
    VAR_5 = &VAR_2.localServers[VAR_4];
   }
   break;
  case 128:
  case 130 :
   if (VAR_4 >= 0 && VAR_4 < VAR_0) {
    VAR_5 = &VAR_2.globalServers[VAR_4];
   }
   break;
  case 131 :
   if (VAR_4 >= 0 && VAR_4 < VAR_1) {
    VAR_5 = &VAR_2.favoriteServers[VAR_4];
   }
   break;
 }
 if (VAR_5) {
  return VAR_5->ping;
 }
 return -1;
}
