
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {int* temp_hyst; int* temp_high; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct f71882fg_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute
 *VAR_1, char *VAR_2)
{
 struct f71882fg_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = FUNC_4(VAR_1)->index;
 int VAR_5;

 FUNC_1(&VAR_3->update_lock);
 if (VAR_4 & 1)
  VAR_5 = VAR_3->temp_hyst[VAR_4 / 2] >> 4;
 else
  VAR_5 = VAR_3->temp_hyst[VAR_4 / 2] & 0x0f;
 VAR_5 = (VAR_3->temp_high[VAR_4] - VAR_5) * 1000;
 FUNC_2(&VAR_3->update_lock);

 return FUNC_3(VAR_2, "%d\n", VAR_5);
}
