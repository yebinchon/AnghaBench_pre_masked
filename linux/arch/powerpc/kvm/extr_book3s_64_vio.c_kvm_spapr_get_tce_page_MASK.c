
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvmppc_spapr_tce_table {int alloc_lock; struct page** pages; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct page *FUNC_4(struct kvmppc_spapr_tce_table *VAR_2,
  unsigned long VAR_3)
{
 struct page *VAR_4 = VAR_2->pages[VAR_3];

 if (VAR_4)
  return VAR_4;

 FUNC_2(&VAR_2->alloc_lock);
 VAR_4 = VAR_2->pages[VAR_3];
 if (!VAR_4) {
  VAR_4 = FUNC_1(VAR_0 | VAR_1);
  FUNC_0(!VAR_4);
  if (VAR_4)
   VAR_2->pages[VAR_3] = VAR_4;
 }
 FUNC_3(&VAR_2->alloc_lock);

 return VAR_4;
}
