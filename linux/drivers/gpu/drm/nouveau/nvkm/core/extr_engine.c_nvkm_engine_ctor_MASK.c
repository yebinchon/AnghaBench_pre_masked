
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_engine_func {int dummy; } ;
struct nvkm_engine {int lock; int subdev; struct nvkm_engine_func const* func; } ;
struct nvkm_device {int cfgopt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct nvkm_device*,int,int *) ;
 int * VAR_2 ;
 int FUNC_3 (int *) ;

int
FUNC_4(const struct nvkm_engine_func *VAR_3,
   struct nvkm_device *VAR_4, int VAR_5, bool VAR_6,
   struct nvkm_engine *VAR_7)
{
 FUNC_2(&VAR_1, VAR_4, VAR_5, &VAR_7->subdev);
 VAR_7->func = VAR_3;

 if (!FUNC_0(VAR_4->cfgopt, VAR_2[VAR_5], VAR_6)) {
  FUNC_1(&VAR_7->subdev, "disabled\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_7->lock);
 return 0;
}
