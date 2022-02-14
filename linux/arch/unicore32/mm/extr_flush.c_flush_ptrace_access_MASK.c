
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct vm_area_struct *VAR_1, struct page *VAR_2,
    unsigned long VAR_3, void *VAR_4, unsigned long VAR_5)
{

 if (VAR_1->vm_flags & VAR_0) {
  unsigned long VAR_6 = (unsigned long)VAR_4;

  FUNC_0(VAR_6, VAR_6 + VAR_5);
 }
}
