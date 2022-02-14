
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct etmv4_config {size_t addr_idx; scalar_t__* addr_type; scalar_t__* addr_val; } ;
struct etmv4_drvdata {int spinlock; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
         struct device_attribute *VAR_5,
         char *VAR_6)
{
 u8 VAR_7;
 unsigned long VAR_8;
 struct etmv4_drvdata *VAR_9 = FUNC_0(VAR_4->parent);
 struct etmv4_config *VAR_10 = &VAR_9->config;

 FUNC_2(&VAR_9->spinlock);
 VAR_7 = VAR_10->addr_idx;

 if (!(VAR_10->addr_type[VAR_7] == VAR_1 ||
       VAR_10->addr_type[VAR_7] == VAR_2)) {
  FUNC_3(&VAR_9->spinlock);
  return -VAR_0;
 }

 VAR_8 = (unsigned long)VAR_10->addr_val[VAR_7];
 FUNC_3(&VAR_9->spinlock);
 return FUNC_1(VAR_6, VAR_3, "%#lx\n", VAR_8);
}
