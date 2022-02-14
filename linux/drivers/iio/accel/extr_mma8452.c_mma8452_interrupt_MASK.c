
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mma8452_data {TYPE_1__* chip_info; int client; } ;
struct iio_dev {int trig; } ;
typedef int s64 ;
typedef int irqreturn_t ;
struct TYPE_2__ {int enabled_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct mma8452_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct mma8452_data*) ;
 int FUNC_7 (struct iio_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_10, void *VAR_11)
{
 struct iio_dev *VAR_12 = VAR_11;
 struct mma8452_data *VAR_13 = FUNC_3(VAR_12);
 int VAR_14 = VAR_5;
 int VAR_15;

 VAR_15 = FUNC_1(VAR_13->client, VAR_8);
 if (VAR_15 < 0)
  return VAR_5;

 if (!(VAR_15 & (VAR_13->chip_info->enabled_events | VAR_6)))
  return VAR_5;

 if (VAR_15 & VAR_6) {
  FUNC_5(VAR_12->trig);
  VAR_14 = VAR_4;
 }

 if (VAR_15 & VAR_7) {
  if (FUNC_6(VAR_13)) {
   s64 VAR_16 = FUNC_2(VAR_12);

   FUNC_4(VAR_12,
           FUNC_0(VAR_0, 0,
         VAR_3,
         VAR_2,
         VAR_1),
     VAR_16);
  }
  VAR_14 = VAR_4;
 }

 if (VAR_15 & VAR_9) {
  FUNC_7(VAR_12);
  VAR_14 = VAR_4;
 }

 return VAR_14;
}
