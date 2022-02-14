
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ldc_trans_cookie {int dummy; } ;
struct ldc_mtable_entry {int dummy; } ;
struct ldc_iommu {int page_table; } ;
struct ldc_channel {struct ldc_iommu iommu; } ;
struct cookie_state {int page_table; int nc; struct ldc_mtable_entry* pte_idx; int prev_cookie; int mte_base; struct ldc_trans_cookie* cookies; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (void*) ;
 struct ldc_mtable_entry* FUNC_2 (struct ldc_iommu*,unsigned long) ;
 int FUNC_3 (struct cookie_state*,unsigned long,unsigned long,unsigned int) ;
 unsigned long FUNC_4 (unsigned long,unsigned int) ;
 int FUNC_5 (unsigned int) ;

int FUNC_6(struct ldc_channel *VAR_5,
     void *VAR_6, unsigned int VAR_7,
     struct ldc_trans_cookie *VAR_8, int VAR_9,
     unsigned int VAR_10)
{
 unsigned long VAR_11, VAR_12;
 struct ldc_mtable_entry *VAR_13;
 struct cookie_state VAR_14;
 struct ldc_iommu *VAR_15;

 if ((VAR_10 & ~VAR_3) || (VAR_9 < 1))
  return -VAR_1;

 VAR_12 = FUNC_1(VAR_6);
 if ((VAR_12 | VAR_7) & (8UL - 1))
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_12, VAR_7);

 VAR_15 = &VAR_5->iommu;

 VAR_13 = FUNC_2(VAR_15, VAR_11);

 if (!VAR_13)
  return -VAR_2;

 VAR_14.page_table = VAR_15->page_table;
 VAR_14.cookies = VAR_8;
 VAR_14.mte_base = FUNC_5(VAR_10);
 VAR_14.prev_cookie = ~(u64)0;
 VAR_14.pte_idx = (VAR_13 - VAR_15->page_table);
 VAR_14.nc = 0;
 FUNC_3(&VAR_14, (VAR_12 & VAR_4), (VAR_12 & ~VAR_4), VAR_7);
 FUNC_0(VAR_14.nc > VAR_9);

 return VAR_14.nc;
}
