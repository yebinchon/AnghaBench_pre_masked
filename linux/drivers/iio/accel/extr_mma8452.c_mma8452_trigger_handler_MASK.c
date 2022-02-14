
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mma8452_data {int dummy; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int irqreturn_t ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct mma8452_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mma8452_data*,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct mma8452_data *VAR_5 = FUNC_1(VAR_4);
 u8 VAR_6[16];
 int VAR_7;

 VAR_7 = FUNC_4(VAR_5, (__be16 *)VAR_6);
 if (VAR_7 < 0)
  goto done;

 FUNC_2(VAR_4, VAR_6,
        FUNC_0(VAR_4));

done:
 FUNC_3(VAR_4->trig);

 return VAR_0;
}
