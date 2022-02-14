
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u64 ;
struct etmv4_config {int addr_idx; scalar_t__* addr_type; int mode; void** addr_val; } ;
struct etmv4_drvdata {int spinlock; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (struct etmv4_drvdata*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,char*,unsigned long*,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
    struct device_attribute *VAR_6,
    const char *VAR_7, size_t VAR_8)
{
 u8 VAR_9;
 unsigned long VAR_10, VAR_11;
 struct etmv4_drvdata *VAR_12 = FUNC_0(VAR_5->parent);
 struct etmv4_config *VAR_13 = &VAR_12->config;

 if (FUNC_4(VAR_7, "%lx %lx", &VAR_10, &VAR_11) != 2)
  return -VAR_0;

 if (VAR_10 > VAR_11)
  return -VAR_0;

 FUNC_2(&VAR_12->spinlock);
 VAR_9 = VAR_13->addr_idx;
 if (VAR_9 % 2 != 0) {
  FUNC_3(&VAR_12->spinlock);
  return -VAR_1;
 }

 if (!((VAR_13->addr_type[VAR_9] == VAR_2 &&
        VAR_13->addr_type[VAR_9 + 1] == VAR_2) ||
       (VAR_13->addr_type[VAR_9] == VAR_3 &&
        VAR_13->addr_type[VAR_9 + 1] == VAR_3))) {
  FUNC_3(&VAR_12->spinlock);
  return -VAR_1;
 }

 VAR_13->addr_val[VAR_9] = (u64)VAR_10;
 VAR_13->addr_type[VAR_9] = VAR_3;
 VAR_13->addr_val[VAR_9 + 1] = (u64)VAR_11;
 VAR_13->addr_type[VAR_9 + 1] = VAR_3;




 FUNC_1(VAR_12,
         VAR_13->mode & VAR_4 ? 1 : 0);

 FUNC_3(&VAR_12->spinlock);
 return VAR_8;
}
