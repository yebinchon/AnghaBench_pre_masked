
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int name ;
typedef int buf ;
struct TYPE_5__ {int client; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_6__ {int maxclients; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,int) ;
 char* FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,char*,int) ;

char *FUNC_7(bot_state_t *VAR_5) {
 int VAR_6, VAR_7;
 char VAR_8[VAR_2];
 int VAR_9[VAR_1], VAR_10;
 static char VAR_11[32];

 VAR_10 = 0;
 VAR_9[0] = 0;
 for (VAR_6 = 0; VAR_6 < VAR_4.maxclients; VAR_6++) {
  if (VAR_6 == VAR_5->client) continue;

  FUNC_6(VAR_0+VAR_6, VAR_8, sizeof(VAR_8));

  if (!FUNC_5(VAR_8) || !FUNC_5(FUNC_2(VAR_8, "n"))) continue;

  if (FUNC_3(FUNC_2(VAR_8, "t")) == VAR_3) continue;

  if (FUNC_0(VAR_5, VAR_6)) continue;

  VAR_9[VAR_10] = VAR_6;
  VAR_10++;
 }
 VAR_7 = FUNC_4() * VAR_10;
 for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++) {
  VAR_7--;
  if (VAR_7 <= 0) {
   FUNC_1(VAR_9[VAR_6], VAR_11, sizeof(VAR_11));
   return VAR_11;
  }
 }
 FUNC_1(VAR_9[0], VAR_11, sizeof(VAR_11));
 return VAR_11;
}
