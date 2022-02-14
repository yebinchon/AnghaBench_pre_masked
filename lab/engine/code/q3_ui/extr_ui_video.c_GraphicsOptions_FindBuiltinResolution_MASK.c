
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1( int VAR_3 )
{
 int VAR_4;

 if( !VAR_2 )
  return VAR_3;

 if( VAR_3 < 0 )
  return -1;

 for( VAR_4 = 0; VAR_0[ VAR_4 ]; VAR_4++ )
 {
  if( !FUNC_0( VAR_0[ VAR_4 ], VAR_1[ VAR_3 ] ) )
   return VAR_4;
 }

 return -1;
}
