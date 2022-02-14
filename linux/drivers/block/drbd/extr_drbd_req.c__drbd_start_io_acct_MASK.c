
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_3__ {int size; } ;
struct drbd_request {TYPE_1__ i; int master_bio; } ;
struct drbd_device {TYPE_2__* vdisk; struct request_queue* rq_queue; } ;
struct TYPE_4__ {int part0; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct request_queue*,int ,int,int *) ;

__attribute__((used)) static void FUNC_2(struct drbd_device *VAR_0, struct drbd_request *VAR_1)
{
 struct request_queue *VAR_2 = VAR_0->rq_queue;

 FUNC_1(VAR_2, FUNC_0(VAR_1->master_bio),
    VAR_1->i.size >> 9, &VAR_0->vdisk->part0);
}
