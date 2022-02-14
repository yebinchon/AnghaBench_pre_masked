
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_oclass {int engine; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct nv44_mpeg_chan {int head; struct nvkm_object object; struct nvkm_fifo_chan* fifo; struct nv44_mpeg* mpeg; } ;
struct TYPE_2__ {int lock; } ;
struct nv44_mpeg {TYPE_1__ engine; int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv44_mpeg_chan* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct nv44_mpeg* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_fifo_chan *VAR_3,
     const struct nvkm_oclass *VAR_4,
     struct nvkm_object **VAR_5)
{
 struct nv44_mpeg *VAR_6 = FUNC_2(VAR_4->engine);
 struct nv44_mpeg_chan *VAR_7;
 unsigned long VAR_8;

 if (!(VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 FUNC_3(&VAR_2, VAR_4, &VAR_7->object);
 VAR_7->mpeg = VAR_6;
 VAR_7->fifo = VAR_3;
 *VAR_5 = &VAR_7->object;

 FUNC_4(&VAR_6->engine.lock, VAR_8);
 FUNC_1(&VAR_7->head, &VAR_6->chan);
 FUNC_5(&VAR_6->engine.lock, VAR_8);
 return 0;
}
