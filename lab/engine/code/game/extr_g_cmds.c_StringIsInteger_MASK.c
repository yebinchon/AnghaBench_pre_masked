
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int FUNC_0 (char const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;

qboolean FUNC_2( const char * VAR_2 ) {
 int VAR_3;
 int VAR_4;
 qboolean VAR_5;

 VAR_4 = FUNC_1( VAR_2 );
 VAR_5 = VAR_0;

 for ( VAR_3=0 ; VAR_3 < VAR_4 ; VAR_3++ ) {
  if ( !FUNC_0( VAR_2[VAR_3] ) ) {
   return VAR_0;
  }

  VAR_5 = VAR_1;
 }

 return VAR_5;
}
