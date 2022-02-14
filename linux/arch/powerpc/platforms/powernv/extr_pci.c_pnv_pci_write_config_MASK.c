
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pnv_phb {int flags; } ;
struct pci_dn {TYPE_1__* phb; } ;
struct pci_bus {int dummy; } ;
struct TYPE_2__ {struct pnv_phb* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dn* FUNC_0 (struct pci_bus*,unsigned int) ;
 int FUNC_1 (struct pci_dn*) ;
 int FUNC_2 (struct pci_dn*,int,int,int ) ;
 int FUNC_3 (struct pci_dn*) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_2,
    unsigned int VAR_3,
    int VAR_4, int VAR_5, u32 VAR_6)
{
 struct pci_dn *VAR_7;
 struct pnv_phb *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_7)
  return VAR_0;

 if (!FUNC_1(VAR_7))
  return VAR_0;

 VAR_9 = FUNC_2(VAR_7, VAR_4, VAR_5, VAR_6);
 VAR_8 = VAR_7->phb->private_data;
 if (!(VAR_8->flags & VAR_1))
  FUNC_3(VAR_7);

 return VAR_9;
}
