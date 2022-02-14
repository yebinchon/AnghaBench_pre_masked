
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_manager {int allocated; int lock; int ib_buffer_obj; TYPE_1__* dqm; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct packet_manager *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 if (VAR_0->allocated) {
  FUNC_0(VAR_0->dqm->dev, VAR_0->ib_buffer_obj);
  VAR_0->allocated = 0;
 }
 FUNC_2(&VAR_0->lock);
}
