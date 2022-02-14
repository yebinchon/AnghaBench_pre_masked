
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct edac_pci_dev_attribute {int value; int (* store ) (int ,char const*,size_t) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_1,
    struct attribute *VAR_2, const char *VAR_3,
    size_t VAR_4)
{
 struct edac_pci_dev_attribute *VAR_5;
 VAR_5 = (struct edac_pci_dev_attribute *)VAR_2;

 if (VAR_5->store)
  return VAR_5->store(VAR_5->value, VAR_3, VAR_4);
 return -VAR_0;
}
