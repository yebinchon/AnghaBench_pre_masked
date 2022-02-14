
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int numa_node; } ;
struct pci_dev {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dev* FUNC_0 (int ,int ,struct pci_dev*) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_2)
{
 unsigned int VAR_3 = 0;
 struct pci_dev *VAR_4 = ((void*)0);

 do {
  VAR_4 = FUNC_0(VAR_1,
          VAR_0,
          VAR_4);
  if (VAR_4) {




   VAR_3++;

  }
 } while (VAR_4);

 return VAR_3;
}
