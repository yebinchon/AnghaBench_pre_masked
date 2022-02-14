
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct omap_iommu {int nr_tlb_entries; } ;
struct cr_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct omap_iommu*,struct cr_regs*,int) ;
 int FUNC_1 (struct omap_iommu*,struct cr_regs*,struct seq_file*) ;
 struct cr_regs* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct cr_regs*) ;

__attribute__((used)) static size_t FUNC_4(struct omap_iommu *VAR_1, struct seq_file *VAR_2)
{
 int VAR_3, VAR_4;
 struct cr_regs *VAR_5;

 VAR_4 = VAR_1->nr_tlb_entries;

 VAR_5 = FUNC_2(VAR_4, sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return 0;

 VAR_4 = FUNC_0(VAR_1, VAR_5, VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_1(VAR_1, VAR_5 + VAR_3, VAR_2);
 FUNC_3(VAR_5);

 return 0;
}
