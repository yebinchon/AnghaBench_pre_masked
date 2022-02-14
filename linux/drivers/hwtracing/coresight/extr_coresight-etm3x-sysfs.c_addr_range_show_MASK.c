
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct etm_config {int addr_idx; scalar_t__* addr_type; unsigned long* addr_val; } ;
struct etm_drvdata {int spinlock; struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct etm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,unsigned long,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
          struct device_attribute *VAR_4, char *VAR_5)
{
 u8 VAR_6;
 unsigned long VAR_7, VAR_8;
 struct etm_drvdata *VAR_9 = FUNC_0(VAR_3->parent);
 struct etm_config *VAR_10 = &VAR_9->config;

 FUNC_1(&VAR_9->spinlock);
 VAR_6 = VAR_10->addr_idx;
 if (VAR_6 % 2 != 0) {
  FUNC_2(&VAR_9->spinlock);
  return -VAR_0;
 }
 if (!((VAR_10->addr_type[VAR_6] == VAR_1 &&
        VAR_10->addr_type[VAR_6 + 1] == VAR_1) ||
       (VAR_10->addr_type[VAR_6] == VAR_2 &&
        VAR_10->addr_type[VAR_6 + 1] == VAR_2))) {
  FUNC_2(&VAR_9->spinlock);
  return -VAR_0;
 }

 VAR_7 = VAR_10->addr_val[VAR_6];
 VAR_8 = VAR_10->addr_val[VAR_6 + 1];
 FUNC_2(&VAR_9->spinlock);

 return FUNC_3(VAR_5, "%#lx %#lx\n", VAR_7, VAR_8);
}
