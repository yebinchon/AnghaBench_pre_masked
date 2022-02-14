
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct funnel_drvdata {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 struct funnel_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (struct funnel_drvdata*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 u32 VAR_3;
 struct funnel_drvdata *VAR_4 = FUNC_0(VAR_0->parent);

 FUNC_2(VAR_0->parent);

 VAR_3 = FUNC_1(VAR_4);

 FUNC_3(VAR_0->parent);

 return FUNC_4(VAR_2, "%#x\n", VAR_3);
}
