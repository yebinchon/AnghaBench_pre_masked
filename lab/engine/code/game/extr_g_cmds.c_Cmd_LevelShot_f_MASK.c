
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_8__ {int localClient; } ;
struct TYPE_9__ {TYPE_1__ pers; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_2 (TYPE_3__*,char*) ;

void FUNC_3(gentity_t *VAR_3)
{
 if(!VAR_3->client->pers.localClient)
 {
  FUNC_2(VAR_3-VAR_1,
   "print \"The levelshot command must be executed by a local client\n\"");
  return;
 }

 if(!FUNC_1(VAR_3))
  return;


 if(VAR_2.integer == VAR_0)
 {
  FUNC_2(VAR_3-VAR_1,
   "print \"Must not be in singleplayer mode for levelshot\n\"" );
  return;
 }

 FUNC_0();
 FUNC_2(VAR_3-VAR_1, "clientLevelShot");
}
