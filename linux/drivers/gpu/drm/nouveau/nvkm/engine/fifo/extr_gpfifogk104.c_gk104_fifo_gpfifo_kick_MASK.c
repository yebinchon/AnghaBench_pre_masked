
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* fifo; } ;
struct gk104_fifo_chan {TYPE_4__ base; } ;
struct TYPE_5__ {int mutex; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;


 int FUNC_0 (struct gk104_fifo_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct gk104_fifo_chan *VAR_0)
{
 int VAR_1;
 FUNC_1(&VAR_0->base.fifo->engine.subdev.mutex);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->base.fifo->engine.subdev.mutex);
 return VAR_1;
}
