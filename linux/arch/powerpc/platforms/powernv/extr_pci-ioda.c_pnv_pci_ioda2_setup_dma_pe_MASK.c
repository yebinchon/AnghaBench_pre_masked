
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m32_pci_base; } ;
struct pnv_phb {TYPE_1__ ioda; } ;
struct TYPE_4__ {int * ops; int pgsizes; int max_levels; int max_dynamic_windows_supported; int tce32_size; scalar_t__ tce32_start; } ;
struct pnv_ioda_pe {unsigned long long tce_bypass_base; int flags; int pbus; TYPE_2__ table_group; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pnv_ioda_pe*,char*,int ) ;
 int FUNC_1 (struct pnv_phb*) ;
 int FUNC_2 (struct pnv_ioda_pe*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct pnv_ioda_pe*) ;
 int FUNC_4 (struct pnv_ioda_pe*) ;

__attribute__((used)) static void FUNC_5(struct pnv_phb *VAR_5,
           struct pnv_ioda_pe *VAR_6)
{
 int64_t VAR_7;

 if (!FUNC_4(VAR_6))
  return;


 VAR_6->tce_bypass_base = 1ull << 59;


 FUNC_0(VAR_6, "Setting up 32-bit TCE table at 0..%08x\n",
  VAR_5->ioda.m32_pci_base);


 VAR_6->table_group.tce32_start = 0;
 VAR_6->table_group.tce32_size = VAR_5->ioda.m32_pci_base;
 VAR_6->table_group.max_dynamic_windows_supported =
   VAR_0;
 VAR_6->table_group.max_levels = VAR_3;
 VAR_6->table_group.pgsizes = FUNC_1(VAR_5);




 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  return;

 if (VAR_6->flags & (VAR_1 | VAR_2))
  FUNC_2(VAR_6, VAR_6->pbus);
}
