
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct etm_config {int addr_idx; scalar_t__* addr_type; unsigned long* addr_val; int enable_ctrl1; } ;
struct etm_drvdata {int spinlock; struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct etm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*,unsigned long*,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
         struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 u8 VAR_8;
 unsigned long VAR_9, VAR_10;
 struct etm_drvdata *VAR_11 = FUNC_0(VAR_4->parent);
 struct etm_config *VAR_12 = &VAR_11->config;

 if (FUNC_3(VAR_6, "%lx %lx", &VAR_9, &VAR_10) != 2)
  return -VAR_0;

 if (VAR_9 > VAR_10)
  return -VAR_0;

 FUNC_1(&VAR_11->spinlock);
 VAR_8 = VAR_12->addr_idx;
 if (VAR_8 % 2 != 0) {
  FUNC_2(&VAR_11->spinlock);
  return -VAR_1;
 }
 if (!((VAR_12->addr_type[VAR_8] == VAR_2 &&
        VAR_12->addr_type[VAR_8 + 1] == VAR_2) ||
       (VAR_12->addr_type[VAR_8] == VAR_3 &&
        VAR_12->addr_type[VAR_8 + 1] == VAR_3))) {
  FUNC_2(&VAR_11->spinlock);
  return -VAR_1;
 }

 VAR_12->addr_val[VAR_8] = VAR_9;
 VAR_12->addr_type[VAR_8] = VAR_3;
 VAR_12->addr_val[VAR_8 + 1] = VAR_10;
 VAR_12->addr_type[VAR_8 + 1] = VAR_3;
 VAR_12->enable_ctrl1 |= (1 << (VAR_8/2));
 FUNC_2(&VAR_11->spinlock);

 return VAR_7;
}
