
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int model ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5( const char *VAR_2 ) {
 char VAR_3[VAR_1];
 char *VAR_4;

 FUNC_1( VAR_3, VAR_2, sizeof(VAR_3) );
 VAR_4 = FUNC_2( VAR_3, '/' );
 if ( VAR_4 ) {
  *VAR_4++ = '\0';
 }
 else {
  VAR_4 = VAR_3;
 }

 if( FUNC_0( VAR_4, "default" ) == 0 ) {
  VAR_4 = VAR_3;
 }

 FUNC_3( VAR_0, FUNC_4( "play sound/player/announce/%s.wav\n", VAR_4 ) );
}
