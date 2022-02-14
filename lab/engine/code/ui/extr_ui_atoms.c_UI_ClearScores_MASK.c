
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int postGameInfo_t ;
typedef int gameList ;
typedef int fileHandle_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (char*,char*,char*,int) ;
 int FUNC_6 (int*,int,int ) ;
 int FUNC_7 (char*,char*) ;

void FUNC_8(void) {
 char VAR_2[4096];
 char *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 fileHandle_t VAR_8;
 postGameInfo_t VAR_9;

 VAR_6 = FUNC_5( "games", "game", VAR_2, sizeof(VAR_2) );

 VAR_7 = sizeof(postGameInfo_t);
 FUNC_1(&VAR_9, 0, VAR_7);

 if (VAR_6 > 0) {
  VAR_3 = VAR_2;
  for ( VAR_4 = 0; VAR_4 < VAR_6; VAR_4++ ) {
   VAR_5 = FUNC_2(VAR_3);
   if (FUNC_4(FUNC_7("games/%s",VAR_3), &VAR_8, VAR_0) >= 0) {
    FUNC_6(&VAR_7, sizeof(int), VAR_8);
    FUNC_6(&VAR_9, VAR_7, VAR_8);
    FUNC_3(VAR_8);
   }
   VAR_3 += VAR_5 + 1;
  }
 }

 FUNC_0(&VAR_9, VAR_1);

}
