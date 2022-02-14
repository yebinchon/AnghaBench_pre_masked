
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma9551_data {int* event_enabled; int client; } ;
struct iio_dev {int dummy; } ;
typedef enum mma9551_tilt_axis { ____Placeholder_mma9551_tilt_axis } mma9551_tilt_axis ;
typedef enum mma9551_gpio_pin { ____Placeholder_mma9551_gpio_pin } mma9551_gpio_pin ;
typedef enum iio_modifier { ____Placeholder_iio_modifier } iio_modifier ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mma9551_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int,int ,int,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_6,
          enum iio_modifier VAR_7,
          int VAR_8)
{
 struct mma9551_data *VAR_9 = FUNC_0(VAR_6);
 enum mma9551_tilt_axis VAR_10;
 int VAR_11;


 VAR_10 = VAR_7 - 1;

 if (VAR_9->event_enabled[VAR_10] == VAR_8)
  return 0;

 if (VAR_8 == 0) {
  VAR_11 = FUNC_1(VAR_9->client,
       (enum mma9551_gpio_pin)VAR_10,
       VAR_1, 0, 0);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_11 = FUNC_2(VAR_9->client, 0);
  if (VAR_11 < 0)
   return VAR_11;
 } else {
  int VAR_12;


  switch (VAR_7) {
  case 130:
   VAR_12 = 7 + 8 * VAR_5;
   break;
  case 129:
   VAR_12 = 7 + 8 * VAR_4;
   break;
  case 128:
   VAR_12 = 7 + 8 * VAR_3;
   break;
  default:
   return -VAR_0;
  }


  VAR_11 = FUNC_2(VAR_9->client, 1);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_11 = FUNC_1(VAR_9->client,
       (enum mma9551_gpio_pin)VAR_10,
       VAR_2, VAR_12, 0);
  if (VAR_11 < 0) {
   FUNC_2(VAR_9->client, 0);
   return VAR_11;
  }
 }

 VAR_9->event_enabled[VAR_10] = VAR_8;

 return VAR_11;
}
