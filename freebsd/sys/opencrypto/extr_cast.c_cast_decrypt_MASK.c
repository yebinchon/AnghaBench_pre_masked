
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
struct TYPE_3__ {int rounds; } ;
typedef TYPE_1__ cast_key ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(cast_key* VAR_0, u_int8_t* VAR_1, u_int8_t* VAR_2)
{
u_int32_t VAR_3, VAR_4, VAR_5;


 VAR_5 = ((u_int32_t)VAR_1[0] << 24) | ((u_int32_t)VAR_1[1] << 16) |
  ((u_int32_t)VAR_1[2] << 8) | (u_int32_t)VAR_1[3];
 VAR_4 = ((u_int32_t)VAR_1[4] << 24) | ((u_int32_t)VAR_1[5] << 16) |
  ((u_int32_t)VAR_1[6] << 8) | (u_int32_t)VAR_1[7];


 if (VAR_0->rounds > 12) {
  FUNC_0(VAR_5, VAR_4, 15);
  FUNC_2(VAR_4, VAR_5, 14);
  FUNC_1(VAR_5, VAR_4, 13);
  FUNC_0(VAR_4, VAR_5, 12);
 }
 FUNC_2(VAR_5, VAR_4, 11);
 FUNC_1(VAR_4, VAR_5, 10);
 FUNC_0(VAR_5, VAR_4, 9);
 FUNC_2(VAR_4, VAR_5, 8);
 FUNC_1(VAR_5, VAR_4, 7);
 FUNC_0(VAR_4, VAR_5, 6);
 FUNC_2(VAR_5, VAR_4, 5);
 FUNC_1(VAR_4, VAR_5, 4);
 FUNC_0(VAR_5, VAR_4, 3);
 FUNC_2(VAR_4, VAR_5, 2);
 FUNC_1(VAR_5, VAR_4, 1);
 FUNC_0(VAR_4, VAR_5, 0);

 VAR_2[0] = FUNC_3(VAR_4);
 VAR_2[1] = FUNC_4(VAR_4);
 VAR_2[2] = FUNC_5(VAR_4);
 VAR_2[3] = FUNC_6(VAR_4);
 VAR_2[4] = FUNC_3(VAR_5);
 VAR_2[5] = FUNC_4(VAR_5);
 VAR_2[6] = FUNC_5(VAR_5);
 VAR_2[7] = FUNC_6(VAR_5);

 VAR_3 = VAR_4 = VAR_5 = 0;
}
