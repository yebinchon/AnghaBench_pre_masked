
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mpu3050 {int lpf; int divisor; } ;
typedef enum mpu3050_lpf { ____Placeholder_mpu3050_lpf } mpu3050_lpf ;


 int VAR_0 ;
 int FUNC_0 (struct mpu3050*) ;

__attribute__((used)) static int FUNC_1(struct mpu3050 *VAR_1)
{
 int VAR_2;
 u8 VAR_3;
 enum mpu3050_lpf VAR_4;

 VAR_4 = VAR_1->lpf;
 VAR_3 = VAR_1->divisor;

 VAR_1->lpf = VAR_0;
 VAR_1->divisor = 0;
 VAR_2 = FUNC_0(VAR_1);

 VAR_1->lpf = VAR_4;
 VAR_1->divisor = VAR_3;

 return VAR_2;
}
