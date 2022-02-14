
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,int) ;

void FUNC_2( char *VAR_1, const char *VAR_2, int VAR_3 ) {
  if ( !VAR_1 ) {
    FUNC_0( VAR_0, "Q_strncpyz: NULL dest" );
  }
 if ( !VAR_2 ) {
  FUNC_0( VAR_0, "Q_strncpyz: NULL src" );
 }
 if ( VAR_3 < 1 ) {
  FUNC_0(VAR_0,"Q_strncpyz: destsize < 1" );
 }

 FUNC_1( VAR_1, VAR_2, VAR_3-1 );
  VAR_1[VAR_3-1] = 0;
}
