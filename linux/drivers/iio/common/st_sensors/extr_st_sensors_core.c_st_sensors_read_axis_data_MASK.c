
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct st_sensor_data {int regmap; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ shift; scalar_t__ realbits; } ;
struct iio_chan_spec {int address; TYPE_1__ scan_type; } ;
typedef int s8 ;
typedef int s32 ;
typedef int s16 ;


 unsigned int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 struct st_sensor_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (unsigned int,int) ;
 int FUNC_5 (int ,int ,scalar_t__*,unsigned int) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3,
         struct iio_chan_spec const *VAR_4, int *VAR_5)
{
 int VAR_6;
 u8 *VAR_7;
 struct st_sensor_data *VAR_8 = FUNC_2(VAR_3);
 unsigned int VAR_9;

 VAR_9 = FUNC_0(VAR_4->scan_type.realbits +
     VAR_4->scan_type.shift, 8);
 VAR_7 = FUNC_4(VAR_9, VAR_1 | VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_8->regmap, VAR_4->address,
          VAR_7, VAR_9);
 if (VAR_6 < 0)
  goto st_sensors_free_memory;

 if (VAR_9 == 1)
  *VAR_5 = (s8)*VAR_7;
 else if (VAR_9 == 2)
  *VAR_5 = (s16)FUNC_1(VAR_7);
 else if (VAR_9 == 3)
  *VAR_5 = (s32)FUNC_6(VAR_7);

st_sensors_free_memory:
 FUNC_3(VAR_7);

 return VAR_6;
}
