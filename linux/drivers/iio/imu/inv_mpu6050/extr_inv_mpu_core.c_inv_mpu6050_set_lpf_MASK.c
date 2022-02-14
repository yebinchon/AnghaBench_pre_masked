
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lpf; } ;
struct inv_mpu6050_state {TYPE_1__ chip_config; } ;


 int FUNC_0 (int const*) ;






 int FUNC_1 (struct inv_mpu6050_state*,int) ;

__attribute__((used)) static int FUNC_2(struct inv_mpu6050_state *VAR_0, int VAR_1)
{
 static const int VAR_2[] = {188, 98, 42, 20, 10, 5};
 static const int VAR_3[] = {
  132, 128,
  130, 131,
  133, 129
 };
 int VAR_4, VAR_5, VAR_6;
 u8 VAR_7;

 VAR_5 = (VAR_1 >> 1);
 VAR_4 = 0;
 while ((VAR_5 < VAR_2[VAR_4]) && (VAR_4 < FUNC_0(VAR_3) - 1))
  VAR_4++;
 VAR_7 = VAR_3[VAR_4];
 VAR_6 = FUNC_1(VAR_0, VAR_7);
 if (VAR_6)
  return VAR_6;
 VAR_0->chip_config.lpf = VAR_7;

 return 0;
}
