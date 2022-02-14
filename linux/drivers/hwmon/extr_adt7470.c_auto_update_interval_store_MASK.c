
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7470_data {long auto_update_interval; int lock; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 long FUNC_0 (long,int ,int) ;
 struct adt7470_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct adt7470_data *VAR_5 = FUNC_1(VAR_1);
 long VAR_6;

 if (FUNC_2(VAR_3, 10, &VAR_6))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_6, 0, 60000);

 FUNC_3(&VAR_5->lock);
 VAR_5->auto_update_interval = VAR_6;
 FUNC_4(&VAR_5->lock);

 return VAR_4;
}
