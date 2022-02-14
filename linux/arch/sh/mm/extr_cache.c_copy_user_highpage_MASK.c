
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; } ;
struct page {int flags; } ;
struct TYPE_3__ {scalar_t__ n_aliases; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (void*,void*) ;
 void* FUNC_2 (struct page*) ;
 void* FUNC_3 (struct page*,unsigned long) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,int *) ;

void FUNC_10(struct page *VAR_5, struct page *VAR_6,
   unsigned long VAR_7, struct vm_area_struct *VAR_8)
{
 void *VAR_9, *VAR_10;

 VAR_10 = FUNC_2(VAR_5);

 if (VAR_4.dcache.n_aliases && FUNC_6(VAR_6) &&
     FUNC_9(VAR_2, &VAR_6->flags)) {
  VAR_9 = FUNC_3(VAR_6, VAR_7);
  FUNC_1(VAR_10, VAR_9);
  FUNC_5(VAR_9);
 } else {
  VAR_9 = FUNC_2(VAR_6);
  FUNC_1(VAR_10, VAR_9);
  FUNC_4(VAR_9);
 }

 if (FUNC_7((unsigned long)VAR_10, VAR_7 & VAR_0) ||
     (VAR_8->vm_flags & VAR_3))
  FUNC_0(VAR_10, VAR_1);

 FUNC_4(VAR_10);

 FUNC_8();
}
