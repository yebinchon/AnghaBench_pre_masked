
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm78_data {int valid; int* in; int* in_min; int* in_max; int* fan; int* fan_min; int temp; int temp_over; int temp_hyst; int vid; scalar_t__ type; int* fan_div; int update_lock; scalar_t__ last_updated; int alarms; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct device*,char*) ;
 struct lm78_data* FUNC_6 (struct device*) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (struct lm78_data*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct lm78_data *FUNC_11(struct device *VAR_10)
{
 struct lm78_data *VAR_11 = FUNC_6(VAR_10);
 int VAR_12;

 FUNC_8(&VAR_11->update_lock);

 if (FUNC_10(VAR_8, VAR_11->last_updated + VAR_0 + VAR_0 / 2)
     || !VAR_11->valid) {

  FUNC_5(VAR_10, "Starting lm78 update\n");

  for (VAR_12 = 0; VAR_12 <= 6; VAR_12++) {
   VAR_11->in[VAR_12] =
       FUNC_7(VAR_11, FUNC_2(VAR_12));
   VAR_11->in_min[VAR_12] =
       FUNC_7(VAR_11, FUNC_4(VAR_12));
   VAR_11->in_max[VAR_12] =
       FUNC_7(VAR_11, FUNC_3(VAR_12));
  }
  for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
   VAR_11->fan[VAR_12] =
       FUNC_7(VAR_11, FUNC_0(VAR_12));
   VAR_11->fan_min[VAR_12] =
       FUNC_7(VAR_11, FUNC_1(VAR_12));
  }
  VAR_11->temp = FUNC_7(VAR_11, VAR_4);
  VAR_11->temp_over =
      FUNC_7(VAR_11, VAR_6);
  VAR_11->temp_hyst =
      FUNC_7(VAR_11, VAR_5);
  VAR_12 = FUNC_7(VAR_11, VAR_7);
  VAR_11->vid = VAR_12 & 0x0f;
  if (VAR_11->type == VAR_9)
   VAR_11->vid |=
       (FUNC_7(VAR_11, VAR_3) &
        0x01) << 4;
  else
   VAR_11->vid |= 0x10;
  VAR_11->fan_div[0] = (VAR_12 >> 4) & 0x03;
  VAR_11->fan_div[1] = VAR_12 >> 6;
  VAR_11->alarms = FUNC_7(VAR_11, VAR_1) +
      (FUNC_7(VAR_11, VAR_2) << 8);
  VAR_11->last_updated = VAR_8;
  VAR_11->valid = 1;

  VAR_11->fan_div[2] = 1;
 }

 FUNC_9(&VAR_11->update_lock);

 return VAR_11;
}
