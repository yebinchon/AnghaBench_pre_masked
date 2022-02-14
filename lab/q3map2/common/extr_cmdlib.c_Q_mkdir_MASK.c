
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4( const char *VAR_2 ){





 if ( FUNC_2( VAR_2, 0777 ) != -1 ) {
  return;
 }

 if ( VAR_1 != VAR_0 ) {
  FUNC_0( "mkdir %s: %s",VAR_2, FUNC_3( VAR_1 ) );
 }
}
