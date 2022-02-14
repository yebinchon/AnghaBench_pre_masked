
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_volt {int dummy; } ;
struct nvkm_device_tegra {size_t gpu_speedo_id; } ;
struct nvkm_device {TYPE_1__* func; } ;
struct gk20a_volt {struct nvkm_volt base; } ;
struct TYPE_2__ {struct nvkm_device_tegra* (* tegra ) (struct nvkm_device*) ;} ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nvkm_device*,int,int *,size_t,int ,struct gk20a_volt*) ;
 int * VAR_3 ;
 int * VAR_4 ;
 struct gk20a_volt* FUNC_2 (int,int ) ;
 int FUNC_3 (struct nvkm_device*,char*,size_t) ;
 int * VAR_5 ;
 struct nvkm_device_tegra* FUNC_4 (struct nvkm_device*) ;

int
FUNC_5(struct nvkm_device *VAR_6, int VAR_7, struct nvkm_volt **VAR_8)
{
 struct nvkm_device_tegra *VAR_9 = VAR_6->func->tegra(VAR_6);
 struct gk20a_volt *VAR_10;
 u32 VAR_11;

 if (VAR_9->gpu_speedo_id >= FUNC_0(VAR_5)) {
  FUNC_3(VAR_6, "unsupported speedo %d\n",
       VAR_9->gpu_speedo_id);
  return -VAR_0;
 }

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;
 *VAR_8 = &VAR_10->base;

 VAR_11 = VAR_5[VAR_9->gpu_speedo_id];

 if (VAR_9->gpu_speedo_id >= 1)
  return FUNC_1(VAR_6, VAR_7, VAR_4,
         FUNC_0(VAR_4), VAR_11, VAR_10);
 else
  return FUNC_1(VAR_6, VAR_7, VAR_3,
     FUNC_0(VAR_3), VAR_11, VAR_10);
}
