
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct i2c_client {int dev; } ;
struct cm36651_data {int* ps_ctrl_regs; int ps_client; struct i2c_client* client; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,size_t,int) ;
 struct cm36651_data* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
     const struct iio_chan_spec *VAR_3,
     enum iio_event_type VAR_4,
     enum iio_event_direction VAR_5,
     enum iio_event_info VAR_6,
     int VAR_7, int VAR_8)
{
 struct cm36651_data *VAR_9 = FUNC_2(VAR_2);
 struct i2c_client *VAR_10 = VAR_9->client;
 int VAR_11;

 if (VAR_7 < 3 || VAR_7 > 255)
  return -VAR_1;

 VAR_9->ps_ctrl_regs[VAR_0] = VAR_7;
 VAR_11 = FUNC_1(VAR_9->ps_client, VAR_0,
     VAR_9->ps_ctrl_regs[VAR_0]);

 if (VAR_11 < 0) {
  FUNC_0(&VAR_10->dev, "PS threshold write failed: %d\n", VAR_11);
  return VAR_11;
 }

 return 0;
}
