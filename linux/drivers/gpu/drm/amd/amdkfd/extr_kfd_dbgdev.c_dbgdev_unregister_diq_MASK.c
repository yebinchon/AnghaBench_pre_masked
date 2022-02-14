
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kfd_dbgdev {TYPE_3__* kq; int pqm; } ;
struct TYPE_6__ {TYPE_2__* queue; } ;
struct TYPE_4__ {int queue_id; } ;
struct TYPE_5__ {TYPE_1__ properties; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct kfd_dbgdev *VAR_0)
{

 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->pqm,
   VAR_0->kq->queue->properties.queue_id);
 VAR_0->kq = ((void*)0);

 return VAR_1;
}
