
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,int ) ;
 void* FUNC_3 (struct page*,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (void*,void const*,unsigned long) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

void FUNC_8(struct vm_area_struct *VAR_3,
 struct page *VAR_4, unsigned long VAR_5, void *VAR_6, const void *VAR_7,
 unsigned long VAR_8)
{
 if (VAR_2 &&
     FUNC_6(VAR_4) && !FUNC_0(VAR_4)) {
  void *VAR_9 = FUNC_3(VAR_4, VAR_5) + (VAR_5 & ~VAR_0);
  FUNC_5(VAR_9, VAR_7, VAR_8);
  FUNC_4();
 } else {
  FUNC_5(VAR_6, VAR_7, VAR_8);
  if (VAR_2)
   FUNC_1(VAR_4);
 }
 if (VAR_3->vm_flags & VAR_1)
  FUNC_2(VAR_3, VAR_5, FUNC_7(VAR_4));
}
