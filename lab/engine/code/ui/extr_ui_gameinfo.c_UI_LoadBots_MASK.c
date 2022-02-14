
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
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char*,char*,int) ;
 int FUNC_5 (char*,char*,char*,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (char*,scalar_t__) ;

void FUNC_8( void ) {
 vmCvar_t VAR_3;
 int VAR_4;
 char VAR_5[128];
 char VAR_6[1024];
 char* VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_2 = 0;

 FUNC_4( &VAR_3, "g_botsFile", "", VAR_0|VAR_1 );
 if( *VAR_3.string ) {
  FUNC_0(VAR_3.string);
 }
 else {
  FUNC_0("scripts/bots.txt");
 }


 VAR_4 = FUNC_5("scripts", ".bot", VAR_6, 1024 );
 VAR_7 = VAR_6;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++, VAR_7 += VAR_9+1) {
  VAR_9 = FUNC_3(VAR_7);
  FUNC_2(VAR_5, "scripts/");
  FUNC_1(VAR_5, VAR_7);
  FUNC_0(VAR_5);
 }
 FUNC_6( FUNC_7( "%i bots parsed\n", VAR_2 ) );
}
