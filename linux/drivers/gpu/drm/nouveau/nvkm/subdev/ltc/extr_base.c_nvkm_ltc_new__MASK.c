
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_ltc_func {int zbc; } ;
struct nvkm_ltc {int zbc_min; scalar_t__ zbc_max; struct nvkm_ltc_func const* func; int subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvkm_ltc* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct nvkm_device*,int,int *) ;

int
FUNC_3(const struct nvkm_ltc_func *VAR_4, struct nvkm_device *VAR_5,
       int VAR_6, struct nvkm_ltc **VAR_7)
{
 struct nvkm_ltc *VAR_8;

 if (!(VAR_8 = *VAR_7 = FUNC_0(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;

 FUNC_2(&VAR_3, VAR_5, VAR_6, &VAR_8->subdev);
 VAR_8->func = VAR_4;
 VAR_8->zbc_min = 1;
 VAR_8->zbc_max = FUNC_1(VAR_4->zbc, VAR_2) - 1;
 return 0;
}
