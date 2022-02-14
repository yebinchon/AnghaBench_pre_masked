
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct mma9553_event {TYPE_1__* info; scalar_t__ enabled; } ;
struct mma9553_data {scalar_t__ activity; scalar_t__ stepcnt; int mutex; int timestamp; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int mod; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mma9553_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 struct mma9553_event* FUNC_4 (struct mma9553_data*,int ,int ,int ) ;
 int FUNC_5 (struct mma9553_data*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_9, void *VAR_10)
{
 struct iio_dev *VAR_11 = VAR_10;
 struct mma9553_data *VAR_12 = FUNC_1(VAR_11);
 u16 VAR_13;
 u8 VAR_14;
 struct mma9553_event *VAR_15, *VAR_16, *VAR_17;
 int VAR_18;

 FUNC_6(&VAR_12->mutex);
 VAR_18 = FUNC_5(VAR_12, &VAR_14, &VAR_13);
 if (VAR_18 < 0) {
  FUNC_7(&VAR_12->mutex);
  return VAR_8;
 }

 VAR_16 = FUNC_4(VAR_12, VAR_0,
          FUNC_3(
          VAR_12->activity),
          VAR_1);
 VAR_15 = FUNC_4(VAR_12, VAR_0,
     FUNC_3(VAR_14),
     VAR_3);
 VAR_17 = FUNC_4(VAR_12, VAR_7, VAR_6,
        VAR_2);

 if (VAR_17->enabled && (VAR_13 != VAR_12->stepcnt)) {
  VAR_12->stepcnt = VAR_13;
  FUNC_2(VAR_11,
          FUNC_0(VAR_7, 0, VAR_6,
           VAR_2,
           VAR_4, 0, 0, 0),
          VAR_12->timestamp);
 }

 if (VAR_14 != VAR_12->activity) {
  VAR_12->activity = VAR_14;

  if (VAR_16 && VAR_16->enabled)
   FUNC_2(VAR_11,
           FUNC_0(VAR_0, 0,
          VAR_16->info->mod,
          VAR_1,
          VAR_5, 0, 0,
          0),
           VAR_12->timestamp);

  if (VAR_15 && VAR_15->enabled)
   FUNC_2(VAR_11,
           FUNC_0(VAR_0, 0,
            VAR_15->info->mod,
            VAR_3,
            VAR_5, 0, 0,
            0),
           VAR_12->timestamp);
 }
 FUNC_7(&VAR_12->mutex);

 return VAR_8;
}
