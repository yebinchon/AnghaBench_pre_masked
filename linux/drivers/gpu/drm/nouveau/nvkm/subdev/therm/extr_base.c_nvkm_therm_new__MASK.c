
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_therm_func {int dummy; } ;
struct nvkm_therm {int dummy; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_therm* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_therm*,struct nvkm_device*,int,struct nvkm_therm_func const*) ;

int
FUNC_2(const struct nvkm_therm_func *VAR_2, struct nvkm_device *VAR_3,
  int VAR_4, struct nvkm_therm **VAR_5)
{
 struct nvkm_therm *VAR_6;

 if (!(VAR_6 = *VAR_5 = FUNC_0(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;

 FUNC_1(VAR_6, VAR_3, VAR_4, VAR_2);
 return 0;
}
