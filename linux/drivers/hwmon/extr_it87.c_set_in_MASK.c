
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct it87_data {int update_lock; int ** in; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct it87_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct it87_data*,int,unsigned long) ;
 int FUNC_4 (struct it87_data*,int ,int ) ;
 scalar_t__ FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sensor_device_attribute_2* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 = FUNC_8(VAR_2);
 struct it87_data *VAR_6 = FUNC_2(VAR_1);
 int VAR_7 = VAR_5->index;
 int VAR_8 = VAR_5->nr;
 unsigned long VAR_9;

 if (FUNC_5(VAR_3, 10, &VAR_9) < 0)
  return -VAR_0;

 FUNC_6(&VAR_6->update_lock);
 VAR_6->in[VAR_8][VAR_7] = FUNC_3(VAR_6, VAR_8, VAR_9);
 FUNC_4(VAR_6,
    VAR_7 == 1 ? FUNC_1(VAR_8)
        : FUNC_0(VAR_8),
    VAR_6->in[VAR_8][VAR_7]);
 FUNC_7(&VAR_6->update_lock);
 return VAR_4;
}
