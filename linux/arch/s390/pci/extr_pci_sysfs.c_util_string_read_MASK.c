
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int util_str; } ;
struct pci_dev {int dummy; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 struct device* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,size_t,int *,int ,int) ;
 struct pci_dev* FUNC_2 (struct device*) ;
 struct zpci_dev* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_0, struct kobject *VAR_1,
    struct bin_attribute *VAR_2, char *VAR_3,
    loff_t VAR_4, size_t VAR_5)
{
 struct device *VAR_6 = FUNC_0(VAR_1);
 struct pci_dev *VAR_7 = FUNC_2(VAR_6);
 struct zpci_dev *VAR_8 = FUNC_3(VAR_7);

 return FUNC_1(VAR_3, VAR_5, &VAR_4, VAR_8->util_str,
           sizeof(VAR_8->util_str));
}
