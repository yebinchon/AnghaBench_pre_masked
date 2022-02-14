
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_config {unsigned long ctxid_mask0; unsigned long ctxid_mask1; } ;
struct etmv4_drvdata {int spinlock; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,char*,unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
    struct device_attribute *VAR_5,
    char *VAR_6)
{
 unsigned long VAR_7, VAR_8;
 struct etmv4_drvdata *VAR_9 = FUNC_0(VAR_4->parent);
 struct etmv4_config *VAR_10 = &VAR_9->config;





 if (FUNC_4(VAR_2) != &VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_9->spinlock);
 VAR_7 = VAR_10->ctxid_mask0;
 VAR_8 = VAR_10->ctxid_mask1;
 FUNC_3(&VAR_9->spinlock);
 return FUNC_1(VAR_6, VAR_1, "%#lx %#lx\n", VAR_7, VAR_8);
}
