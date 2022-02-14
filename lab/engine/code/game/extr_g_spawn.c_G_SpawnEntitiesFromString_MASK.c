
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numSpawnVars; int** spawnVars; int spawnVarChars; int spawning; scalar_t__ numSpawnVarChars; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int,scalar_t__*,int**,int*) ;
 int FUNC_6 (int,scalar_t__*,int**,int*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_7( void ) {

 int VAR_4, VAR_5, VAR_6;
 int VAR_7[VAR_0][2];
 VAR_1.spawning = VAR_3;
 VAR_1.numSpawnVars = 0;




 if ( !FUNC_1() ) {
  FUNC_0( "SpawnEntities: no entities" );
 }
 FUNC_3();


 while( FUNC_1() ) {

  for (VAR_4 = 0; VAR_4 < VAR_1.numSpawnVars; ++VAR_4) {
   VAR_7[VAR_4][0] = VAR_1.spawnVars[VAR_4][0] - VAR_1.spawnVarChars;
   VAR_7[VAR_4][1] = VAR_1.spawnVars[VAR_4][1] - VAR_1.spawnVarChars;
  }


  if (!FUNC_6(
    VAR_1.spawnVarChars,
    &VAR_1.numSpawnVarChars,
    VAR_7,
    &VAR_1.numSpawnVars)) {
   continue;
  }

  for (VAR_4 = 0; VAR_4 < VAR_1.numSpawnVars; ++VAR_4) {
   VAR_1.spawnVars[VAR_4][0] = VAR_1.spawnVarChars + VAR_7[VAR_4][0];
   VAR_1.spawnVars[VAR_4][1] = VAR_1.spawnVarChars + VAR_7[VAR_4][1];
  }
  FUNC_2();
 }
 VAR_6 = FUNC_4();
 for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {
  VAR_1.numSpawnVars = 0;
  VAR_1.numSpawnVarChars = 0;

  FUNC_5(
    VAR_5,
    VAR_1.spawnVarChars,
    &VAR_1.numSpawnVarChars,
    VAR_7,
    &VAR_1.numSpawnVars);


  for (VAR_4 = 0; VAR_4 < VAR_1.numSpawnVars; ++VAR_4) {
   VAR_1.spawnVars[VAR_4][0] = VAR_1.spawnVarChars + VAR_7[VAR_4][0];
   VAR_1.spawnVars[VAR_4][1] = VAR_1.spawnVarChars + VAR_7[VAR_4][1];
  }
  FUNC_2();
 }

 VAR_1.spawning = VAR_2;
}
