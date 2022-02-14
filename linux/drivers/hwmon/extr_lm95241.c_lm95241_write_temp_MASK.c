
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm95241_data {int config; int trutherm; int model; int update_lock; int valid; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct lm95241_data* FUNC_0 (struct device*) ;



 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_14, u32 VAR_15, int VAR_16,
         long VAR_17)
{
 struct lm95241_data *VAR_18 = FUNC_0(VAR_14);
 struct i2c_client *VAR_19 = VAR_18->client;
 int VAR_20;

 FUNC_2(&VAR_18->update_lock);

 switch (VAR_15) {
 case 129:
  if (VAR_16 == 1) {
   if (VAR_17 < 0)
    VAR_18->config |= VAR_5;
   else
    VAR_18->config &= ~VAR_5;
  } else {
   if (VAR_17 < 0)
    VAR_18->config |= VAR_7;
   else
    VAR_18->config &= ~VAR_7;
  }
  VAR_18->valid = 0;
  VAR_20 = FUNC_1(VAR_19, VAR_2,
      VAR_18->config);
  break;
 case 130:
  if (VAR_16 == 1) {
   if (VAR_17 <= 127875)
    VAR_18->config |= VAR_5;
   else
    VAR_18->config &= ~VAR_5;
  } else {
   if (VAR_17 <= 127875)
    VAR_18->config |= VAR_7;
   else
    VAR_18->config &= ~VAR_7;
  }
  VAR_18->valid = 0;
  VAR_20 = FUNC_1(VAR_19, VAR_2,
      VAR_18->config);
  break;
 case 128:
  if (VAR_17 != 1 && VAR_17 != 2) {
   VAR_20 = -VAR_0;
   break;
  }
  if (VAR_16 == 1) {
   VAR_18->trutherm &= ~(VAR_11 << VAR_9);
   if (VAR_17 == 1) {
    VAR_18->model |= VAR_6;
    VAR_18->trutherm |= (VAR_13 << VAR_9);
   } else {
    VAR_18->model &= ~VAR_6;
    VAR_18->trutherm |= (VAR_12 << VAR_9);
   }
  } else {
   VAR_18->trutherm &= ~(VAR_11 << VAR_10);
   if (VAR_17 == 1) {
    VAR_18->model |= VAR_8;
    VAR_18->trutherm |= (VAR_13 << VAR_10);
   } else {
    VAR_18->model &= ~VAR_8;
    VAR_18->trutherm |= (VAR_12 << VAR_10);
   }
  }
  VAR_20 = FUNC_1(VAR_19,
      VAR_3,
      VAR_18->model);
  if (VAR_20 < 0)
   break;
  VAR_20 = FUNC_1(VAR_19, VAR_4,
      VAR_18->trutherm);
  break;
 default:
  VAR_20 = -VAR_1;
  break;
 }

 FUNC_3(&VAR_18->update_lock);

 return VAR_20;
}
