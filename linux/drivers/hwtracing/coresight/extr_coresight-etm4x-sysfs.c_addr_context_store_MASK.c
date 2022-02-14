
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct etmv4_config {size_t addr_idx; int* addr_acc; } ;
struct etmv4_drvdata {int numcidc; int numvmidc; int spinlock; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 struct etmv4_drvdata* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 u8 VAR_5;
 unsigned long VAR_6;
 struct etmv4_drvdata *VAR_7 = FUNC_1(VAR_1->parent);
 struct etmv4_config *VAR_8 = &VAR_7->config;

 if (FUNC_2(VAR_3, 16, &VAR_6))
  return -VAR_0;
 if ((VAR_7->numcidc <= 1) && (VAR_7->numvmidc <= 1))
  return -VAR_0;
 if (VAR_6 >= (VAR_7->numcidc >= VAR_7->numvmidc ?
       VAR_7->numcidc : VAR_7->numvmidc))
  return -VAR_0;

 FUNC_3(&VAR_7->spinlock);
 VAR_5 = VAR_8->addr_idx;

 VAR_8->addr_acc[VAR_5] &= ~(FUNC_0(4) | FUNC_0(5) | FUNC_0(6));
 VAR_8->addr_acc[VAR_5] |= (VAR_6 << 4);
 FUNC_4(&VAR_7->spinlock);
 return VAR_4;
}
