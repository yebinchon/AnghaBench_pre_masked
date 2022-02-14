
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,float) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3( void ) {
 VAR_1 = 512 * 1024;
 VAR_2 = FUNC_2( VAR_1, 1 );
 if ( !VAR_2 ) {
  FUNC_0( VAR_0, "Small zone data failed to allocate %1.1f megs", (float)VAR_1 / (1024*1024) );
 }
 FUNC_1( VAR_2, VAR_1 );
}
