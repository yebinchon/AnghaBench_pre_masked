
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_drvdata {unsigned long stmhebsr; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct stm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct stm_drvdata *VAR_5 = FUNC_0(VAR_1->parent);
 unsigned long VAR_6;
 int VAR_7 = 0;

 VAR_7 = FUNC_1(VAR_3, 16, &VAR_6);
 if (VAR_7)
  return -VAR_0;

 VAR_5->stmhebsr = VAR_6;

 return VAR_4;
}
