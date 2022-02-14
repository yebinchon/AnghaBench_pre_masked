
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_ucontext {int page_mutex; } ;
struct TYPE_3__ {TYPE_2__* user_page; } ;
struct hns_roce_db {TYPE_1__ u; } ;
struct TYPE_4__ {int umem; int list; int refcount; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

void FUNC_7(struct hns_roce_ucontext *VAR_0,
       struct hns_roce_db *VAR_1)
{
 FUNC_3(&VAR_0->page_mutex);

 FUNC_5(&VAR_1->u.user_page->refcount);
 if (FUNC_6(&VAR_1->u.user_page->refcount)) {
  FUNC_2(&VAR_1->u.user_page->list);
  FUNC_0(VAR_1->u.user_page->umem);
  FUNC_1(VAR_1->u.user_page);
 }

 FUNC_4(&VAR_0->page_mutex);
}
