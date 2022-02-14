
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (void*,void*,int) ;

void FUNC_2(struct vm_area_struct *VAR_1, struct page *VAR_2,
         unsigned long VAR_3, void *VAR_4, void *VAR_5, int VAR_6)
{
 FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_1->vm_flags & VAR_0) {
  FUNC_0((unsigned long) VAR_4,
  (unsigned long) VAR_4 + VAR_6);
 }
}
