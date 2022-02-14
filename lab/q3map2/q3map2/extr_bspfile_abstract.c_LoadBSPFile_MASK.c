
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* load ) (char const*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char const*) ;

void FUNC_3( const char *VAR_1 ){

 if ( VAR_0 == ((void*)0) || VAR_0->load == ((void*)0) ) {
  FUNC_0( "LoadBSPFile: unsupported BSP file format" );
 }


 VAR_0->load( VAR_1 );
 FUNC_1();
}
