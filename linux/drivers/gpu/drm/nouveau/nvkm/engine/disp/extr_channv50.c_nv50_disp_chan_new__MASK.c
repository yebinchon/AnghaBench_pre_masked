
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_oclass {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nv50_disp_chan_mthd {int dummy; } ;
struct nv50_disp_chan_func {int dummy; } ;
struct TYPE_2__ {int ctrl; int user; } ;
struct nv50_disp_chan {int head; TYPE_1__ chid; struct nv50_disp* disp; struct nv50_disp_chan_mthd const* mthd; struct nv50_disp_chan_func const* func; struct nvkm_object object; } ;
struct nv50_disp {struct nv50_disp_chan** chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nv50_disp_chan* FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;

int
FUNC_2(const struct nv50_disp_chan_func *VAR_4,
      const struct nv50_disp_chan_mthd *VAR_5,
      struct nv50_disp *VAR_6, int VAR_7, int VAR_8, int VAR_9,
      const struct nvkm_oclass *VAR_10,
      struct nvkm_object **VAR_11)
{
 struct nv50_disp_chan *VAR_12;

 if (!(VAR_12 = FUNC_0(sizeof(*VAR_12), VAR_2)))
  return -VAR_1;
 *VAR_11 = &VAR_12->object;

 FUNC_1(&VAR_3, VAR_10, &VAR_12->object);
 VAR_12->func = VAR_4;
 VAR_12->mthd = VAR_5;
 VAR_12->disp = VAR_6;
 VAR_12->chid.ctrl = VAR_7;
 VAR_12->chid.user = VAR_8;
 VAR_12->head = VAR_9;

 if (VAR_6->chan[VAR_12->chid.user]) {
  VAR_12->chid.user = -1;
  return -VAR_0;
 }
 VAR_6->chan[VAR_12->chid.user] = VAR_12;
 return 0;
}
