
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc47m1_data {scalar_t__ type; int* fan; int* fan_preload; int* pwm; int* fan_div; int alarms; int update_lock; scalar_t__ last_updated; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct smsc47m1_data* FUNC_0 (struct device*) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smsc47m1_data*,int ) ;
 int FUNC_4 (struct smsc47m1_data*,int ,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct smsc47m1_data *FUNC_6(struct device *VAR_10,
  int VAR_11)
{
 struct smsc47m1_data *VAR_12 = FUNC_0(VAR_10);

 FUNC_1(&VAR_12->update_lock);

 if (FUNC_5(VAR_8, VAR_12->last_updated + VAR_0 + VAR_0 / 2) || VAR_11) {
  int VAR_13, VAR_14;
  VAR_14 = VAR_12->type == VAR_9 ? 3 : 2;

  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   VAR_12->fan[VAR_13] = FUNC_3(VAR_12,
           VAR_2[VAR_13]);
   VAR_12->fan_preload[VAR_13] = FUNC_3(VAR_12,
            VAR_4[VAR_13]);
   VAR_12->pwm[VAR_13] = FUNC_3(VAR_12,
           VAR_5[VAR_13]);
  }

  VAR_13 = FUNC_3(VAR_12, VAR_3);
  VAR_12->fan_div[0] = (VAR_13 >> 4) & 0x03;
  VAR_12->fan_div[1] = VAR_13 >> 6;

  VAR_12->alarms = FUNC_3(VAR_12,
          VAR_1) >> 6;

  if (VAR_12->alarms)
   FUNC_4(VAR_12, VAR_1, 0xC0);

  if (VAR_14 >= 3) {
   VAR_12->fan_div[2] = (FUNC_3(VAR_12,
         VAR_7) >> 4) & 0x03;
   VAR_12->alarms |= (FUNC_3(VAR_12,
      VAR_6) & 0x40) >> 4;

   if (VAR_12->alarms & 0x04)
    FUNC_4(VAR_12,
           VAR_6,
           0x40);
  }

  VAR_12->last_updated = VAR_8;
 }

 FUNC_2(&VAR_12->update_lock);
 return VAR_12;
}
