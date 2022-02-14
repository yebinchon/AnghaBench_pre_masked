
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
 int VAR_2 = 0x10, VAR_3, VAR_4;

 if (FUNC_0(VAR_1->chipset))
  VAR_2 = 0x20;

 if (VAR_1->chipset >= 0xa0) {
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 1, 1);
 }
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0xf);
 FUNC_1(VAR_0, (VAR_2/8)-1, 0);
 FUNC_1(VAR_0, VAR_2/8, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0x20);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);

 if (FUNC_0(VAR_1->chipset))
  FUNC_1(VAR_0, 0xb, 0);
 else if (VAR_1->chipset >= 0xa0)
  FUNC_1(VAR_0, 0x9, 0);
 else
  FUNC_1(VAR_0, 0x8, 0);

 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0x1a);

 FUNC_1(VAR_0, 0xc, 0);

 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 8);
 FUNC_1(VAR_0, 1, 0);
 if (VAR_1->chipset == 0x50)
  FUNC_1(VAR_0, 1, 0x3ff);
 else
  FUNC_1(VAR_0, 1, 0x7ff);
 if (VAR_1->chipset == 0xa8)
  FUNC_1(VAR_0, 1, 0x1e00);

 FUNC_1(VAR_0, 0xc, 0);

 FUNC_1(VAR_0, 1, 0xf);
 FUNC_1(VAR_0, (VAR_2/8)-1, 0);
 FUNC_1(VAR_0, 1, 0);
 if (VAR_1->chipset > 0x50 && VAR_1->chipset < 0xa0)
  FUNC_1(VAR_0, 2, 0);
 else
  FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);

 if (FUNC_0(VAR_1->chipset)) {
  FUNC_1(VAR_0, 0x10, 0);
  FUNC_1(VAR_0, 2, 0);
  FUNC_1(VAR_0, 2, 0);
 } else {
  FUNC_1(VAR_0, 8, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 2, 0);
 }

 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, VAR_2, 0);
 if (VAR_1->chipset >= 0xa0)
  FUNC_1(VAR_0, 1, 0);

 FUNC_1(VAR_0, VAR_2, 0);
 FUNC_1(VAR_0, 1, 0);

 FUNC_1(VAR_0, VAR_2, 0);
 FUNC_1(VAR_0, 1, 0);

 FUNC_1(VAR_0, VAR_2, 0);
 FUNC_1(VAR_0, 2, 0);

 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);

 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);

 FUNC_1(VAR_0, VAR_2, 0);
 FUNC_1(VAR_0, 3, 0);

 FUNC_1(VAR_0, VAR_2, 0);
 FUNC_1(VAR_0, 3, 0);

 FUNC_1(VAR_0, VAR_2, 0);
 FUNC_1(VAR_0, 3, 0);

 FUNC_1(VAR_0, VAR_2, 0);
 FUNC_1(VAR_0, 3, 0);

 FUNC_1(VAR_0, VAR_2, 0);
 FUNC_1(VAR_0, 3, 0);

 FUNC_1(VAR_0, VAR_2, 0);
 FUNC_1(VAR_0, 3, 0);

 if (FUNC_0(VAR_1->chipset)) {
  FUNC_1(VAR_0, VAR_2, 0);
  FUNC_1(VAR_0, 3, 0);
 }

 if (FUNC_0(VAR_1->chipset))
  FUNC_1(VAR_0, 2, 0);
 else
  FUNC_1(VAR_0, 5, 0);

 FUNC_1(VAR_0, 1, 0);

 if (VAR_1->chipset < 0xa0) {
  FUNC_1(VAR_0, 0x41, 0);

  FUNC_1(VAR_0, 0x11, 0);
 } else if (!FUNC_0(VAR_1->chipset))
  FUNC_1(VAR_0, 0x50, 0);
 else
  FUNC_1(VAR_0, 0x58, 0);

 FUNC_1(VAR_0, 1, 0xf);
 FUNC_1(VAR_0, (VAR_2/8)-1, 0);
 FUNC_1(VAR_0, 1, 1);

 FUNC_1(VAR_0, VAR_2*4, 0);
 FUNC_1(VAR_0, 4, 0);

 if (FUNC_0(VAR_1->chipset))
  FUNC_1(VAR_0, 0x1d, 0);
 else
  FUNC_1(VAR_0, 0x16, 0);

 FUNC_1(VAR_0, 1, 0xf);
 FUNC_1(VAR_0, (VAR_2/8)-1, 0);

 if (VAR_1->chipset < 0xa0)
  FUNC_1(VAR_0, 8, 0);
 else if (FUNC_0(VAR_1->chipset))
  FUNC_1(VAR_0, 0xc, 0);
 else
  FUNC_1(VAR_0, 7, 0);

 FUNC_1(VAR_0, 0xa, 0);
 if (VAR_1->chipset == 0xa0)
  VAR_3 = 0xc;
 else
  VAR_3 = 4;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {

  if (FUNC_0(VAR_1->chipset))
   FUNC_1(VAR_0, 0x20, 0);
  FUNC_1(VAR_0, 0x200, 0);
  FUNC_1(VAR_0, 4, 0);
  FUNC_1(VAR_0, 4, 0);
 }

 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0xf);
 FUNC_1(VAR_0, (VAR_2/8)-1, 0);
 FUNC_1(VAR_0, VAR_2/8, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);

 if (FUNC_0(VAR_1->chipset))
  FUNC_1(VAR_0, 7, 0);
 else
  FUNC_1(VAR_0, 5, 0);
}
