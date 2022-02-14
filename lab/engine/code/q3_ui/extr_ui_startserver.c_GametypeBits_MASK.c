
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char**,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2( char *VAR_6 ) {
 int VAR_7;
 char *VAR_8;
 char *VAR_9;

 VAR_7 = 0;
 VAR_8 = VAR_6;
 while( 1 ) {
  VAR_9 = FUNC_0( &VAR_8, VAR_5 );
  if ( !VAR_9[0] ) {
   break;
  }

  if( FUNC_1( VAR_9, "ffa" ) == 0 ) {
   VAR_7 |= 1 << VAR_1;
   continue;
  }

  if( FUNC_1( VAR_9, "tourney" ) == 0 ) {
   VAR_7 |= 1 << VAR_4;
   continue;
  }

  if( FUNC_1( VAR_9, "single" ) == 0 ) {
   VAR_7 |= 1 << VAR_2;
   continue;
  }

  if( FUNC_1( VAR_9, "team" ) == 0 ) {
   VAR_7 |= 1 << VAR_3;
   continue;
  }

  if( FUNC_1( VAR_9, "ctf" ) == 0 ) {
   VAR_7 |= 1 << VAR_0;
   continue;
  }
 }

 return VAR_7;
}
