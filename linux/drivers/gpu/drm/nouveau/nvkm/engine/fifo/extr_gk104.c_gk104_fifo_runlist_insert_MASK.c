
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_fifo_cgrp {int chan; int head; int chan_nr; } ;
struct gk104_fifo_chan {size_t runl; int head; struct nvkm_fifo_cgrp* cgrp; } ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_7__ {TYPE_2__ subdev; } ;
struct TYPE_8__ {TYPE_3__ engine; } ;
struct gk104_fifo {TYPE_4__ base; TYPE_1__* runlist; } ;
struct TYPE_5__ {int chan; int cgrp; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct gk104_fifo *VAR_0, struct gk104_fifo_chan *VAR_1)
{
 struct nvkm_fifo_cgrp *VAR_2 = VAR_1->cgrp;
 FUNC_1(&VAR_0->base.engine.subdev.mutex);
 if (VAR_2) {
  if (!VAR_2->chan_nr++)
   FUNC_0(&VAR_2->head, &VAR_0->runlist[VAR_1->runl].cgrp);
  FUNC_0(&VAR_1->head, &VAR_2->chan);
 } else {
  FUNC_0(&VAR_1->head, &VAR_0->runlist[VAR_1->runl].chan);
 }
 FUNC_2(&VAR_0->base.engine.subdev.mutex);
}
