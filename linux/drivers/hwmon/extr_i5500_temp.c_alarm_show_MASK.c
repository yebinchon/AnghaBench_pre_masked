
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_1 (char*,char*,unsigned int) ;
 struct pci_dev* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_1->parent);
 int VAR_5 = FUNC_3(VAR_2)->index;
 u8 VAR_6;

 FUNC_0(VAR_4, VAR_0, &VAR_6);
 return FUNC_1(VAR_3, "%u\n", (unsigned int)VAR_6 & (1 << VAR_5));
}
