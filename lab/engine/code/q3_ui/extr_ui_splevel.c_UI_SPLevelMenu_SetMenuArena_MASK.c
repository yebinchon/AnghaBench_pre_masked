
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int map ;
struct TYPE_6__ {char** levelNames; int* levelScores; TYPE_2__* item_maps; int * levelPicNames; int * levelScoresSkill; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ generic; scalar_t__ shader; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,char*) ;
 char* FUNC_1 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int*,int *) ;
 scalar_t__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7( int VAR_7, int VAR_8, const char *VAR_9 ) {
 char VAR_10[VAR_1];

 FUNC_2( VAR_10, FUNC_1( VAR_9, "map" ), sizeof(VAR_10) );

 FUNC_2( VAR_5.levelNames[VAR_7], VAR_10, sizeof(VAR_5.levelNames[VAR_7]) );
 FUNC_3( VAR_5.levelNames[VAR_7] );

 FUNC_4( VAR_8, &VAR_5.levelScores[VAR_7], &VAR_5.levelScoresSkill[VAR_7] );
 if( VAR_5.levelScores[VAR_7] > 8 ) {
  VAR_5.levelScores[VAR_7] = 8;
 }

 FUNC_0( VAR_5.levelPicNames[VAR_7], sizeof(VAR_5.levelPicNames[VAR_7]), "levelshots/%s.tga", VAR_10 );
 if( !FUNC_6( VAR_5.levelPicNames[VAR_7] ) ) {
  FUNC_5( VAR_5.levelPicNames[VAR_7], VAR_0 );
 }
 VAR_5.item_maps[VAR_7].shader = 0;
 if ( VAR_6 > VAR_4 ) {
  VAR_5.item_maps[VAR_7].generic.flags |= VAR_2;
 }
 else {
  VAR_5.item_maps[VAR_7].generic.flags &= ~VAR_2;
 }

 VAR_5.item_maps[VAR_7].generic.flags &= ~VAR_3;
}
