
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_config {unsigned long fifofull_level; } ;
struct etm_drvdata {struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 struct etm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
        struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 struct etm_drvdata *VAR_6 = FUNC_0(VAR_0->parent);
 struct etm_config *VAR_7 = &VAR_6->config;

 VAR_4 = FUNC_1(VAR_2, 16, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_7->fifofull_level = VAR_5;

 return VAR_3;
}
