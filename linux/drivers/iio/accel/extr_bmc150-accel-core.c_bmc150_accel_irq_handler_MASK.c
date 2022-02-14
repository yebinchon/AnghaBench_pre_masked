
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct bmc150_accel_data {scalar_t__ fifo_mode; scalar_t__ ev_enable_state; TYPE_1__* triggers; int timestamp; int old_timestamp; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int indio_trig; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iio_dev*) ;
 struct bmc150_accel_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct iio_dev *VAR_6 = VAR_5;
 struct bmc150_accel_data *VAR_7 = FUNC_1(VAR_6);
 bool VAR_8 = 0;
 int VAR_9;

 VAR_7->old_timestamp = VAR_7->timestamp;
 VAR_7->timestamp = FUNC_0(VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (VAR_7->triggers[VAR_9].enabled) {
   FUNC_2(VAR_7->triggers[VAR_9].indio_trig);
   VAR_8 = 1;
   break;
  }
 }

 if (VAR_7->ev_enable_state || VAR_7->fifo_mode)
  return VAR_3;

 if (VAR_8)
  return VAR_1;

 return VAR_2;
}
