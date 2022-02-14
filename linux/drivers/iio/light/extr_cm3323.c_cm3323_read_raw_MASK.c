
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct cm3323_data {int mutex; int client; } ;
struct TYPE_2__ {int val; int val2; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cm3323_data*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,int ) ;
 struct cm3323_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
      struct iio_chan_spec const *VAR_5, int *VAR_6,
      int *VAR_7, long VAR_8)
{
 int VAR_9;
 struct cm3323_data *VAR_10 = FUNC_2(VAR_4);

 switch (VAR_8) {
 case 128:
  FUNC_3(&VAR_10->mutex);
  VAR_9 = FUNC_1(VAR_10->client, VAR_5->address);
  if (VAR_9 < 0) {
   FUNC_4(&VAR_10->mutex);
   return VAR_9;
  }
  *VAR_6 = VAR_9;
  FUNC_4(&VAR_10->mutex);

  return VAR_1;
 case 129:
  FUNC_3(&VAR_10->mutex);
  VAR_9 = FUNC_0(VAR_10);
  if (VAR_9 < 0) {
   FUNC_4(&VAR_10->mutex);
   return VAR_9;
  }

  *VAR_6 = VAR_3[VAR_9].val;
  *VAR_7 = VAR_3[VAR_9].val2;
  FUNC_4(&VAR_10->mutex);

  return VAR_2;
 default:
  return -VAR_0;
 }
}
