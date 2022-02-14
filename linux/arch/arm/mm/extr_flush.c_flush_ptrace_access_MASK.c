
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_mm; } ;
struct page {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*,unsigned long,void*,unsigned long,unsigned int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static
void FUNC_4(struct vm_area_struct *VAR_3, struct page *VAR_4,
    unsigned long VAR_5, void *VAR_6, unsigned long VAR_7)
{
 unsigned int VAR_8 = 0;
 if (FUNC_1(FUNC_3(), FUNC_2(VAR_3->vm_mm)))
  VAR_8 |= VAR_0;
 if (VAR_3->vm_flags & VAR_2)
  VAR_8 |= VAR_1;
 FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
