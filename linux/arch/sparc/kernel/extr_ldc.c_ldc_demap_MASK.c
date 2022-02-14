
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ldc_mtable_entry {scalar_t__ mte; scalar_t__ cookie; } ;
struct ldc_iommu {struct ldc_mtable_entry* page_table; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ldc_iommu *VAR_1, unsigned long VAR_2, u64 VAR_3,
        unsigned long VAR_4, unsigned long VAR_5)
{
 struct ldc_mtable_entry *VAR_6;
 unsigned long VAR_7, VAR_8;

 VAR_8 = (VAR_3 >> VAR_0) * 3;
 VAR_6 = VAR_1->page_table + VAR_4;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (VAR_6->cookie)
   FUNC_0(VAR_2, VAR_3 + (VAR_7 << VAR_8),
      VAR_6->cookie);
  VAR_6->mte = 0;
 }
}
