
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {size_t mapCount; TYPE_1__* mapList; } ;
struct TYPE_3__ {int typeBits; int cinematic; int mapLoadName; int levelShot; int * timeToBeat; int opponentName; int teamMembers; int mapName; } ;


 char* FUNC_0 (char**,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,int *) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char**,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static qboolean FUNC_7(char **VAR_4) {
 char *VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2);

 if (VAR_5[0] != '{') {
  return VAR_1;
 }

 VAR_3.mapCount = 0;

 while ( 1 ) {
  VAR_5 = FUNC_0(VAR_4, VAR_2);

  if (FUNC_3(VAR_5, "}") == 0) {
   return VAR_2;
  }

  if (!VAR_5[0]) {
   return VAR_1;
  }

  if (VAR_5[0] == '{') {
   if (!FUNC_4(VAR_4, &VAR_3.mapList[VAR_3.mapCount].mapName) || !FUNC_4(VAR_4, &VAR_3.mapList[VAR_3.mapCount].mapLoadName)
    ||!FUNC_2(VAR_4, &VAR_3.mapList[VAR_3.mapCount].teamMembers) ) {
    return VAR_1;
   }

   if (!FUNC_4(VAR_4, &VAR_3.mapList[VAR_3.mapCount].opponentName)) {
    return VAR_1;
   }

   VAR_3.mapList[VAR_3.mapCount].typeBits = 0;

   while (1) {
    VAR_5 = FUNC_0(VAR_4, VAR_2);
    if (VAR_5[0] >= '0' && VAR_5[0] <= '9') {
     VAR_3.mapList[VAR_3.mapCount].typeBits |= (1 << (VAR_5[0] - 0x030));
     if (!FUNC_2(VAR_4, &VAR_3.mapList[VAR_3.mapCount].timeToBeat[VAR_5[0] - 0x30])) {
      return VAR_1;
     }
    } else {
     break;
    }
   }






    VAR_3.mapList[VAR_3.mapCount].cinematic = -1;
   VAR_3.mapList[VAR_3.mapCount].levelShot = FUNC_5(FUNC_6("levelshots/%s_small", VAR_3.mapList[VAR_3.mapCount].mapLoadName));

   if (VAR_3.mapCount < VAR_0) {
    VAR_3.mapCount++;
   } else {
    FUNC_1("Too many maps, last one replaced!\n");
   }
  }
 }
 return VAR_1;
}
