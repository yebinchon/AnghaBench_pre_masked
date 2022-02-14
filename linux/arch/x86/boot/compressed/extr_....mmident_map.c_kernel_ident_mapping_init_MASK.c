
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_mapping_info {unsigned long offset; int kernpg_flag; int context; scalar_t__ (* alloc_pgt_page ) (int ) ;} ;
typedef int pud_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct x86_mapping_info*,int *,unsigned long,unsigned long) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(struct x86_mapping_info *VAR_5, pgd_t *VAR_6,
         unsigned long VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9 = VAR_7 + VAR_5->offset;
 unsigned long VAR_10 = VAR_8 + VAR_5->offset;
 unsigned long VAR_11;
 int VAR_12;


 if (!VAR_5->kernpg_flag)
  VAR_5->kernpg_flag = VAR_3;


 VAR_5->kernpg_flag &= VAR_4;

 for (; VAR_9 < VAR_10; VAR_9 = VAR_11) {
  pgd_t *VAR_13 = VAR_6 + FUNC_4(VAR_9);
  p4d_t *VAR_14;

  VAR_11 = (VAR_9 & VAR_1) + VAR_2;
  if (VAR_11 > VAR_10)
   VAR_11 = VAR_10;

  if (FUNC_5(*VAR_13)) {
   VAR_14 = FUNC_3(VAR_13, 0);
   VAR_12 = FUNC_2(VAR_5, VAR_14, VAR_9, VAR_11);
   if (VAR_12)
    return VAR_12;
   continue;
  }

  VAR_14 = (p4d_t *)VAR_5->alloc_pgt_page(VAR_5->context);
  if (!VAR_14)
   return -VAR_0;
  VAR_12 = FUNC_2(VAR_5, VAR_14, VAR_9, VAR_11);
  if (VAR_12)
   return VAR_12;
  if (FUNC_6()) {
   FUNC_8(VAR_13, FUNC_1(FUNC_0(VAR_14) | VAR_5->kernpg_flag));
  } else {




   pud_t *VAR_15 = FUNC_7(VAR_14, 0);
   FUNC_8(VAR_13, FUNC_1(FUNC_0(VAR_15) | VAR_5->kernpg_flag));
  }
 }

 return 0;
}
