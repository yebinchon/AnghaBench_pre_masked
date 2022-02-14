
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct inv_mpu6050_state {int map; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct inv_mpu6050_state *VAR_2, int VAR_3,
    int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 __be16 VAR_8 = FUNC_0(VAR_5);

 VAR_6 = (VAR_4 - VAR_1) * 2;
 VAR_7 = FUNC_1(VAR_2->map, VAR_3 + VAR_6, (u8 *)&VAR_8, 2);
 if (VAR_7)
  return -VAR_0;

 return 0;
}
