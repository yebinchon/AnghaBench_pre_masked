
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (void*,unsigned long) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (void*,void*) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(struct page *VAR_1, struct page *VAR_2,
 unsigned long VAR_3, struct vm_area_struct *VAR_4)
{
 void *VAR_5 = FUNC_4(VAR_2);
 void *VAR_6 = FUNC_4(VAR_1);
 int VAR_7 = 0;
 if (FUNC_6(VAR_2) && FUNC_1(VAR_5, VAR_3)) {
  FUNC_0((unsigned long)VAR_5, VAR_3);
  VAR_7 = 1;
 }

 FUNC_3(VAR_6, VAR_5);
 FUNC_2(VAR_0, &VAR_1->flags);





 if (VAR_7) {
  FUNC_0((unsigned long)VAR_5, (unsigned long)VAR_5);
  FUNC_7(VAR_0, &VAR_2->flags);
 } else {
  FUNC_2(VAR_0, &VAR_2->flags);
 }

 FUNC_5(VAR_6);
 FUNC_5(VAR_5);
}
