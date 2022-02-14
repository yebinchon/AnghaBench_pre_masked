
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_source_device {int dummy; } ;
struct stm_device {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct stm_device* FUNC_2 (char const*) ;
 int FUNC_3 (struct stm_device*) ;
 int FUNC_4 (struct stm_source_device*,struct stm_device*) ;
 int FUNC_5 (struct stm_source_device*) ;
 struct stm_source_device* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct stm_source_device *VAR_5 = FUNC_6(VAR_1);
 struct stm_device *VAR_6;
 int VAR_7;

 FUNC_5(VAR_5);

 VAR_6 = FUNC_2(VAR_3);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(&VAR_6->dev);

 VAR_7 = FUNC_4(VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_1(&VAR_6->dev);

  FUNC_3(VAR_6);
 }

 return VAR_7 ? : VAR_4;
}
