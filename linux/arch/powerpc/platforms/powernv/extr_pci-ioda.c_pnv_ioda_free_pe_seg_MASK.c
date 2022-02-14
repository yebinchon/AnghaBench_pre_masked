
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_pe_num; int reserved_pe_idx; } ;
struct pnv_phb {TYPE_1__ ioda; int opal_id; } ;
struct pnv_ioda_pe {unsigned int pe_number; struct pnv_phb* phb; } ;
typedef scalar_t__ int64_t ;


 unsigned int VAR_0 ;
 unsigned short VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,unsigned short,int,int) ;
 int FUNC_1 (struct pnv_ioda_pe*,char*,scalar_t__,unsigned short,int) ;

__attribute__((used)) static void FUNC_2(struct pnv_ioda_pe *VAR_4,
     unsigned short VAR_5,
     unsigned int *VAR_6)
{
 struct pnv_phb *VAR_7 = VAR_4->phb;
 int VAR_8;
 int64_t VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_7->ioda.total_pe_num; VAR_8++) {
  if (VAR_6[VAR_8] != VAR_4->pe_number)
   continue;

  if (VAR_5 == VAR_1)
   VAR_9 = FUNC_0(VAR_7->opal_id,
     VAR_7->ioda.reserved_pe_idx, VAR_5,
     VAR_8 / VAR_3,
     VAR_8 % VAR_3);
  else
   VAR_9 = FUNC_0(VAR_7->opal_id,
     VAR_7->ioda.reserved_pe_idx, VAR_5, 0, VAR_8);

  if (VAR_9 != VAR_2)
   FUNC_1(VAR_4, "Error %lld unmapping (%d) segment#%d\n",
    VAR_9, VAR_5, VAR_8);

  VAR_6[VAR_8] = VAR_0;
 }
}
