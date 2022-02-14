
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gf100_fifo_chan {int head; } ;
struct TYPE_4__ {int mutex; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gf100_fifo {TYPE_3__ base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct gf100_fifo *VAR_0, struct gf100_fifo_chan *VAR_1)
{
 FUNC_1(&VAR_0->base.engine.subdev.mutex);
 FUNC_0(&VAR_1->head);
 FUNC_2(&VAR_0->base.engine.subdev.mutex);
}
