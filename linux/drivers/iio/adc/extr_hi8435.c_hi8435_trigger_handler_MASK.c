
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct hi8435_priv {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*,int ) ;
 int FUNC_1 (struct hi8435_priv*,int ,int *) ;
 struct hi8435_priv* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct hi8435_priv *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_0, &VAR_7);
 if (VAR_8 < 0)
  goto err_read;

 FUNC_0(VAR_5, VAR_7);

err_read:
 FUNC_3(VAR_5->trig);

 return VAR_1;
}
