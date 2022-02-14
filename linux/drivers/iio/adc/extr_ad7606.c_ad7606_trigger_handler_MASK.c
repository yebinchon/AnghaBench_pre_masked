
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct ad7606_state {int lock; int gpio_convst; int data; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct ad7606_state*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ad7606_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct ad7606_state *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 FUNC_6(&VAR_5->lock);

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == 0)
  FUNC_4(VAR_4, VAR_5->data,
         FUNC_2(VAR_4));

 FUNC_5(VAR_4->trig);

 FUNC_1(VAR_5->gpio_convst, 1);

 FUNC_7(&VAR_5->lock);

 return VAR_0;
}
