
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int flags; } ;
typedef int pte_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 () ;
 struct page* FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 unsigned long FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void
FUNC_9(struct vm_area_struct *VAR_1, unsigned long VAR_2, pte_t *VAR_3)
{
 unsigned long VAR_4 = FUNC_7(*VAR_3);
 struct page *VAR_5;




 if (!FUNC_6(VAR_4))
  return;

 VAR_5 = FUNC_4(VAR_4);
 if (FUNC_2(VAR_5) &&
     FUNC_8(VAR_0, &VAR_5->flags)) {
  FUNC_1(FUNC_5(VAR_4));
  FUNC_0(VAR_0, &VAR_5->flags);
 } else if (FUNC_3())
  FUNC_1(FUNC_5(VAR_4));
}
