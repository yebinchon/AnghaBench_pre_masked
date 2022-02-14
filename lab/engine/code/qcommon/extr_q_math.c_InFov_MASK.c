
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vec3_t ;
typedef int qboolean ;


 int FUNC_0 (int ) ;
 int FUNC_1 (float const*,int *,int ) ;
 int FUNC_2 (float const*,float const*,int *) ;
 float FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;

qboolean FUNC_5(const float VAR_2[3], const float VAR_3[3], const float VAR_4[3], float VAR_5) {
 vec3_t VAR_6, VAR_7;
 float VAR_8 = VAR_5 * 0.5;
 FUNC_2( VAR_3, VAR_2, VAR_6 );
 FUNC_1( VAR_4, VAR_6, VAR_0 );
 FUNC_4( VAR_6, VAR_7 );
 return FUNC_3(FUNC_0(VAR_7[0])) < VAR_8 &&
     FUNC_3(FUNC_0(VAR_7[1])) < VAR_8 ? VAR_1 : VAR_0;
}
