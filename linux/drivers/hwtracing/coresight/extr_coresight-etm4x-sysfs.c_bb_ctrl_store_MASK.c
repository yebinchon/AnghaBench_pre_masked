
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_config {unsigned long bb_ctrl; } ;
struct etmv4_drvdata {int trcbb; scalar_t__ nr_addr_cmp; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 scalar_t__ FUNC_0 (unsigned long,int ,int) ;
 size_t VAR_0 ;
 struct etmv4_drvdata* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 struct etmv4_drvdata *VAR_6 = FUNC_1(VAR_1->parent);
 struct etmv4_config *VAR_7 = &VAR_6->config;

 if (FUNC_2(VAR_3, 16, &VAR_5))
  return -VAR_0;
 if (VAR_6->trcbb == 0)
  return -VAR_0;
 if (!VAR_6->nr_addr_cmp)
  return -VAR_0;




 if (FUNC_0(VAR_5, 0, 7) > VAR_6->nr_addr_cmp)
  return -VAR_0;

 VAR_7->bb_ctrl = VAR_5;
 return VAR_4;
}
