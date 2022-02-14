
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_oclass {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_gr {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct nv50_gr_chan {struct nvkm_object object; struct nv50_gr* gr; } ;
struct nv50_gr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv50_gr_chan* FUNC_0 (int,int ) ;
 struct nv50_gr* FUNC_1 (struct nvkm_gr*) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;

int
FUNC_3(struct nvkm_gr *VAR_3, struct nvkm_fifo_chan *VAR_4,
   const struct nvkm_oclass *VAR_5, struct nvkm_object **VAR_6)
{
 struct nv50_gr *VAR_7 = FUNC_1(VAR_3);
 struct nv50_gr_chan *VAR_8;

 if (!(VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;
 FUNC_2(&VAR_2, VAR_5, &VAR_8->object);
 VAR_8->gr = VAR_7;
 *VAR_6 = &VAR_8->object;
 return 0;
}
