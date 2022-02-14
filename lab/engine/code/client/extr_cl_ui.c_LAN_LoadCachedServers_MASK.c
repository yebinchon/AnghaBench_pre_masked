
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fileHandle_t ;
struct TYPE_2__ {int numglobalservers; int numfavoriteservers; int globalServers; int favoriteServers; scalar_t__ numGlobalServerAddresses; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int,int ) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_3( void ) {
 int VAR_1;
 fileHandle_t VAR_2;
 VAR_0.numglobalservers = VAR_0.numfavoriteservers = 0;
 VAR_0.numGlobalServerAddresses = 0;
 if (FUNC_2("servercache.dat", &VAR_2)) {
  FUNC_1(&VAR_0.numglobalservers, sizeof(int), VAR_2);
  FUNC_1(&VAR_0.numfavoriteservers, sizeof(int), VAR_2);
  FUNC_1(&VAR_1, sizeof(int), VAR_2);
  if (VAR_1 == sizeof(VAR_0.globalServers) + sizeof(VAR_0.favoriteServers)) {
   FUNC_1(&VAR_0.globalServers, sizeof(VAR_0.globalServers), VAR_2);
   FUNC_1(&VAR_0.favoriteServers, sizeof(VAR_0.favoriteServers), VAR_2);
  } else {
   VAR_0.numglobalservers = VAR_0.numfavoriteservers = 0;
   VAR_0.numGlobalServerAddresses = 0;
  }
  FUNC_0(VAR_2);
 }
}
