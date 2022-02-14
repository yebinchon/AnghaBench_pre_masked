
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct funnel_drvdata {unsigned long priority; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 struct funnel_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct funnel_drvdata *VAR_3 = FUNC_0(VAR_0->parent);
 unsigned long VAR_4 = VAR_3->priority;

 return FUNC_1(VAR_2, "%#lx\n", VAR_4);
}
