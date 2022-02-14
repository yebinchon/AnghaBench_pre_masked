
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_secboot {int dummy; } ;
struct nvkm_gpuobj {int dummy; } ;
struct nvkm_falcon {int dummy; } ;


 int FUNC_0 (struct nvkm_secboot*,struct nvkm_gpuobj*,struct nvkm_falcon*) ;
 int FUNC_1 (struct nvkm_secboot*) ;
 scalar_t__ FUNC_2 (struct nvkm_secboot*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_secboot *VAR_0, struct nvkm_gpuobj *VAR_1,
         struct nvkm_falcon *VAR_2)
{
 int VAR_3;


 if (FUNC_2(VAR_0)) {
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
