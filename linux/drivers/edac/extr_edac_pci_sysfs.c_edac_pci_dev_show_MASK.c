
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct edac_pci_dev_attribute {int value; int (* show ) (int ,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_1, struct attribute *VAR_2,
     char *VAR_3)
{
 struct edac_pci_dev_attribute *VAR_4;
 VAR_4 = (struct edac_pci_dev_attribute *)VAR_2;

 if (VAR_4->show)
  return VAR_4->show(VAR_4->value, VAR_3);
 return -VAR_0;
}
