
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int size; int data; } ;
struct TYPE_6__ {int size; int data; } ;
struct nvkm_falcon_func {TYPE_4__ data; TYPE_2__ code; } ;
struct nvkm_engine {int dummy; } ;
struct TYPE_7__ {int size; int data; } ;
struct TYPE_5__ {int size; int data; } ;
struct nvkm_falcon {struct nvkm_engine engine; TYPE_3__ data; TYPE_1__ code; int addr; struct nvkm_falcon_func const* func; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_falcon* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct nvkm_device*,int,int,struct nvkm_engine*) ;
 int VAR_2 ;

int
FUNC_2(const struct nvkm_falcon_func *VAR_3,
   struct nvkm_device *VAR_4, int VAR_5, bool VAR_6,
   u32 VAR_7, struct nvkm_engine **VAR_8)
{
 struct nvkm_falcon *VAR_9;

 if (!(VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_1)))
  return -VAR_0;
 VAR_9->func = VAR_3;
 VAR_9->addr = VAR_7;
 VAR_9->code.data = VAR_3->code.data;
 VAR_9->code.size = VAR_3->code.size;
 VAR_9->data.data = VAR_3->data.data;
 VAR_9->data.size = VAR_3->data.size;
 *VAR_8 = &VAR_9->engine;

 return FUNC_1(&VAR_2, VAR_4, VAR_5,
    VAR_6, &VAR_9->engine);
}
