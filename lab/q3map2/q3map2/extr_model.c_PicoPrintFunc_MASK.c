
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*,char const*) ;

void FUNC_3( int VAR_3, const char *VAR_4 ){
 if ( VAR_4 == ((void*)0) ) {
  return;
 }
 switch ( VAR_3 )
 {
 case 130:
  FUNC_2( "%s\n", VAR_4 );
  break;

 case 129:
  FUNC_1( VAR_1, "%s\n", VAR_4 );
  break;

 case 128:
  FUNC_1( VAR_2, "WARNING: %s\n", VAR_4 );
  break;

 case 132:
  FUNC_1( VAR_0, "ERROR: %s\n", VAR_4 );
  break;

 case 131:
  FUNC_0( "ERROR: %s\n", VAR_4 );
  break;
 }
}
