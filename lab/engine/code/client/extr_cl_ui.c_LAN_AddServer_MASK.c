
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int visible; int hostName; int adr; } ;
typedef TYPE_1__ serverInfo_t ;
typedef int netadr_t ;
struct TYPE_4__ {int numlocalservers; int numglobalservers; int numfavoriteservers; TYPE_1__* favoriteServers; TYPE_1__* globalServers; TYPE_1__* localServers; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int *,int ) ;
 int FUNC_2 (int ,char const*,int) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(int VAR_5, const char *VAR_6, const char *VAR_7) {
 int VAR_8, *VAR_9, VAR_10;
 netadr_t VAR_11;
 serverInfo_t *VAR_12 = ((void*)0);
 VAR_8 = VAR_1;
 VAR_9 = ((void*)0);

 switch (VAR_5) {
  case 129 :
   VAR_9 = &VAR_3.numlocalservers;
   VAR_12 = &VAR_3.localServers[0];
   break;
  case 128:
  case 130 :
   VAR_8 = VAR_0;
   VAR_9 = &VAR_3.numglobalservers;
   VAR_12 = &VAR_3.globalServers[0];
   break;
  case 131 :
   VAR_9 = &VAR_3.numfavoriteservers;
   VAR_12 = &VAR_3.favoriteServers[0];
   break;
 }
 if (VAR_12 && *VAR_9 < VAR_8) {
  FUNC_1( VAR_7, &VAR_11, VAR_2 );
  for ( VAR_10 = 0; VAR_10 < *VAR_9; VAR_10++ ) {
   if (FUNC_0(VAR_12[VAR_10].adr, VAR_11)) {
    break;
   }
  }
  if (VAR_10 >= *VAR_9) {
   VAR_12[*VAR_9].adr = VAR_11;
   FUNC_2(VAR_12[*VAR_9].hostName, VAR_6, sizeof(VAR_12[*VAR_9].hostName));
   VAR_12[*VAR_9].visible = VAR_4;
   (*VAR_9)++;
   return 1;
  }
  return 0;
 }
 return -1;
}
