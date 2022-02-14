
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static qboolean FUNC_1( char VAR_2, char *VAR_3 )
{
 int VAR_4;

 for( VAR_4 = 0; VAR_4 < FUNC_0( VAR_3 ); VAR_4++ )
 {
  if( VAR_3[ VAR_4 ] == VAR_2 )
   return VAR_1;
 }

 return VAR_0;
}
