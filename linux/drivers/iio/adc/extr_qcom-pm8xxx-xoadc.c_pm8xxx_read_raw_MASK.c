
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct pm8xxx_xoadc {int dev; int * graph; } ;
struct pm8xxx_chan_info {size_t calibration; TYPE_1__* hwchan; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct TYPE_2__ {int prescale; int scale_fn_type; } ;


 int VAR_0 ;


 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 struct pm8xxx_xoadc* FUNC_1 (struct iio_dev*) ;
 struct pm8xxx_chan_info* FUNC_2 (struct pm8xxx_xoadc*,int ) ;
 int FUNC_3 (struct pm8xxx_xoadc*,struct pm8xxx_chan_info const*,scalar_t__*) ;
 int FUNC_4 (int ,int *,int *,int,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5, int *VAR_6, long VAR_7)
{
 struct pm8xxx_xoadc *VAR_8 = FUNC_1(VAR_3);
 const struct pm8xxx_chan_info *VAR_9;
 u16 VAR_10;
 int VAR_11;

 switch (VAR_7) {
 case 129:
  VAR_9 = FUNC_2(VAR_8, VAR_4->address);
  if (!VAR_9) {
   FUNC_0(VAR_8->dev, "no such channel %lu\n",
    VAR_4->address);
   return -VAR_0;
  }
  VAR_11 = FUNC_3(VAR_8, VAR_9, &VAR_10);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_4(VAR_9->hwchan->scale_fn_type,
          &VAR_8->graph[VAR_9->calibration],
          &VAR_9->hwchan->prescale,
          (VAR_9->calibration == VAR_2),
          VAR_10, VAR_5);
  if (VAR_11)
   return VAR_11;

  return VAR_1;
 case 128:
  VAR_9 = FUNC_2(VAR_8, VAR_4->address);
  if (!VAR_9) {
   FUNC_0(VAR_8->dev, "no such channel %lu\n",
    VAR_4->address);
   return -VAR_0;
  }
  VAR_11 = FUNC_3(VAR_8, VAR_9, &VAR_10);
  if (VAR_11)
   return VAR_11;

  *VAR_5 = (int)VAR_10;
  return VAR_1;
 default:
  return -VAR_0;
 }
}
