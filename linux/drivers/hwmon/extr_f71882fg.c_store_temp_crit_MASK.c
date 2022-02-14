
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {long* temp_ovt; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 long FUNC_1 (long,int ,int) ;
 struct f71882fg_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct f71882fg_data*,int ,long) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0, struct device_attribute
 *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct f71882fg_data *VAR_4 = FUNC_2(VAR_0);
 int VAR_5, VAR_6 = FUNC_7(VAR_1)->index;
 long VAR_7;

 VAR_5 = FUNC_4(VAR_2, 10, &VAR_7);
 if (VAR_5)
  return VAR_5;

 VAR_7 /= 1000;
 VAR_7 = FUNC_1(VAR_7, 0, 255);

 FUNC_5(&VAR_4->update_lock);
 FUNC_3(VAR_4, FUNC_0(VAR_6), VAR_7);
 VAR_4->temp_ovt[VAR_6] = VAR_7;
 FUNC_6(&VAR_4->update_lock);

 return VAR_3;
}
