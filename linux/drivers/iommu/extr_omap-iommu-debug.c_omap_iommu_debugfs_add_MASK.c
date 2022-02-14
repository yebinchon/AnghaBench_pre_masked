
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu {int nr_tlb_entries; struct dentry* debug_dir; int name; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,struct dentry*,struct omap_iommu*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(struct omap_iommu *VAR_4)
{
 struct dentry *VAR_5;

 if (!VAR_0)
  return;

 VAR_5 = FUNC_0(VAR_4->name, VAR_0);
 VAR_4->debug_dir = VAR_5;

 FUNC_2("nr_tlb_entries", 0400, VAR_5, &VAR_4->nr_tlb_entries);
 FUNC_1("regs", 0400, VAR_5, VAR_4, &VAR_2);
 FUNC_1("tlb", 0400, VAR_5, VAR_4, &VAR_3);
 FUNC_1("pagetable", 0400, VAR_5, VAR_4, &VAR_1);
}
