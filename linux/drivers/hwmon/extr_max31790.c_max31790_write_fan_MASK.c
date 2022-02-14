
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct max31790_data {int* fan_dynamics; int* target_count; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (long,int) ;
 int FUNC_3 (long) ;
 void* FUNC_4 (int,int,int) ;
 struct max31790_data* FUNC_5 (struct device*) ;
 int FUNC_6 (int) ;

 int FUNC_7 (struct i2c_client*,int ,int) ;
 int FUNC_8 (struct i2c_client*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_5, u32 VAR_6, int VAR_7,
         long VAR_8)
{
 struct max31790_data *VAR_9 = FUNC_5(VAR_5);
 struct i2c_client *VAR_10 = VAR_9->client;
 int VAR_11;
 int VAR_12 = 0;
 u8 VAR_13;
 int VAR_14;

 FUNC_9(&VAR_9->update_lock);

 switch (VAR_6) {
 case 128:
  VAR_8 = FUNC_4(VAR_8, VAR_2, VAR_1);
  VAR_13 = FUNC_3(VAR_8);
  VAR_9->fan_dynamics[VAR_7] =
   ((VAR_9->fan_dynamics[VAR_7] &
     ~VAR_3) |
    (VAR_13 << VAR_4));
  VAR_12 = FUNC_7(VAR_10,
     FUNC_0(VAR_7),
     VAR_9->fan_dynamics[VAR_7]);
  if (VAR_12 < 0)
   break;

  VAR_14 = FUNC_6(VAR_9->fan_dynamics[VAR_7]);
  VAR_11 = FUNC_2(VAR_8, VAR_14);
  VAR_11 = FUNC_4(VAR_11, 0x1, 0x7FF);

  VAR_9->target_count[VAR_7] = VAR_11 << 5;

  VAR_12 = FUNC_8(VAR_10,
     FUNC_1(VAR_7),
     VAR_9->target_count[VAR_7]);
  break;
 default:
  VAR_12 = -VAR_0;
  break;
 }

 FUNC_10(&VAR_9->update_lock);

 return VAR_12;
}
