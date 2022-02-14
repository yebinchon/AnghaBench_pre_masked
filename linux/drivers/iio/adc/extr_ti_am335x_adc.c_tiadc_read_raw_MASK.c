
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tiadc_device {int channels; int* channel_step; int fifo1_lock; int mfd_tscadc; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tiadc_device*,struct iio_chan_spec const*) ;
 scalar_t__ FUNC_3 (struct iio_dev*) ;
 struct tiadc_device* FUNC_4 (struct iio_dev*) ;
 unsigned long VAR_9 ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (struct tiadc_device*,int ) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct iio_dev *VAR_10,
  struct iio_chan_spec const *VAR_11,
  int *VAR_12, int *VAR_13, long VAR_14)
{
 struct tiadc_device *VAR_15 = FUNC_4(VAR_10);
 int VAR_16 = VAR_6;
 int VAR_17, VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21;
 bool VAR_22 = 0;
 u32 VAR_23;
 unsigned long VAR_24;

 if (FUNC_3(VAR_10))
  return -VAR_1;

 VAR_23 = FUNC_2(VAR_15, VAR_11);
 if (!VAR_23)
  return -VAR_2;

 FUNC_6(&VAR_15->fifo1_lock);
 VAR_19 = FUNC_8(VAR_15, VAR_8);
 while (VAR_19--)
  FUNC_8(VAR_15, VAR_7);

 FUNC_1(VAR_15->mfd_tscadc, VAR_23);

 VAR_24 = VAR_9 + FUNC_5
    (VAR_5 * VAR_15->channels);

 while (1) {
  VAR_19 = FUNC_8(VAR_15, VAR_8);
  if (VAR_19)
   break;

  if (FUNC_9(VAR_9, VAR_24)) {
   FUNC_0(VAR_15->mfd_tscadc);
   VAR_16 = -VAR_0;
   goto err_unlock;
  }
 }
 VAR_18 = VAR_15->channel_step[VAR_11->scan_index];
 for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++) {
  VAR_20 = FUNC_8(VAR_15, VAR_7);
  VAR_21 = VAR_20 & VAR_3;
  VAR_21 = VAR_21 >> 0x10;

  if (VAR_21 == VAR_18) {
   VAR_20 = VAR_20 & VAR_4;
   VAR_22 = 1;
   *VAR_12 = (u16) VAR_20;
  }
 }
 FUNC_0(VAR_15->mfd_tscadc);

 if (!VAR_22)
  VAR_16 = -VAR_1;

err_unlock:
 FUNC_7(&VAR_15->fifo1_lock);
 return VAR_16;
}
