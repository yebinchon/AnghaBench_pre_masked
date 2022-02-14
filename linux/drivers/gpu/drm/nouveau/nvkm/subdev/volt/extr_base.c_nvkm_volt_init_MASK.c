
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_volt {int dummy; } ;
struct nvkm_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,...) ;
 struct nvkm_volt* FUNC_1 (struct nvkm_subdev*) ;
 int FUNC_2 (struct nvkm_volt*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_subdev *VAR_1)
{
 struct nvkm_volt *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0) {
  if (VAR_3 != -VAR_0)
   FUNC_0(VAR_1, "current voltage unknown\n");
  return 0;
 }
 FUNC_0(VAR_1, "current voltage: %duv\n", VAR_3);
 return 0;
}
