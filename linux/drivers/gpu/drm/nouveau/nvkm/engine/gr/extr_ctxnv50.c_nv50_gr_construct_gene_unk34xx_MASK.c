
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_grctx {struct nvkm_device* device; } ;
struct nvkm_device {int chipset; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_grctx*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_grctx *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->device;

 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 0x10, 0x04000000);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 0x20, 0);
 FUNC_1(VAR_0, 2, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0x04e3bfdf);
 FUNC_1(VAR_0, 1, 0x04e3bfdf);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0x1fe21);
 if (VAR_1->chipset >= 0xa0)
  FUNC_1(VAR_0, 1, 0x0fac6881);
 if (FUNC_0(VAR_1->chipset)) {
  FUNC_1(VAR_0, 1, 1);
  FUNC_1(VAR_0, 3, 0);
 }
}
