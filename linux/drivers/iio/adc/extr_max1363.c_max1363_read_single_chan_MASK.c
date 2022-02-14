
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct max1363_state {int (* recv ) (struct i2c_client*,int*,int) ;TYPE_1__* chip_info; int * current_mode; scalar_t__ monitor_on; struct i2c_client* client; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {size_t address; } ;
struct i2c_client {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {int bits; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iio_dev*) ;
 struct max1363_state* FUNC_1 (struct iio_dev*) ;
 int * VAR_1 ;
 int FUNC_2 (struct max1363_state*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct i2c_client*,int*,int) ;
 int FUNC_6 (struct i2c_client*,int*,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_2,
        struct iio_chan_spec const *VAR_3,
        int *VAR_4,
        long VAR_5)
{
 int VAR_6 = 0;
 s32 VAR_7;
 u8 VAR_8[2];
 struct max1363_state *VAR_9 = FUNC_1(VAR_2);
 struct i2c_client *VAR_10 = VAR_9->client;

 FUNC_3(&VAR_2->mlock);







 if (VAR_9->monitor_on || FUNC_0(VAR_2)) {
  VAR_6 = -VAR_0;
  goto error_ret;
 }


 if (VAR_9->current_mode != &VAR_1[VAR_3->address]) {

  VAR_9->current_mode = &VAR_1[VAR_3->address];
  VAR_6 = FUNC_2(VAR_9);
  if (VAR_6 < 0)
   goto error_ret;
 }
 if (VAR_9->chip_info->bits != 8) {

  VAR_7 = VAR_9->recv(VAR_10, VAR_8, 2);
  if (VAR_7 < 0) {
   VAR_6 = VAR_7;
   goto error_ret;
  }
  VAR_7 = (VAR_8[1] | VAR_8[0] << 8) &
    ((1 << VAR_9->chip_info->bits) - 1);
 } else {

  VAR_7 = VAR_9->recv(VAR_10, VAR_8, 1);
  if (VAR_7 < 0) {
   VAR_6 = VAR_7;
   goto error_ret;
  }
  VAR_7 = VAR_8[0];
 }
 *VAR_4 = VAR_7;
error_ret:
 FUNC_4(&VAR_2->mlock);
 return VAR_6;

}
