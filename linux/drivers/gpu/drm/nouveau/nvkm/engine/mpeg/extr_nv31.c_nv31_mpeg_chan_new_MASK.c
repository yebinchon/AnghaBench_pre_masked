
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_oclass {int engine; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct nv31_mpeg_chan {struct nvkm_object object; struct nvkm_fifo_chan* fifo; struct nv31_mpeg* mpeg; } ;
struct TYPE_2__ {int lock; } ;
struct nv31_mpeg {TYPE_1__ engine; struct nv31_mpeg_chan* chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nv31_mpeg_chan* FUNC_0 (int,int ) ;
 struct nv31_mpeg* FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int
FUNC_5(struct nvkm_fifo_chan *VAR_4,
     const struct nvkm_oclass *VAR_5,
     struct nvkm_object **VAR_6)
{
 struct nv31_mpeg *VAR_7 = FUNC_1(VAR_5->engine);
 struct nv31_mpeg_chan *VAR_8;
 unsigned long VAR_9;
 int VAR_10 = -VAR_0;

 if (!(VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_2)))
  return -VAR_1;
 FUNC_2(&VAR_3, VAR_5, &VAR_8->object);
 VAR_8->mpeg = VAR_7;
 VAR_8->fifo = VAR_4;
 *VAR_6 = &VAR_8->object;

 FUNC_3(&VAR_7->engine.lock, VAR_9);
 if (!VAR_7->chan) {
  VAR_7->chan = VAR_8;
  VAR_10 = 0;
 }
 FUNC_4(&VAR_7->engine.lock, VAR_9);
 return VAR_10;
}
