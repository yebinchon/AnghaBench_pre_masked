
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct etmv4_config {size_t seq_idx; unsigned long* seq_ctrl; } ;
struct etmv4_drvdata {int spinlock; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 u8 VAR_5;
 unsigned long VAR_6;
 struct etmv4_drvdata *VAR_7 = FUNC_0(VAR_1->parent);
 struct etmv4_config *VAR_8 = &VAR_7->config;

 if (FUNC_1(VAR_3, 16, &VAR_6))
  return -VAR_0;

 FUNC_2(&VAR_7->spinlock);
 VAR_5 = VAR_8->seq_idx;

 VAR_8->seq_ctrl[VAR_5] = VAR_6 & 0xFF;
 FUNC_3(&VAR_7->spinlock);
 return VAR_4;
}
