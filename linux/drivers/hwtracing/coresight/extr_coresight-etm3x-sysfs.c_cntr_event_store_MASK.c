
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_config {unsigned long* cntr_event; size_t cntr_idx; } ;
struct etm_drvdata {int spinlock; struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 struct etm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 struct etm_drvdata *VAR_7 = FUNC_0(VAR_1->parent);
 struct etm_config *VAR_8 = &VAR_7->config;

 VAR_5 = FUNC_1(VAR_3, 16, &VAR_6);
 if (VAR_5)
  return VAR_5;

 FUNC_2(&VAR_7->spinlock);
 VAR_8->cntr_event[VAR_8->cntr_idx] = VAR_6 & VAR_0;
 FUNC_3(&VAR_7->spinlock);

 return VAR_4;
}
