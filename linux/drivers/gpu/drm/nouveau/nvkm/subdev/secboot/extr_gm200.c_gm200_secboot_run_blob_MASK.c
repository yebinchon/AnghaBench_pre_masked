
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_vma {int addr; } ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_8__ {int device; } ;
struct nvkm_secboot {TYPE_3__ subdev; TYPE_5__* acr; } ;
struct nvkm_gpuobj {int size; } ;
struct nvkm_falcon {TYPE_4__* owner; } ;
struct TYPE_6__ {struct nvkm_subdev subdev; } ;
struct gm200_secboot {int vmm; int inst; TYPE_1__ base; } ;
struct TYPE_10__ {TYPE_2__* func; } ;
struct TYPE_9__ {int index; } ;
struct TYPE_7__ {int (* load ) (TYPE_5__*,struct nvkm_falcon*,struct nvkm_gpuobj*,int ) ;} ;


 struct gm200_secboot* FUNC_0 (struct nvkm_secboot*) ;
 int FUNC_1 (struct nvkm_falcon*,int ) ;
 int FUNC_2 (struct nvkm_falcon*,struct nvkm_subdev*) ;
 int FUNC_3 (struct nvkm_falcon*,struct nvkm_subdev*) ;
 int FUNC_4 (struct nvkm_falcon*,int) ;
 int FUNC_5 (struct nvkm_falcon*) ;
 int FUNC_6 (struct nvkm_falcon*,int) ;
 int FUNC_7 (struct nvkm_falcon*) ;
 int FUNC_8 (struct nvkm_falcon*,int) ;
 int FUNC_9 (struct nvkm_falcon*,int,int) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (struct nvkm_gpuobj*,int ,int ,struct nvkm_vma*,int *,int ) ;
 int FUNC_12 (int ,int,int ,struct nvkm_vma**) ;
 int FUNC_13 (int ,struct nvkm_vma**) ;
 int FUNC_14 (TYPE_5__*,struct nvkm_falcon*,struct nvkm_gpuobj*,int ) ;

int
FUNC_15(struct nvkm_secboot *VAR_0, struct nvkm_gpuobj *VAR_1,
         struct nvkm_falcon *VAR_2)
{
 struct gm200_secboot *VAR_3 = FUNC_0(VAR_0);
 struct nvkm_subdev *VAR_4 = &VAR_3->base.subdev;
 struct nvkm_vma *VAR_5 = ((void*)0);
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_4);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_12(VAR_3->vmm, 12, VAR_1->size, &VAR_5);
 if (VAR_7) {
  FUNC_3(VAR_2, VAR_4);
  return VAR_7;
 }

 VAR_7 = FUNC_11(VAR_1, 0, VAR_3->vmm, VAR_5, ((void*)0), 0);
 if (VAR_7)
  goto end;


 VAR_7 = FUNC_5(VAR_2);
 if (VAR_7)
  goto end;
 FUNC_1(VAR_2, VAR_3->inst);


 VAR_7 = VAR_0->acr->func->load(VAR_0->acr, VAR_2, VAR_1, VAR_5->addr);
 if (VAR_7 < 0)
  goto end;

 VAR_6 = VAR_7;


 FUNC_10(VAR_0->subdev.device, VAR_2->owner->index, 0);


 FUNC_9(VAR_2, 0x040, 0xdeada5a5);


 FUNC_6(VAR_2, VAR_6);
 FUNC_7(VAR_2);
 VAR_7 = FUNC_8(VAR_2, 100);
 if (VAR_7)
  goto end;





 VAR_7 = FUNC_4(VAR_2, 0x040);

end:

 FUNC_10(VAR_0->subdev.device, VAR_2->owner->index, 1);


 FUNC_13(VAR_3->vmm, &VAR_5);
 FUNC_3(VAR_2, VAR_4);

 return VAR_7;
}
