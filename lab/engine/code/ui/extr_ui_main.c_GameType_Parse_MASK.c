
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_6__ {size_t numJoinGameTypes; size_t numGameTypes; TYPE_2__* gameTypes; TYPE_1__* joinGameTypes; } ;
struct TYPE_5__ {int gtEnum; int gameType; } ;
struct TYPE_4__ {int gtEnum; int gameType; } ;


 char* FUNC_0 (char**,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,int *) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char**,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static qboolean FUNC_5(char **VAR_4, qboolean VAR_5) {
 char *VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2);

 if (VAR_6[0] != '{') {
  return VAR_1;
 }

 if (VAR_5) {
  VAR_3.numJoinGameTypes = 0;
 } else {
  VAR_3.numGameTypes = 0;
 }

 while ( 1 ) {
  VAR_6 = FUNC_0(VAR_4, VAR_2);

  if (FUNC_3(VAR_6, "}") == 0) {
   return VAR_2;
  }

  if (!VAR_6[0]) {
   return VAR_1;
  }

  if (VAR_6[0] == '{') {

   if (VAR_5) {
    if (!FUNC_4(VAR_4, &VAR_3.joinGameTypes[VAR_3.numJoinGameTypes].gameType) || !FUNC_2(VAR_4, &VAR_3.joinGameTypes[VAR_3.numJoinGameTypes].gtEnum)) {
     return VAR_1;
    }
   } else {
    if (!FUNC_4(VAR_4, &VAR_3.gameTypes[VAR_3.numGameTypes].gameType) || !FUNC_2(VAR_4, &VAR_3.gameTypes[VAR_3.numGameTypes].gtEnum)) {
     return VAR_1;
    }
   }

   if (VAR_5) {
    if (VAR_3.numJoinGameTypes < VAR_0) {
     VAR_3.numJoinGameTypes++;
    } else {
     FUNC_1("Too many net game types, last one replace!\n");
    }
   } else {
    if (VAR_3.numGameTypes < VAR_0) {
     VAR_3.numGameTypes++;
    } else {
     FUNC_1("Too many game types, last one replace!\n");
    }
   }

   VAR_6 = FUNC_0(VAR_4, VAR_2);
   if (VAR_6[0] != '}') {
    return VAR_1;
   }
  }
 }
 return VAR_1;
}
