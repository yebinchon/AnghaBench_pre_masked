
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_engine {TYPE_1__* func; } ;
struct TYPE_2__ {int (* fini ) (struct nvkm_engine*,int) ;} ;


 struct nvkm_engine* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_engine*,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_subdev *VAR_0, bool VAR_1)
{
 struct nvkm_engine *VAR_2 = FUNC_0(VAR_0);
 if (VAR_2->func->fini)
  return VAR_2->func->fini(VAR_2, VAR_1);
 return 0;
}
