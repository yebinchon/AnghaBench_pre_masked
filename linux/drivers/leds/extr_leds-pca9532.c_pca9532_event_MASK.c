
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca9532_data {int* pwm; int work; } ;
struct input_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct pca9532_data* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_3, unsigned int VAR_4,
 unsigned int VAR_5, int VAR_6)
{
 struct pca9532_data *VAR_7 = FUNC_0(VAR_3);

 if (!(VAR_4 == VAR_0 && (VAR_5 == VAR_1 || VAR_5 == VAR_2)))
  return -1;


 if (VAR_6 > 1 && VAR_6 < 32767)
  VAR_7->pwm[1] = 127;
 else
  VAR_7->pwm[1] = 0;

 FUNC_1(&VAR_7->work);

 return 0;
}
