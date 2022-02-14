
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct devcd_entry {int datalen; int data; int (* read ) (char*,int ,size_t,int ,int ) ;} ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 struct devcd_entry* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct kobject*) ;
 int FUNC_2 (char*,int ,size_t,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_0, struct kobject *VAR_1,
          struct bin_attribute *VAR_2,
          char *VAR_3, loff_t VAR_4, size_t VAR_5)
{
 struct device *VAR_6 = FUNC_1(VAR_1);
 struct devcd_entry *VAR_7 = FUNC_0(VAR_6);

 return VAR_7->read(VAR_3, VAR_4, VAR_5, VAR_7->data, VAR_7->datalen);
}
