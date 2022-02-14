
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_oclass {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_gr {int dummy; } ;
struct nvkm_fifo_chan {size_t chid; } ;
struct nv04_gr_chan {size_t chid; struct nvkm_object object; struct nv04_gr* gr; } ;
struct nv04_gr {int lock; struct nv04_gr_chan** chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (struct nv04_gr_chan*,int ) ;
 struct nv04_gr_chan* FUNC_1 (int,int ) ;
 struct nv04_gr* FUNC_2 (struct nvkm_gr*) ;
 int VAR_3 ;
 int FUNC_3 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_gr *VAR_4, struct nvkm_fifo_chan *VAR_5,
   const struct nvkm_oclass *VAR_6, struct nvkm_object **VAR_7)
{
 struct nv04_gr *VAR_8 = FUNC_2(VAR_4);
 struct nv04_gr_chan *VAR_9;
 unsigned long VAR_10;

 if (!(VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1)))
  return -VAR_0;
 FUNC_3(&VAR_3, VAR_6, &VAR_9->object);
 VAR_9->gr = VAR_8;
 VAR_9->chid = VAR_5->chid;
 *VAR_7 = &VAR_9->object;

 *FUNC_0(VAR_9, VAR_2) = 0xfad4ff31;

 FUNC_4(&VAR_8->lock, VAR_10);
 VAR_8->chan[VAR_9->chid] = VAR_9;
 FUNC_5(&VAR_8->lock, VAR_10);
 return 0;
}
