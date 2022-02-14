
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv50_fifo {TYPE_3__ base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nv50_fifo*) ;

void
FUNC_3(struct nv50_fifo *VAR_0)
{
 FUNC_0(&VAR_0->base.engine.subdev.mutex);
 FUNC_2(VAR_0);
 FUNC_1(&VAR_0->base.engine.subdev.mutex);
}
