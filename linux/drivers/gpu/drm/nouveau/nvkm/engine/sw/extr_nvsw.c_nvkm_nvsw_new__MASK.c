
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_sw_chan {int dummy; } ;
struct nvkm_oclass {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_nvsw_func {int dummy; } ;
struct nvkm_nvsw {struct nvkm_sw_chan* chan; struct nvkm_nvsw_func const* func; struct nvkm_object object; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_nvsw* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;

int
FUNC_2(const struct nvkm_nvsw_func *VAR_3, struct nvkm_sw_chan *VAR_4,
        const struct nvkm_oclass *VAR_5, void *VAR_6, u32 VAR_7,
        struct nvkm_object **VAR_8)
{
 struct nvkm_nvsw *VAR_9;

 if (!(VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_1)))
  return -VAR_0;
 *VAR_8 = &VAR_9->object;

 FUNC_1(&VAR_2, VAR_5, &VAR_9->object);
 VAR_9->func = VAR_3;
 VAR_9->chan = VAR_4;
 return 0;
}
