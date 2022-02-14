
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_config {unsigned long* ctxid_pid; size_t ctxid_idx; } ;
struct etm_drvdata {int spinlock; struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct etm_drvdata* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,unsigned long) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
         struct device_attribute *VAR_4, char *VAR_5)
{
 unsigned long VAR_6;
 struct etm_drvdata *VAR_7 = FUNC_0(VAR_3->parent);
 struct etm_config *VAR_8 = &VAR_7->config;





 if (FUNC_4(VAR_1) != &VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_7->spinlock);
 VAR_6 = VAR_8->ctxid_pid[VAR_8->ctxid_idx];
 FUNC_2(&VAR_7->spinlock);

 return FUNC_3(VAR_5, "%#lx\n", VAR_6);
}
