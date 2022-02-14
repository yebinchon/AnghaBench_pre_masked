
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f71882fg_data {scalar_t__ type; long in1_max; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (long,int ,int) ;
 struct f71882fg_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct f71882fg_data*,int ,long) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3, struct device_attribute
 *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct f71882fg_data *VAR_7 = FUNC_1(VAR_3);
 int VAR_8;
 long VAR_9;

 VAR_8 = FUNC_3(VAR_5, 10, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_9 /= 8;
 VAR_9 = FUNC_0(VAR_9, 0, 255);

 FUNC_4(&VAR_7->update_lock);
 if (VAR_7->type == VAR_2)
  FUNC_2(VAR_7, VAR_1, VAR_9);
 else
  FUNC_2(VAR_7, VAR_0, VAR_9);
 VAR_7->in1_max = VAR_9;
 FUNC_5(&VAR_7->update_lock);

 return VAR_6;
}
