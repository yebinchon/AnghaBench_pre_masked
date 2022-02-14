
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_config {unsigned long seq_idx; } ;
struct etmv4_drvdata {int nrseqstate; int spinlock; struct etmv4_config config; } ;
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
 unsigned long VAR_5;
 struct etmv4_drvdata *VAR_6 = FUNC_0(VAR_1->parent);
 struct etmv4_config *VAR_7 = &VAR_6->config;

 if (FUNC_1(VAR_3, 16, &VAR_5))
  return -VAR_0;
 if (VAR_5 >= VAR_6->nrseqstate - 1)
  return -VAR_0;





 FUNC_2(&VAR_6->spinlock);
 VAR_7->seq_idx = VAR_5;
 FUNC_3(&VAR_6->spinlock);
 return VAR_4;
}
