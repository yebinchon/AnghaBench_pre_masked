
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_fifo {int lock; TYPE_1__* func; } ;
struct TYPE_2__ {int (* recover_chan ) (struct nvkm_fifo*,int) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct nvkm_fifo*,int) ;

void
FUNC_4(struct nvkm_fifo *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 if (FUNC_0(!VAR_0->func->recover_chan))
  return;
 FUNC_1(&VAR_0->lock, VAR_2);
 VAR_0->func->recover_chan(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_2);
}
