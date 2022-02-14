
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u64 ;
struct etmv4_config {size_t ctxid_idx; scalar_t__* ctxid_pid; } ;
struct etmv4_drvdata {int spinlock; int numcidc; int ctxid_size; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 u8 VAR_7;
 unsigned long VAR_8;
 struct etmv4_drvdata *VAR_9 = FUNC_0(VAR_3->parent);
 struct etmv4_config *VAR_10 = &VAR_9->config;
 if (FUNC_4(VAR_1) != &VAR_2)
  return -VAR_0;






 if (!VAR_9->ctxid_size || !VAR_9->numcidc)
  return -VAR_0;
 if (FUNC_1(VAR_5, 16, &VAR_8))
  return -VAR_0;

 FUNC_2(&VAR_9->spinlock);
 VAR_7 = VAR_10->ctxid_idx;
 VAR_10->ctxid_pid[VAR_7] = (u64)VAR_8;
 FUNC_3(&VAR_9->spinlock);
 return VAR_6;
}
