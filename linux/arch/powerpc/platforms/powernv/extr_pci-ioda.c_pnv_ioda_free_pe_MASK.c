
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pe_alloc; } ;
struct pnv_phb {TYPE_1__ ioda; } ;
struct pnv_ioda_pe {unsigned int pe_number; int npucomp; int pdev; struct pnv_phb* phb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pnv_ioda_pe*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct pnv_ioda_pe *VAR_0)
{
 struct pnv_phb *VAR_1 = VAR_0->phb;
 unsigned int VAR_2 = VAR_0->pe_number;

 FUNC_0(VAR_0->pdev);
 FUNC_0(VAR_0->npucomp);
 FUNC_2(VAR_0->npucomp);
 FUNC_3(VAR_0, 0, sizeof(struct pnv_ioda_pe));
 FUNC_1(VAR_2, VAR_1->ioda.pe_alloc);
}
