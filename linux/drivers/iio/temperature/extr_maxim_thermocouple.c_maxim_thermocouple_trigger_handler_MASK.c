
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct maxim_thermocouple_data {int buffer; TYPE_1__* chip; int spi; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int read_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct maxim_thermocouple_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct maxim_thermocouple_data *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_5->spi, VAR_5->buffer, VAR_5->chip->read_size);
 if (!VAR_6) {
  FUNC_2(VAR_4, VAR_5->buffer,
         FUNC_0(VAR_4));
 }

 FUNC_3(VAR_4->trig);

 return VAR_0;
}
