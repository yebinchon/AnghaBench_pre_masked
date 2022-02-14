
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;
struct cros_ec_sensors_core_state {int (* read_ec_sensors_data ) (struct iio_dev*,int,int*) ;int cmd_lock; int type; } ;
typedef int s16 ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cros_ec_sensors_core_state*,struct iio_chan_spec const*,int*,int*,long) ;
 struct cros_ec_sensors_core_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct iio_dev*,int,int*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_4,
         struct iio_chan_spec const *VAR_5,
         int *VAR_6, int *VAR_7, long VAR_8)
{
 struct cros_ec_sensors_core_state *VAR_9 = FUNC_2(VAR_4);
 s16 VAR_10 = 0;
 int VAR_11;
 int VAR_12 = VAR_5->scan_index;

 FUNC_3(&VAR_9->cmd_lock);

 switch (VAR_8) {
 case 129:
  VAR_11 = VAR_9->read_ec_sensors_data(VAR_4, 1 << VAR_12, &VAR_10);
  if (VAR_11 < 0)
   break;
  VAR_11 = VAR_1;
  *VAR_6 = VAR_10;
  break;
 case 128:
  FUNC_0(VAR_9->type != VAR_3);
  *VAR_6 = 0;
  *VAR_7 = VAR_0;
  VAR_11 = VAR_2;
  break;
 case 130:

  *VAR_6 = 0;
  VAR_11 = VAR_1;
  break;
 default:
  VAR_11 = FUNC_1(VAR_9, VAR_5, VAR_6, VAR_7,
    VAR_8);
  break;
 }
 FUNC_4(&VAR_9->cmd_lock);

 return VAR_11;
}
