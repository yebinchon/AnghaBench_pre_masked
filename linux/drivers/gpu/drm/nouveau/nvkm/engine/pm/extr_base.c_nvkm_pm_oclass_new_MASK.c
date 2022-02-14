
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int mutex; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nvkm_pm {TYPE_2__ engine; struct nvkm_object* perfmon; } ;
struct nvkm_oclass {int engine; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_pm*,struct nvkm_oclass const*,void*,int ,struct nvkm_object**) ;
 struct nvkm_pm* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_device *VAR_1, const struct nvkm_oclass *VAR_2,
     void *VAR_3, u32 VAR_4, struct nvkm_object **VAR_5)
{
 struct nvkm_pm *VAR_6 = FUNC_3(VAR_2->engine);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_0(&VAR_6->engine.subdev.mutex);
 if (VAR_6->perfmon == ((void*)0))
  VAR_6->perfmon = *VAR_5;
 VAR_7 = (VAR_6->perfmon == *VAR_5) ? 0 : -VAR_0;
 FUNC_1(&VAR_6->engine.subdev.mutex);
 return VAR_7;
}
