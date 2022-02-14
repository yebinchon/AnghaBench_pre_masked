
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct ad7476_state {int data; int msg; int spi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct ad7476_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct ad7476_state *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_5->spi, &VAR_5->msg);
 if (VAR_6 < 0)
  goto done;

 FUNC_2(VAR_4, VAR_5->data,
  FUNC_0(VAR_4));
done:
 FUNC_3(VAR_4->trig);

 return VAR_0;
}
