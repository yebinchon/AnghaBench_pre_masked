
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (scalar_t__*,char*,int) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3( char *VAR_3 ) {
 const char *VAR_4;
 VAR_4 = FUNC_1( "fs_game" );
 if (FUNC_2() && VAR_4[0] != 0) {
  FUNC_0( &VAR_1[16], VAR_3, 16 );
  VAR_1[32] = 0;

  VAR_2 |= VAR_0;
 } else {
  FUNC_0( VAR_1, VAR_3, 16 );

  VAR_2 |= VAR_0;
 }
}
