
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_request {int device; int tl_requests; } ;
struct TYPE_2__ {int worker; int wq; int lock; int writes; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct drbd_request *VAR_1)
{
 unsigned long VAR_2;
 FUNC_3(&VAR_0.lock, VAR_2);
 FUNC_1(&VAR_1->tl_requests, &VAR_0.writes);
 FUNC_4(&VAR_0.lock, VAR_2);




 FUNC_0(VAR_1->device);

 FUNC_2(VAR_0.wq, &VAR_0.worker);
}
