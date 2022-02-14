
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct adc108s102_state {int * rx_buf; int ring_msg; int spi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct adc108s102_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct adc108s102_state *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_5->spi, &VAR_5->ring_msg);
 if (VAR_6 < 0)
  goto out_notify;


 FUNC_2(VAR_4,
        (u8 *)&VAR_5->rx_buf[1],
        FUNC_0(VAR_4));

out_notify:
 FUNC_3(VAR_4->trig);

 return VAR_0;
}
