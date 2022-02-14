
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_config {int vinst_ctrl; } ;
struct etmv4_drvdata {unsigned long s_ex_level; int spinlock; struct etmv4_config config; } ;
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
 unsigned long VAR_5;
 struct etmv4_drvdata *VAR_6 = FUNC_1(VAR_1->parent);
 struct etmv4_config *VAR_7 = &VAR_6->config;

 if (FUNC_2(VAR_3, 16, &VAR_5))
  return -VAR_0;

 FUNC_3(&VAR_6->spinlock);

 VAR_7->vinst_ctrl &= ~(FUNC_0(16) | FUNC_0(17) | FUNC_0(19));

 VAR_5 &= VAR_6->s_ex_level;
 VAR_7->vinst_ctrl |= (VAR_5 << 16);
 FUNC_4(&VAR_6->spinlock);
 return VAR_4;
}
