
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_bus {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read ) (struct pci_bus*,unsigned int,int,int,int *) ;} ;


 int VAR_0 ;
 struct pci_bus* FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int,int *) ;

int FUNC_2(unsigned int VAR_1, unsigned int VAR_2,
    unsigned int VAR_3, int VAR_4, int VAR_5, u32 *VAR_6)
{
 struct pci_bus *VAR_7 = FUNC_0(VAR_1, VAR_2);

 if (!VAR_7)
  return VAR_0;
 return VAR_7->ops->read(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
}
