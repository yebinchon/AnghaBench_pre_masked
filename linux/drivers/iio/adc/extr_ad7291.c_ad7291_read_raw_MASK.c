
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int channel; } ;
struct ad7291_chip_info {int command; int reg; int client; int state_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int VAR_11 ;

 int FUNC_1 (struct ad7291_chip_info*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 struct ad7291_chip_info* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_12,
      struct iio_chan_spec const *VAR_13,
      int *VAR_14,
      int *VAR_15,
      long VAR_16)
{
 int VAR_17;
 struct ad7291_chip_info *VAR_18 = FUNC_3(VAR_12);
 u16 VAR_19;

 switch (VAR_16) {
 case 131:
  switch (VAR_13->type) {
  case 128:
   FUNC_4(&VAR_18->state_lock);

   if (VAR_18->command & VAR_0) {
    FUNC_5(&VAR_18->state_lock);
    return -VAR_8;
   }

   VAR_19 = VAR_18->command & (~VAR_7);
   VAR_19 |= FUNC_0(15 - VAR_13->channel);
   VAR_17 = FUNC_1(VAR_18, VAR_2, VAR_19);
   if (VAR_17 < 0) {
    FUNC_5(&VAR_18->state_lock);
    return VAR_17;
   }

   VAR_17 = FUNC_2(VAR_18->client,
         VAR_6);
   if (VAR_17 < 0) {
    FUNC_5(&VAR_18->state_lock);
    return VAR_17;
   }
   *VAR_14 = VAR_17 & VAR_5;
   FUNC_5(&VAR_18->state_lock);
   return VAR_11;
  case 129:

   VAR_17 = FUNC_2(VAR_18->client,
         VAR_4);
   if (VAR_17 < 0)
    return VAR_17;
   *VAR_14 = FUNC_7(VAR_17, 11);
   return VAR_11;
  default:
   return -VAR_9;
  }
 case 132:
  VAR_17 = FUNC_2(VAR_18->client,
        VAR_3);
   if (VAR_17 < 0)
    return VAR_17;
   *VAR_14 = FUNC_7(VAR_17, 11);
   return VAR_11;
 case 130:
  switch (VAR_13->type) {
  case 128:
   if (VAR_18->reg) {
    int VAR_20;

    VAR_20 = FUNC_6(VAR_18->reg);
    if (VAR_20 < 0)
     return VAR_20;
    *VAR_14 = VAR_20 / 1000;
   } else {
    *VAR_14 = 2500;
   }
   *VAR_15 = VAR_1;
   return VAR_10;
  case 129:





   *VAR_14 = 250;
   return VAR_11;
  default:
   return -VAR_9;
  }
 default:
  return -VAR_9;
 }
}
