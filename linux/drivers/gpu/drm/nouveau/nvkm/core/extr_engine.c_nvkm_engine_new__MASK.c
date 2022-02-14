
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_engine_func {int dummy; } ;
struct nvkm_engine {int dummy; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_engine* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_engine_func const*,struct nvkm_device*,int,int,struct nvkm_engine*) ;

int
FUNC_2(const struct nvkm_engine_func *VAR_2,
   struct nvkm_device *VAR_3, int VAR_4, bool VAR_5,
   struct nvkm_engine **VAR_6)
{
 if (!(*VAR_6 = FUNC_0(sizeof(**VAR_6), VAR_1)))
  return -VAR_0;
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, *VAR_6);
}
