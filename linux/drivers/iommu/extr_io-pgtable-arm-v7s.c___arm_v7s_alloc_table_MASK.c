
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_pgtable_cfg {int coherent_walk; struct device* iommu_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct io_pgtable_cfg cfg; } ;
struct arm_v7s_io_pgtable {int l2_tables; TYPE_1__ iop; } ;
typedef scalar_t__ phys_addr_t ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;
typedef scalar_t__ arm_v7s_iopte ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 scalar_t__ FUNC_3 (struct device*,void*,size_t,int ) ;
 scalar_t__ FUNC_4 (struct device*,scalar_t__) ;
 int FUNC_5 (struct device*,scalar_t__,size_t,int ) ;
 int FUNC_6 (unsigned long,int ) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (int ,void*) ;
 void* FUNC_9 (int ,int ) ;
 int FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (void*) ;

__attribute__((used)) static void *FUNC_12(int VAR_3, gfp_t VAR_4,
       struct arm_v7s_io_pgtable *VAR_5)
{
 struct io_pgtable_cfg *VAR_6 = &VAR_5->iop.cfg;
 struct device *VAR_7 = VAR_6->iommu_dev;
 phys_addr_t VAR_8;
 dma_addr_t VAR_9;
 size_t VAR_10 = FUNC_0(VAR_3);
 void *VAR_11 = ((void*)0);

 if (VAR_3 == 1)
  VAR_11 = (void *)FUNC_1(
   VAR_2 | VAR_0, FUNC_7(VAR_10));
 else if (VAR_3 == 2)
  VAR_11 = FUNC_9(VAR_5->l2_tables, VAR_4);
 VAR_8 = FUNC_11(VAR_11);
 if (VAR_8 != (arm_v7s_iopte)VAR_8) {

  FUNC_2(VAR_7, "Page table does not fit in PTE: %pa", &VAR_8);
  goto out_free;
 }
 if (VAR_11 && !VAR_6->coherent_walk) {
  VAR_9 = FUNC_3(VAR_7, VAR_11, VAR_10, VAR_1);
  if (FUNC_4(VAR_7, VAR_9))
   goto out_free;





  if (VAR_9 != VAR_8)
   goto out_unmap;
 }
 if (VAR_3 == 2)
  FUNC_10(VAR_11);
 return VAR_11;

out_unmap:
 FUNC_2(VAR_7, "Cannot accommodate DMA translation for IOMMU page tables\n");
 FUNC_5(VAR_7, VAR_9, VAR_10, VAR_1);
out_free:
 if (VAR_3 == 1)
  FUNC_6((unsigned long)VAR_11, FUNC_7(VAR_10));
 else
  FUNC_8(VAR_5->l2_tables, VAR_11);
 return ((void*)0);
}
