
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tmp007_data {int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 struct tmp007_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_6,
  const struct iio_chan_spec *VAR_7, enum iio_event_type VAR_8,
  enum iio_event_direction VAR_9, enum iio_event_info VAR_10,
  int VAR_11, int VAR_12)
{
 struct tmp007_data *VAR_13 = FUNC_1(VAR_6);
 u8 VAR_14;

 switch (VAR_7->channel2) {
 case 129:
  if (VAR_9 == VAR_1)
   VAR_14 = VAR_2;
  else
   VAR_14 = VAR_3;
  break;
 case 128:
  if (VAR_9 == VAR_1)
   VAR_14 = VAR_4;
  else
   VAR_14 = VAR_5;
  break;
 default:
  return -VAR_0;
 }


 if (VAR_11 < -256 || VAR_11 > 255)
  return -VAR_0;


 return FUNC_0(VAR_13->client, VAR_14, (VAR_11 << 7));
}
