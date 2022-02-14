
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


 size_t FUNC_0 (int ,int,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct etmv4_drvdata* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
     struct device_attribute *VAR_5,
     char *VAR_6)
{
 ssize_t VAR_7;
 u8 VAR_8, VAR_9;
 struct etmv4_drvdata *VAR_10 = FUNC_1(VAR_4->parent);
 struct etmv4_config *VAR_11 = &VAR_10->config;

 FUNC_3(&VAR_10->spinlock);
 VAR_8 = VAR_11->addr_idx;

 VAR_9 = FUNC_0(VAR_11->addr_acc[VAR_8], 2, 3);
 VAR_7 = FUNC_2(VAR_6, VAR_3, "%s\n", VAR_9 == VAR_1 ? "none" :
   (VAR_9 == VAR_0 ? "ctxid" :
   (VAR_9 == VAR_2 ? "vmid" : "all")));
 FUNC_4(&VAR_10->spinlock);
 return VAR_7;
}
