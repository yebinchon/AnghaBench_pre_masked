
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int flags; } ;
typedef int pte_t ;
typedef unsigned long phys_addr_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,int *) ;
 struct page* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;

void FUNC_9(struct vm_area_struct *VAR_3, unsigned long VAR_4,
        pte_t *VAR_5)
{
 unsigned long VAR_6 = VAR_4 & VAR_0;
 phys_addr_t VAR_7 = FUNC_7(*VAR_5) & VAR_0;
 struct page *VAR_8 = FUNC_5(FUNC_6(*VAR_5));

 FUNC_4(VAR_3, VAR_6, VAR_5);

 if (VAR_8 == FUNC_0(0)) {
  return;
 }
 if ((VAR_3->vm_flags & VAR_2) ||
      FUNC_3(VAR_7, VAR_6)) {

  int VAR_9 = !FUNC_8(VAR_1, &VAR_8->flags);
  if (VAR_9) {

   FUNC_1(VAR_7, VAR_7);


   if (VAR_3->vm_flags & VAR_2)
    FUNC_2(VAR_7, VAR_6);
  }
 }
}
