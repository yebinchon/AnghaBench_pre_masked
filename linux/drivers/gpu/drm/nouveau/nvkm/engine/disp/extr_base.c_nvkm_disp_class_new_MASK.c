
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_oproxy {int object; struct nvkm_object base; } ;
struct nvkm_oclass {int engine; struct nvkm_disp_oclass* engn; } ;
struct nvkm_disp_oclass {int (* ctor ) (struct nvkm_disp*,struct nvkm_oclass const*,void*,int ,int *) ;} ;
struct TYPE_3__ {int mutex; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nvkm_disp {TYPE_2__ engine; struct nvkm_oproxy* client; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nvkm_disp* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,struct nvkm_oclass const*,struct nvkm_oproxy**) ;
 int FUNC_4 (struct nvkm_disp*,struct nvkm_oclass const*,void*,int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_device *VAR_2,
      const struct nvkm_oclass *VAR_3, void *VAR_4, u32 VAR_5,
      struct nvkm_object **VAR_6)
{
 const struct nvkm_disp_oclass *VAR_7 = VAR_3->engn;
 struct nvkm_disp *VAR_8 = FUNC_2(VAR_3->engine);
 struct nvkm_oproxy *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(&VAR_1, VAR_3, &VAR_9);
 if (VAR_10)
  return VAR_10;
 *VAR_6 = &VAR_9->base;

 FUNC_0(&VAR_8->engine.subdev.mutex);
 if (VAR_8->client) {
  FUNC_1(&VAR_8->engine.subdev.mutex);
  return -VAR_0;
 }
 VAR_8->client = VAR_9;
 FUNC_1(&VAR_8->engine.subdev.mutex);

 return VAR_7->ctor(VAR_8, VAR_3, VAR_4, VAR_5, &VAR_9->object);
}
