
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


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct etm_drvdata* FUNC_1 (int ) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
    struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 u8 VAR_7;
 int VAR_8;
 unsigned long VAR_9;
 struct etm_drvdata *VAR_10 = FUNC_1(VAR_3->parent);
 struct etm_config *VAR_11 = &VAR_10->config;

 VAR_8 = FUNC_2(VAR_5, 16, &VAR_9);
 if (VAR_8)
  return VAR_8;

 FUNC_3(&VAR_10->spinlock);
 VAR_7 = VAR_11->addr_idx;
 if (!(VAR_11->addr_type[VAR_7] == VAR_1 ||
       VAR_11->addr_type[VAR_7] == VAR_2)) {
  FUNC_4(&VAR_10->spinlock);
  return -VAR_0;
 }

 VAR_11->addr_val[VAR_7] = VAR_9;
 VAR_11->addr_type[VAR_7] = VAR_2;
 VAR_11->startstop_ctrl |= (1 << VAR_7);
 VAR_11->enable_ctrl1 |= FUNC_0(25);
 FUNC_4(&VAR_10->spinlock);

 return VAR_6;
}
