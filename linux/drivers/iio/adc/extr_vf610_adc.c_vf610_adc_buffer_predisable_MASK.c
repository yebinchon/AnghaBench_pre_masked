
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_adc {scalar_t__ regs; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct vf610_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5)
{
 struct vf610_adc *VAR_6 = FUNC_0(VAR_5);
 unsigned int VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_6->regs + VAR_3);
 VAR_8 &= ~VAR_0;
 FUNC_3(VAR_8, VAR_6->regs + VAR_3);

 VAR_7 |= VAR_2;
 VAR_7 &= ~VAR_1;

 FUNC_3(VAR_7, VAR_6->regs + VAR_4);

 return FUNC_1(VAR_5);
}
