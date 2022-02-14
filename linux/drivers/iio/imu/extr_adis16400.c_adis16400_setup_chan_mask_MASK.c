
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {scalar_t__ scan_index; } ;
struct adis16400_state {int * avail_scan_mask; struct adis16400_chip_info* variant; } ;
struct adis16400_chip_info {unsigned int num_channels; struct iio_chan_spec* channels; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct adis16400_state *VAR_1)
{
 const struct adis16400_chip_info *VAR_2 = VAR_1->variant;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_channels; VAR_3++) {
  const struct iio_chan_spec *VAR_4 = &VAR_2->channels[VAR_3];

  if (VAR_4->scan_index >= 0 &&
      VAR_4->scan_index != VAR_0)
   VAR_1->avail_scan_mask[0] |= FUNC_0(VAR_4->scan_index);
 }
}
