
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;
typedef int qboolean ;
typedef int byte ;


 int* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_3( const vec3_t VAR_2, const vec3_t VAR_3)
{
 int VAR_4;
 int VAR_5;
 byte *VAR_6;

 VAR_4 = FUNC_2 (VAR_2);
 VAR_5 = FUNC_1 (VAR_4);
 VAR_6 = FUNC_0 (VAR_5);

 VAR_4 = FUNC_2 (VAR_3);
 VAR_5 = FUNC_1 (VAR_4);

 if ( VAR_6 && (!(VAR_6[VAR_5>>3] & (1<<(VAR_5&7)) ) ) )
  return VAR_0;

 return VAR_1;
}
