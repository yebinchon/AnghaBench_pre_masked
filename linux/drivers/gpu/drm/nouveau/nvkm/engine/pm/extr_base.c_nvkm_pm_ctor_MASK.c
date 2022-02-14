
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_pm_func {int dummy; } ;
struct nvkm_pm {int engine; int sources; int domains; struct nvkm_pm_func const* func; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct nvkm_device*,int,int,int *) ;
 int VAR_0 ;

int
FUNC_2(const struct nvkm_pm_func *VAR_1, struct nvkm_device *VAR_2,
      int VAR_3, struct nvkm_pm *VAR_4)
{
 VAR_4->func = VAR_1;
 FUNC_0(&VAR_4->domains);
 FUNC_0(&VAR_4->sources);
 return FUNC_1(&VAR_0, VAR_2, VAR_3, 1, &VAR_4->engine);
}
