
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_5__ {int numSpawnVars; int spawning; scalar_t__ spawnVarChars; scalar_t__** spawnVars; scalar_t__ numSpawnVarChars; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,scalar_t__,scalar_t__*,int**,int*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_4( void ) {
 gentity_t* VAR_5;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9[VAR_1][2];
 VAR_8 = FUNC_2();
 if (VAR_8 == 0) {
  return;
 }

 VAR_2.spawning = VAR_4;
 VAR_2.numSpawnVars = 0;

 for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
  VAR_2.numSpawnVars = 0;
  VAR_2.numSpawnVarChars = 0;

  FUNC_3(
    VAR_7,
    VAR_2.spawnVarChars,
    &VAR_2.numSpawnVarChars,
    VAR_9,
    &VAR_2.numSpawnVars);


  for (VAR_6 = 0; VAR_6 < VAR_2.numSpawnVars; ++VAR_6) {
   VAR_2.spawnVars[VAR_6][0] = VAR_2.spawnVarChars + VAR_9[VAR_6][0];
   VAR_2.spawnVars[VAR_6][1] = VAR_2.spawnVarChars + VAR_9[VAR_6][1];
  }
  VAR_5 = FUNC_0();
  if (VAR_5) VAR_5->flags |= VAR_0;
 }
 FUNC_1();
 VAR_2.spawning = VAR_3;
}
