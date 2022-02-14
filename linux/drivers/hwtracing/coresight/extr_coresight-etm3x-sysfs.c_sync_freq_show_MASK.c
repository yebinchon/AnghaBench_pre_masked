
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_config {unsigned long sync_freq; } ;
struct etm_drvdata {struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 struct etm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 unsigned long VAR_3;
 struct etm_drvdata *VAR_4 = FUNC_0(VAR_0->parent);
 struct etm_config *VAR_5 = &VAR_4->config;

 VAR_3 = VAR_5->sync_freq;
 return FUNC_1(VAR_2, "%#lx\n", VAR_3);
}
