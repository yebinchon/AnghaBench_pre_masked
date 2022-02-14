
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; } ;
struct adis16480 {int adis; TYPE_1__* chip_info; } ;
struct TYPE_2__ {unsigned int* filter_freqs; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int** VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned int,unsigned int*) ;
 int FUNC_3 (int *,unsigned int,unsigned int) ;
 struct adis16480* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, unsigned int VAR_4)
{
 struct adis16480 *VAR_5 = FUNC_4(VAR_2);
 unsigned int VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;
 uint16_t VAR_13;
 int VAR_14;

 VAR_8 = VAR_0[VAR_3->scan_index][0];
 VAR_7 = VAR_0[VAR_3->scan_index][1];
 VAR_6 = FUNC_1(VAR_7 + 2);

 VAR_14 = FUNC_2(&VAR_5->adis, VAR_8, &VAR_13);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_4 == 0) {
  VAR_13 &= ~VAR_6;
 } else {
  VAR_12 = 0;
  VAR_10 = VAR_5->chip_info->filter_freqs[0];
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_1); VAR_11++) {
   if (VAR_5->chip_info->filter_freqs[VAR_11] >= VAR_4) {
    VAR_9 = VAR_5->chip_info->filter_freqs[VAR_11] - VAR_4;
    if (VAR_9 < VAR_10) {
     VAR_10 = VAR_9;
     VAR_12 = VAR_11;
    }
   }
  }

  VAR_13 &= ~(0x3 << VAR_7);
  VAR_13 |= VAR_12 << VAR_7;
  VAR_13 |= VAR_6;
 }

 return FUNC_3(&VAR_5->adis, VAR_8, VAR_13);
}
