
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnv_phb {int msi32_support; void* msi_base; int msi_setup; TYPE_1__* hose; int msi_bmp; } ;
typedef int __be32 ;
struct TYPE_2__ {int global_number; int dn; } ;


 void* FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int *,unsigned int,int ) ;
 int * FUNC_2 (int ,char*,int *) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,unsigned int,void*) ;

__attribute__((used)) static void FUNC_5(struct pnv_phb *VAR_1)
{
 unsigned int VAR_2;
 const __be32 *VAR_3 = FUNC_2(VAR_1->hose->dn,
          "ibm,opal-msi-ranges", ((void*)0));
 if (!VAR_3) {

  VAR_3 = FUNC_2(VAR_1->hose->dn, "msi-ranges", ((void*)0));
 }
 if (!VAR_3)
  return;

 VAR_1->msi_base = FUNC_0(VAR_3);
 VAR_2 = FUNC_0(VAR_3 + 1);
 if (FUNC_1(&VAR_1->msi_bmp, VAR_2, VAR_1->hose->dn)) {
  FUNC_3("PCI %d: Failed to allocate MSI bitmap !\n",
         VAR_1->hose->global_number);
  return;
 }

 VAR_1->msi_setup = VAR_0;
 VAR_1->msi32_support = 1;
 FUNC_4("  Allocated bitmap for %d MSIs (base IRQ 0x%x)\n",
  VAR_2, VAR_1->msi_base);
}
