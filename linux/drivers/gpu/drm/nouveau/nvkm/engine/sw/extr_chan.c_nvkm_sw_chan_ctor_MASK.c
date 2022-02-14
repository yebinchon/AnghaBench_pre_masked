
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_sw_chan_func {int dummy; } ;
struct nvkm_sw_chan {int event; int head; struct nvkm_fifo_chan* fifo; struct nvkm_sw* sw; struct nvkm_sw_chan_func const* func; int object; } ;
struct TYPE_2__ {int lock; } ;
struct nvkm_sw {TYPE_1__ engine; int chan; } ;
struct nvkm_oclass {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int,int *) ;
 int FUNC_2 (int *,struct nvkm_oclass const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int
FUNC_5(const struct nvkm_sw_chan_func *VAR_2, struct nvkm_sw *VAR_3,
    struct nvkm_fifo_chan *VAR_4, const struct nvkm_oclass *VAR_5,
    struct nvkm_sw_chan *VAR_6)
{
 unsigned long VAR_7;

 FUNC_2(&VAR_0, VAR_5, &VAR_6->object);
 VAR_6->func = VAR_2;
 VAR_6->sw = VAR_3;
 VAR_6->fifo = VAR_4;
 FUNC_3(&VAR_3->engine.lock, VAR_7);
 FUNC_0(&VAR_6->head, &VAR_3->chan);
 FUNC_4(&VAR_3->engine.lock, VAR_7);

 return FUNC_1(&VAR_1, 1, 1, &VAR_6->event);
}
