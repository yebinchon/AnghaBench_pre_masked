
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pagevec {int nr; int pages; } ;
struct TYPE_6__ {int lock; struct pagevec pvec; } ;
struct i915_address_space {TYPE_3__ free_pages; TYPE_2__* i915; scalar_t__ pt_kmap_wc; } ;
struct TYPE_4__ {int wc_stash; } ;
struct TYPE_5__ {TYPE_1__ mm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct pagevec*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pagevec*) ;
 int FUNC_4 (struct pagevec*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct pagevec*) ;

__attribute__((used)) static void FUNC_9(struct i915_address_space *VAR_1,
      bool VAR_2)
{
 struct pagevec *VAR_3 = &VAR_1->free_pages.pvec;
 struct pagevec VAR_4;

 FUNC_2(&VAR_1->free_pages.lock);
 FUNC_0(!FUNC_3(VAR_3));

 if (VAR_1->pt_kmap_wc) {




  FUNC_8(&VAR_1->i915->mm.wc_stash, VAR_3);







  if (VAR_3->nr <= (VAR_2 ? 0 : VAR_0 - 1))
   return;






  VAR_4 = *VAR_3;
  FUNC_4(VAR_3);
  FUNC_7(&VAR_1->free_pages.lock);

  VAR_3 = &VAR_4;
  FUNC_5(VAR_3->pages, VAR_3->nr);

  FUNC_6(&VAR_1->free_pages.lock);
 }

 FUNC_1(VAR_3);
}
