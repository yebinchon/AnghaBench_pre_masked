
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_config {unsigned long* addr_acctype; size_t addr_idx; } ;
struct etm_drvdata {int spinlock; struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 struct etm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 unsigned long VAR_3;
 struct etm_drvdata *VAR_4 = FUNC_0(VAR_0->parent);
 struct etm_config *VAR_5 = &VAR_4->config;

 FUNC_1(&VAR_4->spinlock);
 VAR_3 = VAR_5->addr_acctype[VAR_5->addr_idx];
 FUNC_2(&VAR_4->spinlock);

 return FUNC_3(VAR_2, "%#lx\n", VAR_3);
}
