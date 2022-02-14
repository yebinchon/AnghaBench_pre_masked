
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct page {int flags; } ;
typedef int pte_t ;
struct TYPE_3__ {int n_aliases; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct vm_area_struct *VAR_3,
      unsigned long VAR_4, pte_t VAR_5)
{
 struct page *VAR_6;
 unsigned long VAR_7 = FUNC_4(VAR_5);

 if (!VAR_2.dcache.n_aliases)
  return;

 VAR_6 = FUNC_2(VAR_7);
 if (FUNC_3(VAR_7)) {
  int VAR_8 = !FUNC_5(VAR_1, &VAR_6->flags);
  if (VAR_8)
   FUNC_0(FUNC_1(VAR_6), VAR_0);
 }
}
