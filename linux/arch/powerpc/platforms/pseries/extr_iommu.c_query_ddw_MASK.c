
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
struct ddw_query_response {int dummy; } ;
struct TYPE_2__ {int buid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pci_dn* FUNC_2 (struct device_node*) ;
 int FUNC_3 (int *,char*,int const,int,int ,int ,int) ;
 struct device_node* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int const,int,int,int*,int,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_0, const u32 *VAR_1,
   struct ddw_query_response *VAR_2)
{
 struct device_node *VAR_3;
 struct pci_dn *VAR_4;
 u32 VAR_5;
 u64 VAR_6;
 int VAR_7;







 VAR_3 = FUNC_4(VAR_0);
 VAR_4 = FUNC_2(VAR_3);
 VAR_6 = VAR_4->phb->buid;
 VAR_5 = ((VAR_4->busno << 16) | (VAR_4->devfn << 8));

 VAR_7 = FUNC_5(VAR_1[0], 3, 5, (u32 *)VAR_2,
    VAR_5, FUNC_0(VAR_6), FUNC_1(VAR_6));
 FUNC_3(&VAR_0->dev, "ibm,query-pe-dma-windows(%x) %x %x %x"
  " returned %d\n", VAR_1[0], VAR_5, FUNC_0(VAR_6),
  FUNC_1(VAR_6), VAR_7);
 return VAR_7;
}
