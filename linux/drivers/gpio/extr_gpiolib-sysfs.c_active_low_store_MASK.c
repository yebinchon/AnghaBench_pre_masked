
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiod_data {int mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 struct gpiod_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*,long) ;
 scalar_t__ FUNC_2 (char const*,int ,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct gpiod_data *VAR_4 = FUNC_0(VAR_0);
 ssize_t VAR_5;
 long VAR_6;

 FUNC_3(&VAR_4->mutex);

 VAR_5 = FUNC_2(VAR_2, 0, &VAR_6);
 if (VAR_5 == 0)
  VAR_5 = FUNC_1(VAR_0, VAR_6);

 FUNC_4(&VAR_4->mutex);

 return VAR_5 ? : VAR_3;
}
