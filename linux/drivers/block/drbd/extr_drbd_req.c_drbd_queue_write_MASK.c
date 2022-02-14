
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drbd_request {int req_pending_master_completion; int tl_requests; } ;
struct TYPE_3__ {int worker; int wq; int writes; } ;
struct drbd_device {int al_wait; TYPE_1__ submit; TYPE_2__* resource; int * pending_master_completion; } ;
struct TYPE_4__ {int req_lock; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drbd_device *VAR_0, struct drbd_request *VAR_1)
{
 FUNC_2(&VAR_0->resource->req_lock);
 FUNC_0(&VAR_1->tl_requests, &VAR_0->submit.writes);
 FUNC_0(&VAR_1->req_pending_master_completion,
   &VAR_0->pending_master_completion[1 ]);
 FUNC_3(&VAR_0->resource->req_lock);
 FUNC_1(VAR_0->submit.wq, &VAR_0->submit.worker);

 FUNC_4(&VAR_0->al_wait);
}
