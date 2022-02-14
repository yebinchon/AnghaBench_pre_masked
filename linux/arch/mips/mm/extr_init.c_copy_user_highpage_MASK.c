
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (void*,void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned long) ;
 void* FUNC_3 (struct page*) ;
 void* FUNC_4 (struct page*,unsigned long) ;
 int FUNC_5 (void*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 () ;

void FUNC_10(struct page *VAR_3, struct page *VAR_4,
 unsigned long VAR_5, struct vm_area_struct *VAR_6)
{
 void *VAR_7, *VAR_8;

 VAR_8 = FUNC_3(VAR_3);
 if (VAR_1 &&
     FUNC_7(VAR_4) && !FUNC_0(VAR_4)) {
  VAR_7 = FUNC_4(VAR_4, VAR_5);
  FUNC_1(VAR_8, VAR_7);
  FUNC_6();
 } else {
  VAR_7 = FUNC_3(VAR_4);
  FUNC_1(VAR_8, VAR_7);
  FUNC_5(VAR_7);
 }
 if ((!VAR_2) ||
     FUNC_8((unsigned long)VAR_8, VAR_5 & VAR_0))
  FUNC_2((unsigned long)VAR_8);
 FUNC_5(VAR_8);

 FUNC_9();
}
