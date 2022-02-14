
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev_func {int dummy; } ;
struct nvkm_subdev {int index; int debug; int mutex; struct nvkm_device* device; struct nvkm_subdev_func const* func; } ;
struct nvkm_device {int dbgopt; } ;


 int FUNC_0 (int *,char const*,int *) ;
 int FUNC_1 (int ,char const*) ;
 int * VAR_0 ;
 char** VAR_1 ;

void
FUNC_2(const struct nvkm_subdev_func *VAR_2,
   struct nvkm_device *VAR_3, int VAR_4,
   struct nvkm_subdev *VAR_5)
{
 const char *VAR_6 = VAR_1[VAR_4];
 VAR_5->func = VAR_2;
 VAR_5->device = VAR_3;
 VAR_5->index = VAR_4;

 FUNC_0(&VAR_5->mutex, VAR_6, &VAR_0[VAR_4]);
 VAR_5->debug = FUNC_1(VAR_3->dbgopt, VAR_6);
}
