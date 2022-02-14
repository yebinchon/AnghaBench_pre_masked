
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct vdc_port {int drain; TYPE_2__ vio; TYPE_1__* disk; } ;
struct request_queue {int dummy; } ;
struct TYPE_3__ {struct request_queue* queue; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct vdc_port *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->disk->queue;





 VAR_0->drain = 1;
 FUNC_5(&VAR_0->vio.lock);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 FUNC_4(&VAR_0->vio.lock);
 VAR_0->drain = 0;
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
}
