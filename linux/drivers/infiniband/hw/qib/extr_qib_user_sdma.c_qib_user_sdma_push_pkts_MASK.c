
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_user_sdma_queue {int num_pending; TYPE_1__* sdma_rb_node; } ;
struct list_head {int dummy; } ;
struct qib_pportdata {int lflags; int sdma_lock; struct list_head sdma_userpending; } ;
struct TYPE_2__ {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qib_pportdata*) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (struct list_head*,struct list_head*) ;
 int FUNC_3 (struct qib_pportdata*) ;
 int FUNC_4 (struct qib_pportdata*,struct list_head*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct qib_pportdata *VAR_2,
     struct qib_user_sdma_queue *VAR_3,
     struct list_head *VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 if (FUNC_7(!(VAR_2->lflags & VAR_1)))
  return -VAR_0;


 if (VAR_3->sdma_rb_node->refcount > 1) {
  FUNC_5(&VAR_2->sdma_lock, VAR_6);
  if (FUNC_7(!FUNC_0(VAR_2))) {
   FUNC_6(&VAR_2->sdma_lock, VAR_6);
   return -VAR_0;
  }
  VAR_3->num_pending += VAR_5;
  FUNC_2(VAR_4, &VAR_2->sdma_userpending);
  FUNC_4(VAR_2, &VAR_2->sdma_userpending);
  FUNC_6(&VAR_2->sdma_lock, VAR_6);
  return 0;
 }
 VAR_3->num_pending += VAR_5;






 do {
  FUNC_5(&VAR_2->sdma_lock, VAR_6);
  if (FUNC_7(!FUNC_0(VAR_2))) {
   FUNC_6(&VAR_2->sdma_lock, VAR_6);
   return -VAR_0;
  }
  FUNC_4(VAR_2, VAR_4);
  if (!FUNC_1(VAR_4))
   FUNC_3(VAR_2);
  FUNC_6(&VAR_2->sdma_lock, VAR_6);
 } while (!FUNC_1(VAR_4));

 return 0;
}
