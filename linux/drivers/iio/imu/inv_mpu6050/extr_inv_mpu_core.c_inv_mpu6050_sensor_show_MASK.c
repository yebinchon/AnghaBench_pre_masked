
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct inv_mpu6050_state {int map; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct inv_mpu6050_state *VAR_3, int VAR_4,
       int VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8;
 __be16 VAR_9;

 VAR_7 = (VAR_5 - VAR_1) * 2;
 VAR_8 = FUNC_1(VAR_3->map, VAR_4 + VAR_7, (u8 *)&VAR_9, 2);
 if (VAR_8)
  return -VAR_0;
 *VAR_6 = (short)FUNC_0(&VAR_9);

 return VAR_2;
}
