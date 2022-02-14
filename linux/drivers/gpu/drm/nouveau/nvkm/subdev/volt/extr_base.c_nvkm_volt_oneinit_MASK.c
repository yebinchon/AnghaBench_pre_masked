
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_volt {scalar_t__ speedo; TYPE_1__* func; int subdev; } ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {int (* oneinit ) (struct nvkm_volt*) ;} ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 struct nvkm_volt* FUNC_1 (struct nvkm_subdev*) ;
 scalar_t__ FUNC_2 (struct nvkm_volt*) ;
 int FUNC_3 (struct nvkm_volt*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_subdev *VAR_0)
{
 struct nvkm_volt *VAR_1 = FUNC_1(VAR_0);

 VAR_1->speedo = FUNC_2(VAR_1);
 if (VAR_1->speedo > 0)
  FUNC_0(&VAR_1->subdev, "speedo %x\n", VAR_1->speedo);

 if (VAR_1->func->oneinit)
  return VAR_1->func->oneinit(VAR_1);

 return 0;
}
