
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct etmv4_config {size_t cntr_idx; unsigned long* cntrldvr; } ;
struct etmv4_drvdata {int spinlock; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 u8 VAR_6;
 unsigned long VAR_7;
 struct etmv4_drvdata *VAR_8 = FUNC_0(VAR_2->parent);
 struct etmv4_config *VAR_9 = &VAR_8->config;

 if (FUNC_1(VAR_4, 16, &VAR_7))
  return -VAR_0;
 if (VAR_7 > VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_8->spinlock);
 VAR_6 = VAR_9->cntr_idx;
 VAR_9->cntrldvr[VAR_6] = VAR_7;
 FUNC_3(&VAR_8->spinlock);
 return VAR_5;
}
