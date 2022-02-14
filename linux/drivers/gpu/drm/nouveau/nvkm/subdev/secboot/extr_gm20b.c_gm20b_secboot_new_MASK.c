
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_secboot {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nvkm_acr {int optional_falcons; } ;
struct gm200_secboot {struct nvkm_secboot base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct nvkm_acr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct nvkm_acr*) ;
 struct nvkm_acr* FUNC_3 (int) ;
 int VAR_4 ;
 struct gm200_secboot* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct nvkm_acr*,struct nvkm_device*,int,struct nvkm_secboot*) ;

int
FUNC_6(struct nvkm_device *VAR_5, int VAR_6,
    struct nvkm_secboot **VAR_7)
{
 int VAR_8;
 struct gm200_secboot *VAR_9;
 struct nvkm_acr *VAR_10;

 VAR_10 = FUNC_3(FUNC_0(VAR_2) |
      FUNC_0(VAR_3));
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 VAR_10->optional_falcons = FUNC_0(VAR_3);

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (!VAR_9) {
  VAR_7 = ((void*)0);
  return -VAR_0;
 }
 *VAR_7 = &VAR_9->base;

 VAR_8 = FUNC_5(&VAR_4, VAR_10, VAR_5, VAR_6, &VAR_9->base);
 if (VAR_8)
  return VAR_8;

 return 0;
}
