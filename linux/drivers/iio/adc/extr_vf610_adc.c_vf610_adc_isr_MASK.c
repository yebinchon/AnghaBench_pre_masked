
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_adc {int completion; int * buffer; int value; scalar_t__ regs; } ;
struct iio_dev {int trig; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct vf610_adc* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct vf610_adc*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct iio_dev *VAR_5 = VAR_4;
 struct vf610_adc *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_6(VAR_6->regs + VAR_2);
 if (VAR_7 & VAR_1) {
  VAR_6->value = FUNC_7(VAR_6);
  if (FUNC_1(VAR_5)) {
   VAR_6->buffer[0] = VAR_6->value;
   FUNC_4(VAR_5,
     VAR_6->buffer,
     FUNC_2(VAR_5));
   FUNC_5(VAR_5->trig);
  } else
   FUNC_0(&VAR_6->completion);
 }

 return VAR_0;
}
