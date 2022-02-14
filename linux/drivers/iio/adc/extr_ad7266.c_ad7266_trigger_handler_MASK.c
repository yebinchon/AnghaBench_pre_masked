
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_poll_func {int timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct TYPE_2__ {int sample; } ;
struct ad7266_state {TYPE_1__ data; int spi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct ad7266_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct ad7266_state *VAR_5 = FUNC_0(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_3(VAR_5->spi, VAR_5->data.sample, 4);
 if (VAR_6 == 0) {
  FUNC_1(VAR_4, &VAR_5->data,
       VAR_3->timestamp);
 }

 FUNC_2(VAR_4->trig);

 return VAR_0;
}
