
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct adc081c {int i2c; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct adc081c* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct adc081c *VAR_6 = FUNC_2(VAR_5);
 u16 VAR_7[8];
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6->i2c, VAR_1);
 if (VAR_8 < 0)
  goto out;
 VAR_7[0] = VAR_8;
 FUNC_3(VAR_5, VAR_7,
        FUNC_1(VAR_5));
out:
 FUNC_4(VAR_5->trig);
 return VAR_0;
}
