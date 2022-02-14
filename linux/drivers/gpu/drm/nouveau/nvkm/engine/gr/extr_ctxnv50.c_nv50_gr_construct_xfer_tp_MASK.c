
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_grctx {struct nvkm_device* device; } ;
struct nvkm_device {int chipset; } ;


 int FUNC_0 (struct nvkm_grctx*) ;
 int FUNC_1 (struct nvkm_grctx*) ;
 int FUNC_2 (struct nvkm_grctx*) ;
 int FUNC_3 (struct nvkm_grctx*) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_grctx *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->device;
 if (VAR_1->chipset < 0xa0) {
  FUNC_2(VAR_0);
  FUNC_1(VAR_0);
  FUNC_0(VAR_0);
  FUNC_3(VAR_0);
 } else {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0);
  FUNC_3(VAR_0);
  FUNC_2(VAR_0);
 }
}
