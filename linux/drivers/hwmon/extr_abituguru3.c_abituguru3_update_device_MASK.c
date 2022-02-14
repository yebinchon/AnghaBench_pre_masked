
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct abituguru3_data {int valid; int update_lock; scalar_t__ last_updated; int * settings; int * value; int alarms; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct abituguru3_data*,int ,scalar_t__,int,int *) ;
 int FUNC_1 (struct abituguru3_data*,int ,scalar_t__,int,int ,int) ;
 struct abituguru3_data* FUNC_2 (struct device*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct abituguru3_data *FUNC_6(struct device *VAR_7)
{
 int VAR_8;
 struct abituguru3_data *VAR_9 = FUNC_2(VAR_7);

 FUNC_3(&VAR_9->update_lock);
 if (!VAR_9->valid || FUNC_5(VAR_6, VAR_9->last_updated + VAR_5)) {

  VAR_9->valid = 0;

  if (FUNC_1(VAR_9,
    VAR_2,
    VAR_0,
    1, VAR_9->alarms, 48/8) != (48/8))
   goto LEAVE_UPDATE;

  for (VAR_8 = 0; VAR_8 < 32; VAR_8++) {
   if (FUNC_0(VAR_9, VAR_1,
     VAR_4 + VAR_8,
     1, &VAR_9->value[VAR_8]) != 1)
    goto LEAVE_UPDATE;
   if (FUNC_1(VAR_9,
     VAR_2,
     VAR_3 + VAR_8 * 3,
     1,
     VAR_9->settings[VAR_8], 3) != 3)
    goto LEAVE_UPDATE;
  }

  for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
   if (FUNC_0(VAR_9, VAR_1,
     VAR_4 + 32 + VAR_8,
     1, &VAR_9->value[32 + VAR_8]) != 1)
    goto LEAVE_UPDATE;
   if (FUNC_1(VAR_9,
     VAR_2,
     VAR_3 + 32 * 3 +
      VAR_8 * 2, 1,
     VAR_9->settings[32 + VAR_8], 2) != 2)
    goto LEAVE_UPDATE;
  }
  VAR_9->last_updated = VAR_6;
  VAR_9->valid = 1;
 }
LEAVE_UPDATE:
 FUNC_4(&VAR_9->update_lock);
 if (VAR_9->valid)
  return VAR_9;
 else
  return ((void*)0);
}
