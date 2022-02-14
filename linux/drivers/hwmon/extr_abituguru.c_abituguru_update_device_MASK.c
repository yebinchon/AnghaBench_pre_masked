
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct abituguru_data {int bank2_sensors; unsigned int update_timeouts; int update_lock; scalar_t__ last_updated; int * bank2_value; int ** bank1_settings; int * bank1_value; int * alarms; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct abituguru_data*,scalar_t__,int,int *,int,int ) ;
 struct abituguru_data* FUNC_2 (struct device*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct abituguru_data *FUNC_6(struct device *VAR_8)
{
 int VAR_9, VAR_10;
 struct abituguru_data *VAR_11 = FUNC_2(VAR_8);

 char VAR_12 = 1;

 FUNC_3(&VAR_11->update_lock);
 if (FUNC_5(VAR_7, VAR_11->last_updated + VAR_6)) {
  VAR_12 = 0;
  VAR_10 = FUNC_1(VAR_11, VAR_0, 0,
         VAR_11->alarms, 3, 0);
  if (VAR_10 != 3)
   goto LEAVE_UPDATE;
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   VAR_10 = FUNC_1(VAR_11, VAR_3,
          VAR_9, &VAR_11->bank1_value[VAR_9], 1, 0);
   if (VAR_10 != 1)
    goto LEAVE_UPDATE;
   VAR_10 = FUNC_1(VAR_11, VAR_3 + 1,
          VAR_9, VAR_11->bank1_settings[VAR_9], 3, 0);
   if (VAR_10 != 3)
    goto LEAVE_UPDATE;
  }
  for (VAR_9 = 0; VAR_9 < VAR_11->bank2_sensors; VAR_9++) {
   VAR_10 = FUNC_1(VAR_11, VAR_4, VAR_9,
          &VAR_11->bank2_value[VAR_9], 1, 0);
   if (VAR_10 != 1)
    goto LEAVE_UPDATE;
  }

  VAR_12 = 1;
  VAR_11->update_timeouts = 0;
LEAVE_UPDATE:

  if (!VAR_12 && (VAR_10 == -VAR_5 || VAR_10 >= 0)) {

   if (VAR_11->update_timeouts < 255u)
    VAR_11->update_timeouts++;
   if (VAR_11->update_timeouts <= VAR_2) {
    FUNC_0(3, "timeout exceeded, will "
     "try again next update\n");

    VAR_12 = 1;
   } else
    FUNC_0(1, "timeout exceeded %d "
     "times waiting for more input state\n",
     (int)VAR_11->update_timeouts);
  }

  if (VAR_12)
   VAR_11->last_updated = VAR_7;
 }
 FUNC_4(&VAR_11->update_lock);

 if (VAR_12)
  return VAR_11;
 else
  return ((void*)0);
}
