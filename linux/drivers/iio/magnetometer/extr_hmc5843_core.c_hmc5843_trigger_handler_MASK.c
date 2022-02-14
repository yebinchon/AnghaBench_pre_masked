
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct hmc5843_data {int buffer; int lock; int regmap; } ;
typedef int irqreturn_t ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hmc5843_data*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct hmc5843_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct hmc5843_data *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 FUNC_5(&VAR_6->lock);
 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 < 0) {
  FUNC_6(&VAR_6->lock);
  goto done;
 }

 VAR_7 = FUNC_7(VAR_6->regmap, VAR_0,
          VAR_6->buffer, 3 * sizeof(__be16));

 FUNC_6(&VAR_6->lock);
 if (VAR_7 < 0)
  goto done;

 FUNC_3(VAR_5, VAR_6->buffer,
        FUNC_1(VAR_5));

done:
 FUNC_4(VAR_5->trig);

 return VAR_1;
}
