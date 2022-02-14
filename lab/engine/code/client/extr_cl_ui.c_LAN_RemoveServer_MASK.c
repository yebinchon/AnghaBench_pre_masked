
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int servers ;
struct TYPE_5__ {int adr; } ;
typedef TYPE_1__ serverInfo_t ;
typedef int netadr_t ;
struct TYPE_6__ {int numlocalservers; int numglobalservers; int numfavoriteservers; TYPE_1__* favoriteServers; TYPE_1__* globalServers; TYPE_1__* localServers; } ;






 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,int *,int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_3(int VAR_2, const char *VAR_3) {
 int *VAR_4, VAR_5;
 serverInfo_t *VAR_6 = ((void*)0);
 VAR_4 = ((void*)0);
 switch (VAR_2) {
  case 129 :
   VAR_4 = &VAR_1.numlocalservers;
   VAR_6 = &VAR_1.localServers[0];
   break;
  case 128:
  case 130 :
   VAR_4 = &VAR_1.numglobalservers;
   VAR_6 = &VAR_1.globalServers[0];
   break;
  case 131 :
   VAR_4 = &VAR_1.numfavoriteservers;
   VAR_6 = &VAR_1.favoriteServers[0];
   break;
 }
 if (VAR_6) {
  netadr_t VAR_7;
  FUNC_2( VAR_3, &VAR_7, VAR_0 );
  for (VAR_5 = 0; VAR_5 < *VAR_4; VAR_5++) {
   if (FUNC_1( VAR_7, VAR_6[VAR_5].adr)) {
    int VAR_8 = VAR_5;
    while (VAR_8 < *VAR_4 - 1) {
     FUNC_0(&VAR_6[VAR_8], &VAR_6[VAR_8+1], sizeof(VAR_6[VAR_8]));
     VAR_8++;
    }
    (*VAR_4)--;
    break;
   }
  }
 }
}
