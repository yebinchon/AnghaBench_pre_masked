
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_drvdata {int cpu; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct etm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
   struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct etm_drvdata *VAR_5 = FUNC_0(VAR_1->parent);

 VAR_4 = VAR_5->cpu;
 return FUNC_1(VAR_3, VAR_0, "%d\n", VAR_4);

}
