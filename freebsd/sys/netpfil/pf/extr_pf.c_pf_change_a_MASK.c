
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int ao ;


 int FUNC_0 (void*,int*,int) ;
 int FUNC_1 (int ,int,int,int ) ;

void
FUNC_2(void *VAR_0, u_int16_t *VAR_1, u_int32_t VAR_2, u_int8_t VAR_3)
{
 u_int32_t VAR_4;

 FUNC_0(&VAR_4, VAR_0, sizeof(VAR_4));
 FUNC_0(VAR_0, &VAR_2, sizeof(u_int32_t));
 *VAR_1 = FUNC_1(FUNC_1(*VAR_1, VAR_4 / 65536, VAR_2 / 65536, VAR_3),
     VAR_4 % 65536, VAR_2 % 65536, VAR_3);
}
