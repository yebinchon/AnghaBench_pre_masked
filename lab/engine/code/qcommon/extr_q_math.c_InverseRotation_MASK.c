
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;
typedef scalar_t__ qboolean ;


 int FUNC_0 (int const,int ,int ,int ) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ VAR_0 ;

void FUNC_5(const vec3_t VAR_1, vec3_t VAR_2, qboolean VAR_3) {
 vec3_t VAR_4[3];
 vec3_t VAR_5;
 FUNC_0(VAR_1, VAR_4[0], VAR_4[1], VAR_4[2]);
 if ( VAR_3 == VAR_0 ) FUNC_3(VAR_4[1]);

 FUNC_1(VAR_4, 0, 1);
 FUNC_1(VAR_4, 0, 2);
 FUNC_1(VAR_4, 1, 2);


 FUNC_2(VAR_2, VAR_5);
 FUNC_4(VAR_5, VAR_4, VAR_2);
}
