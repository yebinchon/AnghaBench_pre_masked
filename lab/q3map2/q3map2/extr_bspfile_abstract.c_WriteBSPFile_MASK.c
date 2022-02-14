
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {int (* write ) (char*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char*,char const*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__*) ;

void FUNC_7( const char *VAR_1 ){
 char VAR_2[ 1024 ];
 time_t VAR_3;



 if ( VAR_0 == ((void*)0) || VAR_0->write == ((void*)0) ) {
  FUNC_0( "WriteBSPFile: unsupported BSP file format" );
 }


 FUNC_6( &VAR_3 );
 FUNC_4( VAR_2, "%s.%08X", VAR_1, (int) VAR_3 );


 FUNC_1();
 VAR_0->write( VAR_2 );
 FUNC_1();


 FUNC_2( VAR_1 );
 FUNC_3( VAR_2, VAR_1 );
}
