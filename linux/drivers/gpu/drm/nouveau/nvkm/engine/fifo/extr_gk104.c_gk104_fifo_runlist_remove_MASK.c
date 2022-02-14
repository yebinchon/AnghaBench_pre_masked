
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_fifo_cgrp {int head; int chan_nr; } ;
struct gk104_fifo_chan {int head; struct nvkm_fifo_cgrp* cgrp; } ;
struct TYPE_4__ {int mutex; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gk104_fifo {TYPE_3__ base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct gk104_fifo *VAR_0, struct gk104_fifo_chan *VAR_1)
{
 struct nvkm_fifo_cgrp *VAR_2 = VAR_1->cgrp;
 FUNC_2(&VAR_0->base.engine.subdev.mutex);
 if (!FUNC_1(&VAR_1->head)) {
  FUNC_0(&VAR_1->head);
  if (VAR_2 && !--VAR_2->chan_nr)
   FUNC_0(&VAR_2->head);
 }
 FUNC_3(&VAR_0->base.engine.subdev.mutex);
}
