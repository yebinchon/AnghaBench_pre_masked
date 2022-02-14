
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; int end; } ;
struct TYPE_3__ {unsigned long m64_segsize; int m64_base; scalar_t__ reserved_pe_idx; int total_pe_num; } ;
struct pnv_phb {int opal_id; TYPE_2__* hose; TYPE_1__ ioda; } ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {int global_number; struct resource* mem_resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,unsigned long,int ,int) ;
 int FUNC_3 (char*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pnv_phb *VAR_7)
{
 struct resource *VAR_8;
 int VAR_9;






 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  unsigned long VAR_10, VAR_11 = VAR_7->ioda.m64_segsize;
  int64_t VAR_12;

  VAR_10 = VAR_7->ioda.m64_base +
         VAR_9 * VAR_6 * VAR_11;
  VAR_12 = FUNC_2(VAR_7->opal_id,
    VAR_3, VAR_9, VAR_10, 0,
    VAR_6 * VAR_11);
  if (VAR_12 != VAR_4) {
   FUNC_3("  Error %lld setting M64 PHB#%x-BAR#%d\n",
    VAR_12, VAR_7->hose->global_number, VAR_9);
   goto fail;
  }

  VAR_12 = FUNC_1(VAR_7->opal_id,
    VAR_3, VAR_9,
    VAR_2);
  if (VAR_12 != VAR_4) {
   FUNC_3("  Error %lld enabling M64 PHB#%x-BAR#%d\n",
    VAR_12, VAR_7->hose->global_number, VAR_9);
   goto fail;
  }
 }





 VAR_8 = &VAR_7->hose->mem_resources[1];
 if (VAR_7->ioda.reserved_pe_idx == 0)
  VAR_8->start += (2 * VAR_7->ioda.m64_segsize);
 else if (VAR_7->ioda.reserved_pe_idx == (VAR_7->ioda.total_pe_num - 1))
  VAR_8->end -= (2 * VAR_7->ioda.m64_segsize);
 else
  FUNC_0(1, "Wrong reserved PE#%x on PHB#%x\n",
       VAR_7->ioda.reserved_pe_idx, VAR_7->hose->global_number);

 return 0;

fail:
 for ( ; VAR_9 >= 0; VAR_9--)
  FUNC_1(VAR_7->opal_id,
   VAR_3, VAR_9, VAR_1);

 return -VAR_0;
}
