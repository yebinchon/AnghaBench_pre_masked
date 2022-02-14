
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
 FUNC_0(VAR_0, 2, 0);
 FUNC_0(VAR_0, 0x800, 0);
 switch (VAR_1->chipset) {
 case 0x50:
 case 0x92:
 case 0xa0:
  FUNC_0(VAR_0, 0x2b, 0);
  break;
 case 0x84:
  FUNC_0(VAR_0, 0x29, 0);
  break;
 case 0x94:
 case 0x96:
 case 0xa3:
  FUNC_0(VAR_0, 0x27, 0);
  break;
 case 0x86:
 case 0x98:
 case 0xa5:
 case 0xa8:
 case 0xaa:
 case 0xac:
 case 0xaf:
  FUNC_0(VAR_0, 0x25, 0);
  break;
 }


 FUNC_0(VAR_0, 0x100, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 0x30, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 4, 0);
 FUNC_0(VAR_0, 0x100, 0);
 FUNC_0(VAR_0, 8, 0);
 FUNC_0(VAR_0, 8, 0);
 FUNC_0(VAR_0, 4, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0x3fffff);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0x1fff);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
 FUNC_0(VAR_0, 1, 0);
}
