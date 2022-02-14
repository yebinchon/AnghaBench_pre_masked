
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int entity_t ;


 char* FUNC_0 (int *,char*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,char const*) ;

entity_t *FUNC_2( const char *VAR_2 ){
 int VAR_3;
 const char *VAR_4;



 for ( VAR_3 = 0; VAR_3 < VAR_1; VAR_3++ )
 {
  VAR_4 = FUNC_0( &VAR_0[ VAR_3 ], "targetname" );
  if ( !FUNC_1( VAR_4, VAR_2 ) ) {
   return &VAR_0[ VAR_3 ];
  }
 }


 return ((void*)0);
}
