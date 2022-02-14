
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {int * data; } ;
struct TYPE_6__ {int * data; } ;
struct TYPE_9__ {struct nvkm_device* device; } ;
struct TYPE_10__ {TYPE_4__ subdev; } ;
struct nvkm_falcon {TYPE_2__ code; TYPE_1__ data; scalar_t__ external; int core; scalar_t__ addr; TYPE_5__ engine; } ;
struct TYPE_8__ {int index; } ;
struct nvkm_engine {TYPE_3__ subdev; } ;
struct nvkm_device {int dummy; } ;


 struct nvkm_falcon* FUNC_0 (struct nvkm_engine*) ;
 int FUNC_1 (struct nvkm_device*,scalar_t__ const,int,int) ;
 scalar_t__ FUNC_2 (struct nvkm_device*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nvkm_device*,scalar_t__ const,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_engine *VAR_0, bool VAR_1)
{
 struct nvkm_falcon *VAR_2 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_3 = VAR_2->engine.subdev.device;
 const u32 VAR_4 = VAR_2->addr;

 if (!VAR_1) {
  FUNC_3(&VAR_2->core);
  if (VAR_2->external) {
   FUNC_5(VAR_2->data.data);
   FUNC_5(VAR_2->code.data);
   VAR_2->code.data = ((void*)0);
  }
 }

 if (FUNC_2(VAR_3, VAR_0->subdev.index)) {
  FUNC_1(VAR_3, VAR_4 + 0x048, 0x00000003, 0x00000000);
  FUNC_4(VAR_3, VAR_4 + 0x014, 0xffffffff);
 }
 return 0;
}
