
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adxl34x {int disabled; int mutex; scalar_t__ opened; int suspended; } ;
typedef int ssize_t ;


 int FUNC_0 (struct adxl34x*) ;
 int FUNC_1 (struct adxl34x*) ;
 struct adxl34x* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
         struct device_attribute *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct adxl34x *VAR_4 = FUNC_2(VAR_0);
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, 10, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_4(&VAR_4->mutex);

 if (!VAR_4->suspended && VAR_4->opened) {
  if (VAR_5) {
   if (!VAR_4->disabled)
    FUNC_0(VAR_4);
  } else {
   if (VAR_4->disabled)
    FUNC_1(VAR_4);
  }
 }

 VAR_4->disabled = !!VAR_5;

 FUNC_5(&VAR_4->mutex);

 return VAR_3;
}
