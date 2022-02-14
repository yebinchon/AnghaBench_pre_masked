
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;
typedef long s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,long*) ;
 int FUNC_1 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_2 (char*,char*,long) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_3(VAR_2->parent);
 long VAR_6;
 u16 VAR_7;
 s8 VAR_8;

 FUNC_1(VAR_5, VAR_1, &VAR_7);
 FUNC_0(VAR_5, VAR_0, &VAR_8);
 VAR_6 = ((long)VAR_7 - VAR_8) * 500;

 return FUNC_2(VAR_4, "%ld\n", VAR_6);
}
