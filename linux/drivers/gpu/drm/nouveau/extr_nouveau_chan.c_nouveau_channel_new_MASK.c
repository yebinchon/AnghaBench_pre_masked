
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ client; } ;
struct nvif_device {TYPE_1__ object; } ;
struct nouveau_drm {int dummy; } ;
struct TYPE_6__ {int super; } ;
struct nouveau_cli {TYPE_3__ base; } ;
struct nouveau_channel {int inst; TYPE_2__* vmm; } ;
struct TYPE_5__ {int svmm; } ;


 int FUNC_0 (int ,struct nouveau_cli*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nouveau_channel**) ;
 int FUNC_2 (struct nouveau_drm*,struct nvif_device*,struct nouveau_channel**) ;
 int FUNC_3 (struct nouveau_drm*,struct nvif_device*,int ,int,struct nouveau_channel**) ;
 int FUNC_4 (struct nouveau_channel*,int ,int ) ;
 int FUNC_5 (int ,int ) ;

int
FUNC_6(struct nouveau_drm *VAR_2, struct nvif_device *VAR_3,
      u32 VAR_4, u32 VAR_5, bool VAR_6,
      struct nouveau_channel **VAR_7)
{
 struct nouveau_cli *VAR_8 = (void *)VAR_3->object.client;
 bool VAR_9;
 int VAR_10;


 VAR_9 = VAR_8->base.super;
 VAR_8->base.super = 1;

 VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7);
 if (VAR_10) {
  FUNC_0(VAR_0, VAR_8, "ib channel create, %d\n", VAR_10);
  VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_7);
  if (VAR_10) {
   FUNC_0(VAR_0, VAR_8, "dma channel create, %d\n", VAR_10);
   goto done;
  }
 }

 VAR_10 = FUNC_4(*VAR_7, VAR_4, VAR_5);
 if (VAR_10) {
  FUNC_0(VAR_1, VAR_8, "channel failed to initialise, %d\n", VAR_10);
  FUNC_1(VAR_7);
 }

 VAR_10 = FUNC_5((*VAR_7)->vmm->svmm, (*VAR_7)->inst);
 if (VAR_10)
  FUNC_1(VAR_7);

done:
 VAR_8->base.super = VAR_9;
 return VAR_10;
}
