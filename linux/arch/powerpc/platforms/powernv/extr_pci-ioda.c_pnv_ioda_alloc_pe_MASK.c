
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_pe_num; int pe_alloc; } ;
struct pnv_phb {TYPE_1__ ioda; } ;
struct pnv_ioda_pe {int dummy; } ;


 struct pnv_ioda_pe* FUNC_0 (struct pnv_phb*,long) ;
 int FUNC_1 (long,int ) ;

__attribute__((used)) static struct pnv_ioda_pe *FUNC_2(struct pnv_phb *VAR_0)
{
 long VAR_1;

 for (VAR_1 = VAR_0->ioda.total_pe_num - 1; VAR_1 >= 0; VAR_1--) {
  if (!FUNC_1(VAR_1, VAR_0->ioda.pe_alloc))
   return FUNC_0(VAR_0, VAR_1);
 }

 return ((void*)0);
}
