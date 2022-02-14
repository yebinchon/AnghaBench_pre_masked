
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_uverbs_file {int ucontext_lock; int hw_destroy_rwsem; int uobjects; TYPE_1__* ucontext; } ;
typedef enum rdma_remove_reason { ____Placeholder_rdma_remove_reason } rdma_remove_reason ;
struct TYPE_2__ {int closing; int cleanup_retryable; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_uverbs_file*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ib_uverbs_file*,int) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct ib_uverbs_file *VAR_1,
        enum rdma_remove_reason VAR_2)
{
 if (VAR_2 == VAR_0) {
  if (!FUNC_4(&VAR_1->ucontext_lock))
   return;

 } else {
  FUNC_3(&VAR_1->ucontext_lock);
 }

 FUNC_1(&VAR_1->hw_destroy_rwsem);





 if (!VAR_1->ucontext)
  goto done;

 VAR_1->ucontext->closing = 1;
 VAR_1->ucontext->cleanup_retryable = 1;
 while (!FUNC_2(&VAR_1->uobjects))
  if (FUNC_0(VAR_1, VAR_2)) {




   break;
  }

 VAR_1->ucontext->cleanup_retryable = 0;
 if (!FUNC_2(&VAR_1->uobjects))
  FUNC_0(VAR_1, VAR_2);

 FUNC_6(VAR_1, VAR_2);

done:
 FUNC_7(&VAR_1->hw_destroy_rwsem);
 FUNC_5(&VAR_1->ucontext_lock);
}
