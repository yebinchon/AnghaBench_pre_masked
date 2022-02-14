
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {scalar_t__ irq; int timestamp; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct zpa2326_private* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,struct zpa2326_private*) ;
 scalar_t__ FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 scalar_t__ FUNC_7 (struct iio_dev*) ;
 scalar_t__ FUNC_8 (struct iio_dev*,struct zpa2326_private*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = ((struct iio_poll_func *)
          VAR_2)->indio_dev;
 struct zpa2326_private *VAR_4 = FUNC_1(VAR_3);
 bool VAR_5;






 VAR_5 = FUNC_3(VAR_3);

 if (!VAR_5) {

  if (FUNC_7(VAR_3))
   goto out;


  if (VAR_4->irq <= 0) {

   if (FUNC_5(VAR_3))
    goto out;


   VAR_4->timestamp = FUNC_0(VAR_3);
  } else {

   if (FUNC_8(VAR_3, VAR_4))
    goto out;
  }
 }


 FUNC_4(VAR_3, VAR_4);

out:
 if (!VAR_5)

  FUNC_6(VAR_3);


 FUNC_2(VAR_3->trig);

 return VAR_0;
}
