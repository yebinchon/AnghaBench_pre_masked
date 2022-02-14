
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct itg3200 {int i2c; } ;
struct iio_poll_func {int timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int s64 ;
typedef int irqreturn_t ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct itg3200* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct itg3200 *VAR_6 = FUNC_0(VAR_5);
 __be16 VAR_7[VAR_1 + sizeof(s64)/sizeof(u16)];

 int VAR_8 = FUNC_3(VAR_6->i2c, VAR_7);
 if (VAR_8 < 0)
  goto error_ret;

 FUNC_1(VAR_5, VAR_7, VAR_4->timestamp);

 FUNC_2(VAR_5->trig);

error_ret:
 return VAR_0;
}
