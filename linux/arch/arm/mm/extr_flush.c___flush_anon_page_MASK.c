
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (struct page*) ;
 unsigned long FUNC_7 (struct page*) ;

void FUNC_8(struct vm_area_struct *VAR_1, struct page *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;


 if (FUNC_2())
  return;




 VAR_4 = FUNC_7(VAR_2);
 if (FUNC_3()) {
  FUNC_4(VAR_1, VAR_3, VAR_4);
 } else {




  FUNC_5(VAR_4, VAR_3);
  FUNC_1();
 }






 FUNC_0(FUNC_6(VAR_2), VAR_0);
}
