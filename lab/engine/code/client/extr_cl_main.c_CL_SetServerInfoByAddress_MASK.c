
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int netadr_t ;
struct TYPE_4__ {int adr; } ;
struct TYPE_3__ {TYPE_2__* favoriteServers; TYPE_2__* globalServers; TYPE_2__* localServers; } ;


 int FUNC_0 (TYPE_2__*,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_2(netadr_t VAR_3, const char *VAR_4, int VAR_5) {
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (FUNC_1(VAR_3, VAR_2.localServers[VAR_6].adr)) {
   FUNC_0(&VAR_2.localServers[VAR_6], VAR_4, VAR_5);
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (FUNC_1(VAR_3, VAR_2.globalServers[VAR_6].adr)) {
   FUNC_0(&VAR_2.globalServers[VAR_6], VAR_4, VAR_5);
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (FUNC_1(VAR_3, VAR_2.favoriteServers[VAR_6].adr)) {
   FUNC_0(&VAR_2.favoriteServers[VAR_6], VAR_4, VAR_5);
  }
 }

}
