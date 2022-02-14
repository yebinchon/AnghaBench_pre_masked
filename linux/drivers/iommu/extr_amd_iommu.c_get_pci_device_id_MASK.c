
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static inline u16 FUNC_2(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1);
}
