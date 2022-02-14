
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dirlist ;
struct TYPE_3__ {char const** itemnames; int numitems; } ;
struct TYPE_4__ {char** descriptionList; char** fs_gameList; TYPE_1__ list; int fs_game; int fs_gamePtr; int description; int descriptionPtr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5( void ) {
 int VAR_2;
 char VAR_3[2048];
 char *VAR_4;
  char *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_1.list.itemnames = (const char **)VAR_1.descriptionList;
 VAR_1.descriptionPtr = VAR_1.description;
 VAR_1.fs_gamePtr = VAR_1.fs_game;


 VAR_1.list.numitems = 1;
 VAR_1.list.itemnames[0] = VAR_1.descriptionList[0] = "Quake III Arena";
 VAR_1.fs_gameList[0] = "";

 VAR_2 = FUNC_2( "$modlist", "", VAR_3, sizeof(VAR_3) );
 VAR_4 = VAR_3;
 for( VAR_6 = 0; VAR_6 < VAR_2; VAR_6++ ) {
  VAR_7 = FUNC_1( VAR_4 ) + 1;
    VAR_5 = VAR_4 + VAR_7;
   FUNC_0( VAR_4, VAR_5);
    VAR_4 += VAR_7 + FUNC_1(VAR_5) + 1;
 }

 FUNC_3( FUNC_4( "%i mods parsed\n", VAR_1.list.numitems ) );
 if (VAR_1.list.numitems > VAR_0) {
  VAR_1.list.numitems = VAR_0;
 }
}
