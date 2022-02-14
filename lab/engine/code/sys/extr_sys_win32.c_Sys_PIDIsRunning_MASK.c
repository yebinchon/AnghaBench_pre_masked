
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int processes ;
typedef int DWORD ;


 int FUNC_0 (int*,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_1( int VAR_2 )
{
 DWORD VAR_3[ 1024 ];
 DWORD VAR_4, VAR_5;
 int VAR_6;

 if( !FUNC_0( VAR_3, sizeof( VAR_3 ), &VAR_4 ) )
  return VAR_0;

 VAR_5 = VAR_4 / sizeof( DWORD );


 for( VAR_6 = 0; VAR_6 < VAR_5; VAR_6++ )
 {
  if( VAR_3[ VAR_6 ] == VAR_2 )
   return VAR_1;
 }

 return VAR_0;
}
