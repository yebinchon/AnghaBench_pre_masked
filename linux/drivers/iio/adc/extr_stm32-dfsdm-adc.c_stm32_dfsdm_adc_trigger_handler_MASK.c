
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm_adc {size_t bufi; size_t buf_sz; int * rx_buf; } ;
struct iio_poll_func {int timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {int scan_bytes; int trig; } ;
typedef int s32 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct stm32_dfsdm_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct stm32_dfsdm_adc*) ;
 int FUNC_4 (struct stm32_dfsdm_adc*,int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct stm32_dfsdm_adc *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = FUNC_3(VAR_5);

 while (VAR_6 >= VAR_4->scan_bytes) {
  s32 *VAR_7 = (s32 *)&VAR_5->rx_buf[VAR_5->bufi];

  FUNC_4(VAR_5, VAR_7);

  FUNC_1(VAR_4, VAR_7,
         VAR_3->timestamp);
  VAR_6 -= VAR_4->scan_bytes;
  VAR_5->bufi += VAR_4->scan_bytes;
  if (VAR_5->bufi >= VAR_5->buf_sz)
   VAR_5->bufi = 0;
 }

 FUNC_2(VAR_4->trig);

 return VAR_0;
}
