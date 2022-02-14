
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_mapping_info {unsigned long offset; unsigned long page_flag; unsigned long kernpg_flag; int context; scalar_t__ (* alloc_pgt_page ) (int ) ;scalar_t__ direct_gbpages; } ;
typedef int pud_t ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct x86_mapping_info*,int *,unsigned long,unsigned long) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct x86_mapping_info *VAR_3, pud_t *VAR_4,
     unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;

 for (; VAR_5 < VAR_6; VAR_5 = VAR_7) {
  pud_t *VAR_8 = VAR_4 + FUNC_4(VAR_5);
  pmd_t *VAR_9;

  VAR_7 = (VAR_5 & VAR_1) + VAR_2;
  if (VAR_7 > VAR_6)
   VAR_7 = VAR_6;

  if (VAR_3->direct_gbpages) {
   pud_t VAR_10;

   if (FUNC_5(*VAR_8))
    continue;

   VAR_5 &= VAR_1;
   VAR_10 = FUNC_1((VAR_5 - VAR_3->offset) | VAR_3->page_flag);
   FUNC_6(VAR_8, VAR_10);
   continue;
  }

  if (FUNC_5(*VAR_8)) {
   VAR_9 = FUNC_3(VAR_8, 0);
   FUNC_2(VAR_3, VAR_9, VAR_5, VAR_7);
   continue;
  }
  VAR_9 = (pmd_t *)VAR_3->alloc_pgt_page(VAR_3->context);
  if (!VAR_9)
   return -VAR_0;
  FUNC_2(VAR_3, VAR_9, VAR_5, VAR_7);
  FUNC_6(VAR_8, FUNC_1(FUNC_0(VAR_9) | VAR_3->kernpg_flag));
 }

 return 0;
}
