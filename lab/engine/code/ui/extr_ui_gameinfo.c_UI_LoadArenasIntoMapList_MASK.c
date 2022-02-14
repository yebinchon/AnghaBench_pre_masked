
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t mapCount; TYPE_1__* mapList; } ;
struct TYPE_3__ {int cinematic; int levelShot; int typeBits; void* mapLoadName; void* imageName; void* mapName; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ,char*) ;
 size_t VAR_6 ;
 void* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 TYPE_2__ VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 char* FUNC_3 (char*,void*) ;

void FUNC_4( void ) {
 int VAR_10;
 char *VAR_11;

 VAR_7.mapCount = 0;

 for( VAR_10 = 0; VAR_10 < VAR_9; VAR_10++ ) {


  VAR_7.mapList[VAR_7.mapCount].cinematic = -1;
  VAR_7.mapList[VAR_7.mapCount].mapLoadName = FUNC_1(FUNC_0(VAR_8[VAR_10], "map"));
  VAR_7.mapList[VAR_7.mapCount].mapName = FUNC_1(FUNC_0(VAR_8[VAR_10], "longname"));
  VAR_7.mapList[VAR_7.mapCount].levelShot = -1;
  VAR_7.mapList[VAR_7.mapCount].imageName = FUNC_1(FUNC_3("levelshots/%s", VAR_7.mapList[VAR_7.mapCount].mapLoadName));
  VAR_7.mapList[VAR_7.mapCount].typeBits = 0;

  VAR_11 = FUNC_0( VAR_8[VAR_10], "type" );

  if( *VAR_11 ) {
   if( FUNC_2( VAR_11, "ffa" ) ) {
    VAR_7.mapList[VAR_7.mapCount].typeBits |= (1 << VAR_2);
   }
   if( FUNC_2( VAR_11, "tourney" ) ) {
    VAR_7.mapList[VAR_7.mapCount].typeBits |= (1 << VAR_5);
   }
   if( FUNC_2( VAR_11, "ctf" ) ) {
    VAR_7.mapList[VAR_7.mapCount].typeBits |= (1 << VAR_1);
   }
   if( FUNC_2( VAR_11, "oneflag" ) ) {
    VAR_7.mapList[VAR_7.mapCount].typeBits |= (1 << VAR_0);
   }
   if( FUNC_2( VAR_11, "overload" ) ) {
    VAR_7.mapList[VAR_7.mapCount].typeBits |= (1 << VAR_4);
   }
   if( FUNC_2( VAR_11, "harvester" ) ) {
    VAR_7.mapList[VAR_7.mapCount].typeBits |= (1 << VAR_3);
   }
  } else {
   VAR_7.mapList[VAR_7.mapCount].typeBits |= (1 << VAR_2);
  }

  VAR_7.mapCount++;
  if (VAR_7.mapCount >= VAR_6) {
   break;
  }
 }
}
