
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_mapping_info {int kernpg_flag; int context; scalar_t__ (* alloc_pgt_page ) (int ) ;} ;
typedef int pud_t ;
typedef int p4d_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct x86_mapping_info*,int *,unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct x86_mapping_info *VAR_3, p4d_t *VAR_4,
     unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;

 for (; VAR_5 < VAR_6; VAR_5 = VAR_7) {
  p4d_t *VAR_8 = VAR_4 + FUNC_3(VAR_5);
  pud_t *VAR_9;

  VAR_7 = (VAR_5 & VAR_1) + VAR_2;
  if (VAR_7 > VAR_6)
   VAR_7 = VAR_6;

  if (FUNC_4(*VAR_8)) {
   VAR_9 = FUNC_5(VAR_8, 0);
   FUNC_2(VAR_3, VAR_9, VAR_5, VAR_7);
   continue;
  }
  VAR_9 = (pud_t *)VAR_3->alloc_pgt_page(VAR_3->context);
  if (!VAR_9)
   return -VAR_0;
  FUNC_2(VAR_3, VAR_9, VAR_5, VAR_7);
  FUNC_6(VAR_8, FUNC_0(FUNC_1(VAR_9) | VAR_3->kernpg_flag));
 }

 return 0;
}
