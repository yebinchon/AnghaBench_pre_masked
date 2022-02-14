
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_drvdata {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 struct etm_drvdata* FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct etm_drvdata*) ;
 int FUNC_2 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 unsigned long VAR_3;
 struct etm_drvdata *VAR_4 = FUNC_0(VAR_0->parent);

 VAR_3 = FUNC_1(VAR_4);

 return FUNC_2(VAR_2, "%#lx\n", VAR_3);
}
