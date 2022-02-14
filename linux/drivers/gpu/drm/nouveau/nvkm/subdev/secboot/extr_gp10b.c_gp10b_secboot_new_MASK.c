
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_secboot {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nvkm_acr {int dummy; } ;
struct gm200_secboot {struct nvkm_secboot base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct nvkm_acr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct nvkm_acr*) ;
 struct nvkm_acr* FUNC_3 (int) ;
 int VAR_5 ;
 struct gm200_secboot* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct nvkm_acr*,struct nvkm_device*,int,struct nvkm_secboot*) ;

int
FUNC_6(struct nvkm_device *VAR_6, int VAR_7,
    struct nvkm_secboot **VAR_8)
{
 int VAR_9;
 struct gm200_secboot *VAR_10;
 struct nvkm_acr *VAR_11;

 VAR_11 = FUNC_3(FUNC_0(VAR_2) |
      FUNC_0(VAR_3) |
      FUNC_0(VAR_4));
 if (FUNC_1(VAR_11))
  return FUNC_2(VAR_11);

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  VAR_8 = ((void*)0);
  return -VAR_0;
 }
 *VAR_8 = &VAR_10->base;

 VAR_9 = FUNC_5(&VAR_5, VAR_11, VAR_6, VAR_7, &VAR_10->base);
 if (VAR_9)
  return VAR_9;

 return 0;
}
