
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ir_table {unsigned long* bitmap; int base; } ;
struct intel_iommu {struct ir_table* ir_table; int name; int qi; int seq_id; int ir_domain; int ir_msi_domain; int node; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct page*,int ) ;
 struct page* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long*) ;
 unsigned long* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct intel_iommu*) ;
 int FUNC_7 (struct intel_iommu*) ;
 scalar_t__ FUNC_8 (struct intel_iommu*) ;
 int FUNC_9 (int,struct intel_iommu*) ;
 int VAR_6 ;
 int FUNC_10 (struct intel_iommu*) ;
 int VAR_7 ;
 int FUNC_11 (struct intel_iommu*) ;
 scalar_t__ FUNC_12 (struct intel_iommu*) ;
 int FUNC_13 (struct intel_iommu*,int ) ;
 scalar_t__ FUNC_14 (struct intel_iommu*) ;
 struct fwnode_handle* FUNC_15 (char*,int ) ;
 int FUNC_16 (int ,int ,int ,struct fwnode_handle*,int *,struct intel_iommu*) ;
 int FUNC_17 (struct fwnode_handle*) ;
 int FUNC_18 () ;
 int FUNC_19 (struct ir_table*) ;
 struct ir_table* FUNC_20 (int,int) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (char*,...) ;
 int FUNC_23 (char*,int ) ;
 int FUNC_24 (char*,int ) ;

__attribute__((used)) static int FUNC_25(struct intel_iommu *VAR_8)
{
 struct ir_table *VAR_9;
 struct fwnode_handle *VAR_10;
 unsigned long *VAR_11;
 struct page *VAR_12;

 if (VAR_8->ir_table)
  return 0;

 VAR_9 = FUNC_20(sizeof(struct ir_table), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_8->node, VAR_2 | VAR_5,
     VAR_3);
 if (!VAR_12) {
  FUNC_22("IR%d: failed to allocate pages of order %d\n",
         VAR_8->seq_id, VAR_3);
  goto out_free_table;
 }

 VAR_11 = FUNC_5(VAR_4, VAR_1);
 if (VAR_11 == ((void*)0)) {
  FUNC_22("IR%d: failed to allocate bitmap\n", VAR_8->seq_id);
  goto out_free_pages;
 }

 VAR_10 = FUNC_15("INTEL-IR", VAR_8->seq_id);
 if (!VAR_10)
  goto out_free_bitmap;

 VAR_8->ir_domain =
  FUNC_16(FUNC_3(),
         0, VAR_4,
         VAR_10, &VAR_7,
         VAR_8);
 FUNC_17(VAR_10);
 if (!VAR_8->ir_domain) {
  FUNC_22("IR%d: failed to allocate irqdomain\n", VAR_8->seq_id);
  goto out_free_bitmap;
 }
 VAR_8->ir_msi_domain =
  FUNC_2(VAR_8->ir_domain,
       "INTEL-IR-MSI",
       VAR_8->seq_id);

 VAR_9->base = FUNC_21(VAR_12);
 VAR_9->bitmap = VAR_11;
 VAR_8->ir_table = VAR_9;





 if (!VAR_8->qi) {



  FUNC_9(-1, VAR_8);
  FUNC_7(VAR_8);

  if (FUNC_8(VAR_8)) {
   FUNC_22("Failed to enable queued invalidation\n");
   goto out_free_bitmap;
  }
 }

 FUNC_10(VAR_8);

 if (FUNC_14(VAR_8)) {
  if (!FUNC_18()) {
   FUNC_24("IRQ remapping was enabled on %s but we are not in kdump mode\n",
    VAR_8->name);
   FUNC_6(VAR_8);
   FUNC_11(VAR_8);
  } else if (FUNC_12(VAR_8))
   FUNC_22("Failed to copy IR table for %s from previous kernel\n",
          VAR_8->name);
  else
   FUNC_23("Copied IR table for %s from previous kernel\n",
    VAR_8->name);
 }

 FUNC_13(VAR_8, VAR_6);

 return 0;

out_free_bitmap:
 FUNC_4(VAR_11);
out_free_pages:
 FUNC_0(VAR_12, VAR_3);
out_free_table:
 FUNC_19(VAR_9);

 VAR_8->ir_table = ((void*)0);

 return -VAR_0;
}
