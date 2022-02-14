
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_oclass {int engine; struct nvkm_fifo_chan_oclass* engn; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_fifo_chan_oclass {int (* ctor ) (struct nvkm_fifo*,struct nvkm_oclass const*,void*,int ,struct nvkm_object**) ;} ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_device {int dummy; } ;


 struct nvkm_fifo* FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_fifo*,struct nvkm_oclass const*,void*,int ,struct nvkm_object**) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_device *VAR_0,
      const struct nvkm_oclass *VAR_1, void *VAR_2, u32 VAR_3,
      struct nvkm_object **VAR_4)
{
 const struct nvkm_fifo_chan_oclass *VAR_5 = VAR_1->engn;
 struct nvkm_fifo *VAR_6 = FUNC_0(VAR_1->engine);
 return VAR_5->ctor(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);
}
