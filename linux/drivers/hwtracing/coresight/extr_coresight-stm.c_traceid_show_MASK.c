
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_drvdata {unsigned long traceid; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 struct stm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 unsigned long VAR_3;
 struct stm_drvdata *VAR_4 = FUNC_0(VAR_0->parent);

 VAR_3 = VAR_4->traceid;
 return FUNC_1(VAR_2, "%#lx\n", VAR_3);
}
