
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static qboolean FUNC_0(const byte *VAR_2, int VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return VAR_1;

 for ( VAR_4 = 0; VAR_4 < VAR_3; VAR_4++ )
 {
  if ( VAR_2[VAR_4*4 + 3] != 255 )
  {
   return VAR_1;
  }
 }

 return VAR_0;
}
