
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* string; } ;
typedef TYPE_1__ vmCvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,char*,char*,int) ;
 int FUNC_6 (char*,char*,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void FUNC_9( void ) {
 int VAR_4;
 vmCvar_t VAR_5;
 char VAR_6[128];
 char VAR_7[1024];
 char* VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 VAR_3 = 0;

 FUNC_5( &VAR_5, "g_arenasFile", "", VAR_0|VAR_1 );
 if( *VAR_5.string ) {
  FUNC_0(VAR_5.string);
 }
 else {
  FUNC_0("scripts/arenas.txt");
 }


 VAR_4 = FUNC_6("scripts", ".arena", VAR_7, 1024 );
 VAR_8 = VAR_7;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++, VAR_8 += VAR_11+1) {
  VAR_11 = FUNC_4(VAR_8);
  FUNC_3(VAR_6, "scripts/");
  FUNC_2(VAR_6, VAR_8);
  FUNC_0(VAR_6);
 }
 FUNC_7( FUNC_8( "%i arenas parsed\n", VAR_3 ) );

 for( VAR_10 = 0; VAR_10 < VAR_3; VAR_10++ ) {
  FUNC_1( VAR_2[VAR_10], "num", FUNC_8( "%i", VAR_10 ) );
 }
}
