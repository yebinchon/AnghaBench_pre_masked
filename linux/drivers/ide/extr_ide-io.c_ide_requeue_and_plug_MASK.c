
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int * queue_hw_ctx; } ;
struct request {int dummy; } ;
struct TYPE_3__ {struct request_queue* queue; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (struct request_queue*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct request*,int) ;

void FUNC_3(ide_drive_t *VAR_0, struct request *VAR_1)
{
 struct request_queue *VAR_2 = VAR_0->queue;


 if (VAR_1) {
  FUNC_2(VAR_1, 0);
  FUNC_0(VAR_2, 3);
 } else
  FUNC_1(VAR_2->queue_hw_ctx[0], 3);
}
