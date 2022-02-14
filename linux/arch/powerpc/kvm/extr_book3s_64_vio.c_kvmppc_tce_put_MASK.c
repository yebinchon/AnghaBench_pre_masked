
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct page {int dummy; } ;
struct kvmppc_spapr_tce_table {struct page** pages; scalar_t__ offset; } ;


 unsigned long VAR_0 ;
 struct page* FUNC_0 (struct kvmppc_spapr_tce_table*,unsigned long) ;
 unsigned long* FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct kvmppc_spapr_tce_table *VAR_1,
  unsigned long VAR_2, unsigned long VAR_3)
{
 struct page *VAR_4;
 u64 *VAR_5;
 unsigned long VAR_6;

 VAR_2 -= VAR_1->offset;
 VAR_6 = VAR_2 / VAR_0;
 VAR_4 = VAR_1->pages[VAR_6];

 if (!VAR_4) {

  if (!VAR_3)
   return;

  VAR_4 = FUNC_0(VAR_1, VAR_6);
  if (!VAR_4)
   return;
 }
 VAR_5 = FUNC_1(VAR_4);

 VAR_5[VAR_2 % VAR_0] = VAR_3;
}
