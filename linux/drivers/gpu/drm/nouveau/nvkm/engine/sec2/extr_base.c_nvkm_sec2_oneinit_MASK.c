
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int index; int device; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct nvkm_sec2 {int falcon; scalar_t__ addr; TYPE_1__ engine; } ;
struct nvkm_engine {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_subdev*,char*,scalar_t__,int *) ;
 struct nvkm_sec2* FUNC_2 (struct nvkm_engine*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_engine *VAR_1)
{
 struct nvkm_sec2 *VAR_2 = FUNC_2(VAR_1);
 struct nvkm_subdev *VAR_3 = &VAR_2->engine.subdev;

 if (!VAR_2->addr) {
  VAR_2->addr = FUNC_3(VAR_3->device, VAR_3->index);
  if (FUNC_0(!VAR_2->addr))
   return -VAR_0;
 }

 return FUNC_1(VAR_3, "SEC2", VAR_2->addr, &VAR_2->falcon);
}
