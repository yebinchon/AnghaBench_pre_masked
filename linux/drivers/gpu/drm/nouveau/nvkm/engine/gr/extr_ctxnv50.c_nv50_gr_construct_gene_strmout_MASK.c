
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_grctx {struct nvkm_device* device; } ;
struct nvkm_device {int chipset; } ;


 int FUNC_0 (struct nvkm_grctx*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_grctx *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->device;
 FUNC_0(VAR_0, 1, 0x102);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 4, 4);
 if (VAR_1->chipset >= 0xa0) {
  FUNC_0(VAR_0, 4, 0);
  FUNC_0(VAR_0, 4, 0);
 }
 FUNC_0(VAR_0, 1, 4);
 FUNC_0(VAR_0, 1, 4);
 FUNC_0(VAR_0, 1, 0);
 if (VAR_1->chipset == 0x50)
  FUNC_0(VAR_0, 1, 0x3ff);
 else
  FUNC_0(VAR_0, 1, 0x7ff);
 FUNC_0(VAR_0, 1, 0);

 FUNC_0(VAR_0, 1, 0x102);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 4, 0);
 FUNC_0(VAR_0, 4, 0);
 FUNC_0(VAR_0, 4, 4);
 if (VAR_1->chipset >= 0xa0) {
  FUNC_0(VAR_0, 4, 0);
  FUNC_0(VAR_0, 4, 0);
 }
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 2, 0);
 FUNC_0(VAR_0, 2, 0);
 FUNC_0(VAR_0, 1, 0);

 FUNC_0(VAR_0, 0x20, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 2, 0);
}
