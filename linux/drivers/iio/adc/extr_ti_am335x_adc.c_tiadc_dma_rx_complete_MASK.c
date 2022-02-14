
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tiadc_dma {int current_period; int period_size; int * buf; } ;
struct tiadc_device {struct tiadc_dma dma; } ;
struct iio_dev {scalar_t__ scan_bytes; } ;


 struct tiadc_device* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct iio_dev *VAR_1 = VAR_0;
 struct tiadc_device *VAR_2 = FUNC_0(VAR_1);
 struct tiadc_dma *VAR_3 = &VAR_2->dma;
 u8 *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->buf + VAR_3->current_period * VAR_3->period_size;
 VAR_3->current_period = 1 - VAR_3->current_period;

 for (VAR_5 = 0; VAR_5 < VAR_3->period_size; VAR_5 += VAR_1->scan_bytes) {
  FUNC_1(VAR_1, VAR_4);
  VAR_4 += VAR_1->scan_bytes;
 }
}
