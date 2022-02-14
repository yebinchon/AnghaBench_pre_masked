
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {scalar_t__ config_type; unsigned long size; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tmc_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
     struct device_attribute *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;
 struct tmc_drvdata *VAR_10 = FUNC_0(VAR_4->parent);


 if (VAR_10->config_type != VAR_3)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_6, 0, &VAR_9);
 if (VAR_8)
  return VAR_8;

 if (VAR_9 & (VAR_2 - 1))
  return -VAR_0;
 VAR_10->size = VAR_9;
 return VAR_7;
}
