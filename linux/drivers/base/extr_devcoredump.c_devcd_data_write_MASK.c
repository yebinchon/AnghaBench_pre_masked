
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct devcd_entry {int del_wk; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 struct devcd_entry* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct kobject*) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_1, struct kobject *VAR_2,
    struct bin_attribute *VAR_3,
    char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 struct device *VAR_7 = FUNC_1(VAR_2);
 struct devcd_entry *VAR_8 = FUNC_0(VAR_7);

 FUNC_2(VAR_0, &VAR_8->del_wk, 0);

 return VAR_6;
}
