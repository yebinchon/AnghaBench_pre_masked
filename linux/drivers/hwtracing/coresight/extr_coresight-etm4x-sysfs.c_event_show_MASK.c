
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_config {unsigned long eventctrl0; } ;
struct etmv4_drvdata {struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 unsigned long VAR_4;
 struct etmv4_drvdata *VAR_5 = FUNC_0(VAR_1->parent);
 struct etmv4_config *VAR_6 = &VAR_5->config;

 VAR_4 = VAR_6->eventctrl0;
 return FUNC_1(VAR_3, VAR_0, "%#lx\n", VAR_4);
}
