
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
 struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_5, 0, &VAR_7);
 if (VAR_9)
  return VAR_9;
 if (VAR_7 > 1)
  return -VAR_0;

 FUNC_3(&VAR_1);

 if (VAR_7 != VAR_2) {
  if (VAR_7)
   VAR_8 = FUNC_1();
  else
   FUNC_0();
 }

 FUNC_4(&VAR_1);

 return VAR_8 ? VAR_8 : VAR_6;
}
