
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct etm_config {size_t addr_idx; scalar_t__* addr_type; unsigned long* addr_val; int startstop_ctrl; int enable_ctrl1; } ;
struct etm_drvdata {int spinlock; struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct etm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
          struct device_attribute *VAR_5,
          const char *VAR_6, size_t VAR_7)
{
 u8 VAR_8;
 int VAR_9;
 unsigned long VAR_10;
 struct etm_drvdata *VAR_11 = FUNC_0(VAR_4->parent);
 struct etm_config *VAR_12 = &VAR_11->config;

 VAR_9 = FUNC_1(VAR_6, 16, &VAR_10);
 if (VAR_9)
  return VAR_9;

 FUNC_2(&VAR_11->spinlock);
 VAR_8 = VAR_12->addr_idx;
 if (!(VAR_12->addr_type[VAR_8] == VAR_2 ||
       VAR_12->addr_type[VAR_8] == VAR_3)) {
  FUNC_3(&VAR_11->spinlock);
  return -VAR_0;
 }

 VAR_12->addr_val[VAR_8] = VAR_10;
 VAR_12->addr_type[VAR_8] = VAR_3;
 VAR_12->startstop_ctrl |= (1 << (VAR_8 + 16));
 VAR_12->enable_ctrl1 |= VAR_1;
 FUNC_3(&VAR_11->spinlock);

 return VAR_7;
}
