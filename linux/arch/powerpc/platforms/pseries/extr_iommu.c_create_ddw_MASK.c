
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pci_dn {int busno; int devfn; TYPE_1__* phb; } ;
struct pci_dev {int dev; } ;
struct device_node {int dummy; } ;
struct ddw_create_response {int addr_lo; int addr_hi; int liobn; } ;
struct TYPE_2__ {int buid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pci_dn* FUNC_2 (struct device_node*) ;
 int FUNC_3 (int *,char*,int const,int,int ,int ,int,int,int,int ,int ,int ) ;
 struct device_node* FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int const,int,int,int*,int,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_0, const u32 *VAR_1,
   struct ddw_create_response *VAR_2, int VAR_3,
   int VAR_4)
{
 struct device_node *VAR_5;
 struct pci_dn *VAR_6;
 u32 VAR_7;
 u64 VAR_8;
 int VAR_9;







 VAR_5 = FUNC_4(VAR_0);
 VAR_6 = FUNC_2(VAR_5);
 VAR_8 = VAR_6->phb->buid;
 VAR_7 = ((VAR_6->busno << 16) | (VAR_6->devfn << 8));

 do {

  VAR_9 = FUNC_6(VAR_1[1], 5, 4, (u32 *)VAR_2,
    VAR_7, FUNC_0(VAR_8), FUNC_1(VAR_8),
    VAR_3, VAR_4);
 } while (FUNC_5(VAR_9));
 FUNC_3(&VAR_0->dev,
  "ibm,create-pe-dma-window(%x) %x %x %x %x %x returned %d "
  "(liobn = 0x%x starting addr = %x %x)\n", VAR_1[1],
   VAR_7, FUNC_0(VAR_8), FUNC_1(VAR_8), VAR_3,
   VAR_4, VAR_9, VAR_2->liobn, VAR_2->addr_hi, VAR_2->addr_lo);

 return VAR_9;
}
