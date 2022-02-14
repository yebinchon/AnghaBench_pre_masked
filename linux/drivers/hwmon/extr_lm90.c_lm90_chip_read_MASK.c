
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm90_data {long update_interval; long alarms; int update_lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct lm90_data* FUNC_0 (struct device*) ;


 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, u32 VAR_2, int VAR_3, long *VAR_4)
{
 struct lm90_data *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 FUNC_2(&VAR_5->update_lock);
 VAR_6 = FUNC_1(VAR_1);
 FUNC_3(&VAR_5->update_lock);
 if (VAR_6)
  return VAR_6;

 switch (VAR_2) {
 case 128:
  *VAR_4 = VAR_5->update_interval;
  break;
 case 129:
  *VAR_4 = VAR_5->alarms;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
