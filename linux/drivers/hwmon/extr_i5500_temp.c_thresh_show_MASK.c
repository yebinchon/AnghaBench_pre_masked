
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (char*,char*,long) ;
 struct pci_dev* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_0->parent);
 int VAR_4 = FUNC_3(VAR_1)->index;
 long VAR_5;
 u16 VAR_6;

 FUNC_0(VAR_3, VAR_4, &VAR_6);
 VAR_5 = VAR_6 * 500;

 return FUNC_1(VAR_2, "%ld\n", VAR_5);
}
