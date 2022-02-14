
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_adc {unsigned int regs; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct vf610_adc* FUNC_0 (struct iio_dev*) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
   unsigned VAR_3, unsigned VAR_4,
   unsigned *VAR_5)
{
 struct vf610_adc *VAR_6 = FUNC_0(VAR_2);

 if ((VAR_5 == ((void*)0)) ||
  ((VAR_3 % 4) || (VAR_3 > VAR_1)))
  return -VAR_0;

 *VAR_5 = FUNC_1(VAR_6->regs + VAR_3);

 return 0;
}
