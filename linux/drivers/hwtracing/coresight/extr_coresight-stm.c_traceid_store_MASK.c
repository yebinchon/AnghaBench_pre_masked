
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_drvdata {unsigned long traceid; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 struct stm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
        struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 struct stm_drvdata *VAR_6 = FUNC_0(VAR_0->parent);

 VAR_4 = FUNC_1(VAR_2, 16, &VAR_5);
 if (VAR_4)
  return VAR_4;


 VAR_6->traceid = VAR_5 & 0x7f;
 return VAR_3;
}
