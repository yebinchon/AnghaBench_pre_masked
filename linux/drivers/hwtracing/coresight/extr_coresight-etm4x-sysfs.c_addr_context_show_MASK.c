
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct etmv4_config {size_t addr_idx; int * addr_acc; } ;
struct etmv4_drvdata {int spinlock; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 unsigned long FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 struct etmv4_drvdata* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 u8 VAR_4;
 unsigned long VAR_5;
 struct etmv4_drvdata *VAR_6 = FUNC_1(VAR_1->parent);
 struct etmv4_config *VAR_7 = &VAR_6->config;

 FUNC_3(&VAR_6->spinlock);
 VAR_4 = VAR_7->addr_idx;

 VAR_5 = FUNC_0(VAR_7->addr_acc[VAR_4], 4, 6);
 FUNC_4(&VAR_6->spinlock);
 return FUNC_2(VAR_3, VAR_0, "%#lx\n", VAR_5);
}
