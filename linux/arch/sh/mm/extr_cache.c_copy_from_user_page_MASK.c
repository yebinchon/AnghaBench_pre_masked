
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct page {int flags; } ;
struct TYPE_3__ {scalar_t__ n_aliases; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 void* FUNC_1 (struct page*,unsigned long) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,void const*,unsigned long) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(struct vm_area_struct *VAR_3, struct page *VAR_4,
    unsigned long VAR_5, void *VAR_6, const void *VAR_7,
    unsigned long VAR_8)
{
 if (VAR_2.dcache.n_aliases && FUNC_4(VAR_4) &&
     FUNC_5(VAR_1, &VAR_4->flags)) {
  void *VAR_9 = FUNC_1(VAR_4, VAR_5) + (VAR_5 & ~VAR_0);
  FUNC_3(VAR_6, VAR_9, VAR_8);
  FUNC_2(VAR_9);
 } else {
  FUNC_3(VAR_6, VAR_7, VAR_8);
  if (VAR_2.dcache.n_aliases)
   FUNC_0(VAR_1, &VAR_4->flags);
 }
}
