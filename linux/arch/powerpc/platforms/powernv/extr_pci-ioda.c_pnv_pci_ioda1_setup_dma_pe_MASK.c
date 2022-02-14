
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int dma32_count; scalar_t__* dma32_segmap; } ;
struct pnv_phb {TYPE_2__* hose; TYPE_1__ ioda; int opal_id; } ;
struct TYPE_8__ {int tce32_start; int tce32_size; } ;
struct pnv_ioda_pe {scalar_t__ pe_number; int flags; TYPE_3__ table_group; int pbus; } ;
struct page {int dummy; } ;
struct iommu_table {int it_offset; int it_page_shift; int it_size; int * it_ops; } ;
typedef scalar_t__ int64_t ;
struct TYPE_7__ {int node; int global_number; int bus; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct page*,int ) ;
 scalar_t__ FUNC_2 (void*) ;
 struct page* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct iommu_table*,int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_7 (struct iommu_table*) ;
 int FUNC_8 (void*,int ,unsigned int) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,unsigned int,int,scalar_t__,unsigned int,int ) ;
 void* FUNC_10 (struct page*) ;
 int FUNC_11 (int ,int ,unsigned int*) ;
 int FUNC_12 (struct pnv_ioda_pe*,char*,...) ;
 int FUNC_13 (struct pnv_ioda_pe*,char*,unsigned int,unsigned int,...) ;
 int FUNC_14 (struct pnv_ioda_pe*,char*) ;
 int VAR_7 ;
 int FUNC_15 (struct pnv_ioda_pe*,int ) ;
 int VAR_8 ;
 unsigned int FUNC_16 (struct pnv_ioda_pe*) ;
 int FUNC_17 (int ,int ,struct iommu_table*,TYPE_3__*) ;
 int FUNC_18 (struct iommu_table*,void*,unsigned int,unsigned int,int) ;
 struct iommu_table* FUNC_19 (int ) ;
 int FUNC_20 (struct iommu_table*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_21(struct pnv_phb *VAR_9,
           struct pnv_ioda_pe *VAR_10)
{

 struct page *VAR_11 = ((void*)0);
 struct iommu_table *VAR_12;
 unsigned int VAR_13, VAR_14 = 0;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int64_t VAR_20;
 void *VAR_21;




 VAR_13 = FUNC_16(VAR_10);
 if (!VAR_13)
  return;

 FUNC_11(VAR_9->hose->bus, VAR_8,
       &VAR_14);
 VAR_17 = (VAR_13 * VAR_9->ioda.dma32_count) / VAR_14;
 if (!VAR_17)
  VAR_17 = 1;







 do {
  for (VAR_16 = 0; VAR_16 <= VAR_9->ioda.dma32_count - VAR_17; VAR_16++) {
   for (VAR_18 = 0, VAR_19 = VAR_16; VAR_19 < VAR_16 + VAR_17; VAR_19++) {
    if (VAR_9->ioda.dma32_segmap[VAR_19] ==
        VAR_1)
     VAR_18++;
   }

   if (VAR_18 == VAR_17)
    goto found;
  }
 } while (--VAR_17);

 if (!VAR_17) {
  FUNC_14(VAR_10, "No available DMA32 segments\n");
  return;
 }

found:
 VAR_12 = FUNC_19(VAR_9->hose->node);
 if (FUNC_0(!VAR_12))
  return;

 FUNC_6(&VAR_10->table_group, VAR_9->hose->global_number,
   VAR_10->pe_number);
 FUNC_17(VAR_9->hose->node, 0, VAR_12, &VAR_10->table_group);


 FUNC_13(VAR_10, "DMA weight %d (%d), assigned (%d) %d DMA32 segments\n",
  VAR_13, VAR_14, VAR_16, VAR_17);
 FUNC_13(VAR_10, " Setting up 32-bit TCE table at %08x..%08x\n",
  VAR_16 * VAR_4,
  (VAR_16 + VAR_17) * VAR_4 - 1);
 VAR_15 = VAR_4 >> (VAR_2 - 3);
 VAR_11 = FUNC_3(VAR_9->hose->node, VAR_0,
       FUNC_4(VAR_15 * VAR_17));
 if (!VAR_11) {
  FUNC_12(VAR_10, " Failed to allocate a 32-bit TCE memory\n");
  goto fail;
 }
 VAR_21 = FUNC_10(VAR_11);
 FUNC_8(VAR_21, 0, VAR_15 * VAR_17);


 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  VAR_20 = FUNC_9(VAR_9->opal_id,
           VAR_10->pe_number,
           VAR_16 + VAR_19, 1,
           FUNC_2(VAR_21) + VAR_15 * VAR_19,
           VAR_15, VAR_3);
  if (VAR_20) {
   FUNC_12(VAR_10, " Failed to configure 32-bit TCE table, err %lld\n",
          VAR_20);
   goto fail;
  }
 }


 for (VAR_19 = VAR_16; VAR_19 < VAR_16 + VAR_17; VAR_19++)
  VAR_9->ioda.dma32_segmap[VAR_19] = VAR_10->pe_number;


 FUNC_18(VAR_12, VAR_21, VAR_15 * VAR_17,
      VAR_16 * VAR_4,
      VAR_2);

 VAR_12->it_ops = &VAR_7;
 VAR_10->table_group.tce32_start = VAR_12->it_offset << VAR_12->it_page_shift;
 VAR_10->table_group.tce32_size = VAR_12->it_size << VAR_12->it_page_shift;
 FUNC_5(VAR_12, VAR_9->hose->node, 0, 0);

 if (VAR_10->flags & (VAR_5 | VAR_6))
  FUNC_15(VAR_10, VAR_10->pbus);

 return;
 fail:

 if (VAR_11)
  FUNC_1(VAR_11, FUNC_4(VAR_15 * VAR_17));
 if (VAR_12) {
  FUNC_20(VAR_12, &VAR_10->table_group);
  FUNC_7(VAR_12);
 }
}
