
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {scalar_t__ model; int opal_id; scalar_t__ regs; } ;
struct pnv_ioda_pe {int pe_number; struct pnv_phb* phb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct pnv_ioda_pe*) ;

__attribute__((used)) static inline void FUNC_2(struct pnv_ioda_pe *VAR_2)
{
 struct pnv_phb *VAR_3 = VAR_2->phb;

 if (VAR_3->model == VAR_1 && VAR_3->regs)
  FUNC_1(VAR_2);
 else
  FUNC_0(VAR_3->opal_id, VAR_0,
      VAR_2->pe_number, 0, 0, 0);
}
