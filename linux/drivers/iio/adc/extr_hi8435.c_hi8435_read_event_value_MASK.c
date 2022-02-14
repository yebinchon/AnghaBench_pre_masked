
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct hi8435_priv {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hi8435_priv*,int ,int*) ;
 int FUNC_2 (struct hi8435_priv*,int ,int*) ;
 struct hi8435_priv* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_6,
       const struct iio_chan_spec *VAR_7,
       enum iio_event_type VAR_8,
       enum iio_event_direction VAR_9,
       enum iio_event_info VAR_10,
       int *VAR_11, int *VAR_12)
{
 struct hi8435_priv *VAR_13 = FUNC_3(VAR_6);
 int VAR_14;
 u8 VAR_15, VAR_16;
 u16 VAR_17;

 VAR_14 = FUNC_1(VAR_13, VAR_1, &VAR_16);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_15 = !!(VAR_16 & FUNC_0(VAR_7->channel / 8));

 VAR_14 = FUNC_2(VAR_13, VAR_15 ? VAR_2 :
     VAR_0, &VAR_17);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_9 == VAR_3)
  *VAR_11 = ((VAR_17 & 0xff) - (VAR_17 >> 8)) / 2;
 else if (VAR_9 == VAR_4)
  *VAR_11 = ((VAR_17 & 0xff) + (VAR_17 >> 8)) / 2;

 return VAR_5;
}
