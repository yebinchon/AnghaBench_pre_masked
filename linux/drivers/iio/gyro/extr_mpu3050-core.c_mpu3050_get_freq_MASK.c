
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu3050 {scalar_t__ lpf; int divisor; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct mpu3050 *VAR_1)
{
 unsigned int VAR_2;

 if (VAR_1->lpf == VAR_0)
  VAR_2 = 8000;
 else
  VAR_2 = 1000;
 VAR_2 /= (VAR_1->divisor + 1);

 return VAR_2;
}
