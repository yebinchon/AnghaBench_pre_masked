
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u64 ;
struct etmv4_config {size_t addr_idx; scalar_t__* addr_type; scalar_t__* addr_val; } ;
struct etmv4_drvdata {int spinlock; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
     struct device_attribute *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 u8 VAR_8;
 unsigned long VAR_9;
 struct etmv4_drvdata *VAR_10 = FUNC_0(VAR_4->parent);
 struct etmv4_config *VAR_11 = &VAR_10->config;

 if (FUNC_1(VAR_6, 16, &VAR_9))
  return -VAR_0;

 FUNC_2(&VAR_10->spinlock);
 VAR_8 = VAR_11->addr_idx;
 if (!(VAR_11->addr_type[VAR_8] == VAR_2 ||
       VAR_11->addr_type[VAR_8] == VAR_3)) {
  FUNC_3(&VAR_10->spinlock);
  return -VAR_1;
 }

 VAR_11->addr_val[VAR_8] = (u64)VAR_9;
 VAR_11->addr_type[VAR_8] = VAR_3;
 FUNC_3(&VAR_10->spinlock);
 return VAR_7;
}
