
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int modes; int num_channels; int dev; struct iio_chan_spec* channels; } ;
struct iio_chan_spec {scalar_t__ scan_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2)
{
 int VAR_3, VAR_4;
 const struct iio_chan_spec *VAR_5 = VAR_2->channels;

 if (!(VAR_2->modes & VAR_1))
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_channels - 1; VAR_3++) {
  if (VAR_5[VAR_3].scan_index < 0)
   continue;
  for (VAR_4 = VAR_3 + 1; VAR_4 < VAR_2->num_channels; VAR_4++)
   if (VAR_5[VAR_3].scan_index == VAR_5[VAR_4].scan_index) {
    FUNC_0(&VAR_2->dev,
     "Duplicate scan index %d\n",
     VAR_5[VAR_3].scan_index);
    return -VAR_0;
   }
 }

 return 0;
}
