
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_oclass {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_gr {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct nv40_gr_chan {struct nv40_gr* gr; int head; struct nvkm_object object; struct nvkm_fifo_chan* fifo; } ;
struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct nv40_gr {TYPE_2__ base; int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv40_gr_chan* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct nv40_gr* FUNC_2 (struct nvkm_gr*) ;
 int VAR_2 ;
 int FUNC_3 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int
FUNC_6(struct nvkm_gr *VAR_3, struct nvkm_fifo_chan *VAR_4,
   const struct nvkm_oclass *VAR_5, struct nvkm_object **VAR_6)
{
 struct nv40_gr *VAR_7 = FUNC_2(VAR_3);
 struct nv40_gr_chan *VAR_8;
 unsigned long VAR_9;

 if (!(VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;
 FUNC_3(&VAR_2, VAR_5, &VAR_8->object);
 VAR_8->gr = VAR_7;
 VAR_8->fifo = VAR_4;
 *VAR_6 = &VAR_8->object;

 FUNC_4(&VAR_8->gr->base.engine.lock, VAR_9);
 FUNC_1(&VAR_8->head, &VAR_7->chan);
 FUNC_5(&VAR_8->gr->base.engine.lock, VAR_9);
 return 0;
}
