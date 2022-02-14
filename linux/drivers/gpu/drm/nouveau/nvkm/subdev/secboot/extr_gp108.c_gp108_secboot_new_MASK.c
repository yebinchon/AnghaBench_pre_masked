
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_secboot {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nvkm_acr {TYPE_1__* func; } ;
struct gm200_secboot {struct nvkm_secboot base; } ;
struct TYPE_2__ {int (* dtor ) (struct nvkm_acr*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct nvkm_acr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct nvkm_acr*) ;
 struct nvkm_acr* FUNC_3 (int ,int) ;
 int VAR_5 ;
 struct gm200_secboot* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct nvkm_acr*,struct nvkm_device*,int,struct nvkm_secboot*) ;
 int FUNC_6 (struct nvkm_acr*) ;

int
FUNC_7(struct nvkm_device *VAR_6, int VAR_7,
    struct nvkm_secboot **VAR_8)
{
 struct gm200_secboot *VAR_9;
 struct nvkm_acr *VAR_10;

 VAR_10 = FUNC_3(VAR_4,
      FUNC_0(VAR_2) |
      FUNC_0(VAR_3) |
      FUNC_0(VAR_4));
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 if (!(VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1))) {
  VAR_10->func->dtor(VAR_10);
  return -VAR_0;
 }
 *VAR_8 = &VAR_9->base;

 return FUNC_5(&VAR_5, VAR_10, VAR_6, VAR_7, &VAR_9->base);
}
