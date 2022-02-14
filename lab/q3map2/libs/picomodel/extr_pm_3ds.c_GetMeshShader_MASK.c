
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int temp ;
typedef int shaderName ;
typedef int picoShader_t ;
typedef int mapName ;
struct TYPE_5__ {char* basename; scalar_t__ surface; int model; } ;
typedef TYPE_1__ T3dsLoaderPers ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int * FUNC_2 (int ,char*,int) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*,char*,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_15( T3dsLoaderPers *VAR_1 ){
 char VAR_2[255] = { 0 };
 picoShader_t *VAR_3;
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6;







 if ( !FUNC_0( VAR_1,VAR_2,sizeof( VAR_2 ) ) ) {
  return 0;
 }


 FUNC_5( VAR_2 );
 VAR_3 = FUNC_2( VAR_1->model, VAR_2, 1 );


 if ( ( VAR_3 != ((void*)0) ) && VAR_1->surface ) {
  char VAR_7[1024 + 1];
  char *VAR_8;
  FUNC_9( VAR_7,0,sizeof( VAR_7 ) );


  VAR_8 = FUNC_3( VAR_3 );


  if ( VAR_8 != ((void*)0) ) {
   char VAR_9[128];
   const char *VAR_10;


   FUNC_12( VAR_7,VAR_8 );


   VAR_10 = FUNC_6( VAR_7 );
   FUNC_14( VAR_9, VAR_10, sizeof( VAR_9 ) );





   if ( FUNC_13( VAR_9 ) < 1 ) {
    FUNC_12( VAR_9,VAR_1->basename );
   }


   FUNC_8( VAR_9 );
   FUNC_11( VAR_7,"models/mapobjects/%s/%s",VAR_1->basename,VAR_9 );





   FUNC_4( VAR_1->surface, VAR_3 );

   VAR_5 = 1;
  }
 }

 if ( !VAR_5 ) {
  FUNC_7( VAR_0,"3DS mesh is missing shader name" );
 }






 VAR_4 = FUNC_1( VAR_1 );





 for ( VAR_6 = 0; VAR_6 < VAR_4; VAR_6++ )
 {
  FUNC_1( VAR_1 );
 }

 return 1;
}
