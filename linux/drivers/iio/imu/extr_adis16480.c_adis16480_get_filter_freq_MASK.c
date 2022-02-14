
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; } ;
struct adis16480 {TYPE_1__* chip_info; int adis; } ;
struct TYPE_2__ {int* filter_freqs; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int** VAR_1 ;
 int FUNC_1 (int *,unsigned int,unsigned int*) ;
 struct adis16480* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, int *VAR_4)
{
 struct adis16480 *VAR_5 = FUNC_2(VAR_2);
 unsigned int VAR_6, VAR_7, VAR_8;
 uint16_t VAR_9;
 int VAR_10;

 VAR_8 = VAR_1[VAR_3->scan_index][0];
 VAR_7 = VAR_1[VAR_3->scan_index][1];
 VAR_6 = FUNC_0(VAR_7 + 2);

 VAR_10 = FUNC_1(&VAR_5->adis, VAR_8, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (!(VAR_9 & VAR_6))
  *VAR_4 = 0;
 else
  *VAR_4 = VAR_5->chip_info->filter_freqs[(VAR_9 >> VAR_7) & 0x3];

 return VAR_0;
}
