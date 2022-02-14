
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
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 struct tmp007_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_7,
  const struct iio_chan_spec *VAR_8, enum iio_event_type VAR_9,
  enum iio_event_direction VAR_10, enum iio_event_info VAR_11,
  int *VAR_12, int *VAR_13)
{
 struct tmp007_data *VAR_14 = FUNC_1(VAR_7);
 int VAR_15;
 u8 VAR_16;

 switch (VAR_8->channel2) {
 case 129:
  if (VAR_10 == VAR_1)
   VAR_16 = VAR_3;
  else
   VAR_16 = VAR_4;
  break;
 case 128:
  if (VAR_10 == VAR_1)
   VAR_16 = VAR_5;
 else
   VAR_16 = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 VAR_15 = FUNC_0(VAR_14->client, VAR_16);
 if (VAR_15 < 0)
  return VAR_15;


 *VAR_12 = FUNC_2(VAR_15, 15) >> 7;

 return VAR_2;
}
