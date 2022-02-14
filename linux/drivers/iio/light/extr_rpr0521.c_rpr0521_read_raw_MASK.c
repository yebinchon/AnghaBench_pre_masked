
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rpr0521_data {int lock; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; int type; } ;
typedef int raw_data ;
typedef int __le16 ;
struct TYPE_2__ {int address; int device_mask; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct rpr0521_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int *,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_7 (struct rpr0521_data*,size_t,int*,int*) ;
 int FUNC_8 (struct rpr0521_data*,int*) ;
 int FUNC_9 (struct rpr0521_data*,int ,int*,int*) ;
 int FUNC_10 (struct rpr0521_data*,int,int ) ;

__attribute__((used)) static int FUNC_11(struct iio_dev *VAR_7,
       struct iio_chan_spec const *VAR_8, int *VAR_9,
       int *VAR_10, long VAR_11)
{
 struct rpr0521_data *VAR_12 = FUNC_2(VAR_7);
 int VAR_13;
 int VAR_14;
 u8 VAR_15;
 __le16 VAR_16;

 switch (VAR_11) {
 case 130:
  if (VAR_8->type != VAR_2 && VAR_8->type != VAR_3)
   return -VAR_1;

  VAR_14 = FUNC_0(VAR_7);
  if (VAR_14)
   return -VAR_0;

  VAR_15 = VAR_6[VAR_8->address].device_mask;

  FUNC_4(&VAR_12->lock);
  VAR_13 = FUNC_10(VAR_12, 1, VAR_15);
  if (VAR_13 < 0)
   goto rpr0521_read_raw_out;

  VAR_13 = FUNC_6(VAR_12->regmap,
           VAR_6[VAR_8->address].address,
           &VAR_16, sizeof(VAR_16));
  if (VAR_13 < 0) {
   FUNC_10(VAR_12, 0, VAR_15);
   goto rpr0521_read_raw_out;
  }

  VAR_13 = FUNC_10(VAR_12, 0, VAR_15);

rpr0521_read_raw_out:
  FUNC_5(&VAR_12->lock);
  FUNC_1(VAR_7);
  if (VAR_13 < 0)
   return VAR_13;

  *VAR_9 = FUNC_3(VAR_16);

  return VAR_4;

 case 128:
  FUNC_4(&VAR_12->lock);
  VAR_13 = FUNC_7(VAR_12, VAR_8->address, VAR_9, VAR_10);
  FUNC_5(&VAR_12->lock);
  if (VAR_13 < 0)
   return VAR_13;

  return VAR_5;

 case 129:
  FUNC_4(&VAR_12->lock);
  VAR_13 = FUNC_9(VAR_12, VAR_8->type, VAR_9, VAR_10);
  FUNC_5(&VAR_12->lock);
  if (VAR_13 < 0)
   return VAR_13;

  return VAR_5;

 case 131:
  FUNC_4(&VAR_12->lock);
  VAR_13 = FUNC_8(VAR_12, VAR_9);
  FUNC_5(&VAR_12->lock);
  if (VAR_13 < 0)
   return VAR_13;

  return VAR_4;

 default:
  return -VAR_1;
 }
}
