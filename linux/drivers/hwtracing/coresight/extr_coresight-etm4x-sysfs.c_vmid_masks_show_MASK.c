
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_config {unsigned long vmid_mask0; unsigned long vmid_mask1; } ;
struct etmv4_drvdata {int spinlock; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 struct etmv4_drvdata *VAR_6 = FUNC_0(VAR_1->parent);
 struct etmv4_config *VAR_7 = &VAR_6->config;

 FUNC_2(&VAR_6->spinlock);
 VAR_4 = VAR_7->vmid_mask0;
 VAR_5 = VAR_7->vmid_mask1;
 FUNC_3(&VAR_6->spinlock);
 return FUNC_1(VAR_3, VAR_0, "%#lx %#lx\n", VAR_4, VAR_5);
}
