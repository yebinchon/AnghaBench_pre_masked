
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
 int VAR_2;


 FUNC_1(VAR_0, 0x33, 0);

 FUNC_1(VAR_0, 2, 0);

 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 4);

 if (FUNC_0(VAR_1->chipset)) {
  FUNC_1(VAR_0, 4, 0);
  FUNC_1(VAR_0, 0xe10, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 8, 0);
  FUNC_1(VAR_0, 9, 0);

  FUNC_1(VAR_0, 4, 0);
  FUNC_1(VAR_0, 0xe10, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 8, 0);
  FUNC_1(VAR_0, 9, 0);
 } else {
  FUNC_1(VAR_0, 0xc, 0);

  FUNC_1(VAR_0, 0xe10, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 8, 0);


  FUNC_1(VAR_0, 0xc, 0);

  FUNC_1(VAR_0, 0xe10, 0);
  FUNC_1(VAR_0, 1, 0);
  FUNC_1(VAR_0, 8, 0);
 }

 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 4);
 FUNC_1(VAR_0, 1, 0x8100c12);
 if (VAR_1->chipset != 0x50)
  FUNC_1(VAR_0, 1, 3);

 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0x8100c12);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0x80c14);
 FUNC_1(VAR_0, 1, 1);

 if (VAR_1->chipset >= 0xa0)
  FUNC_1(VAR_0, 2, 4);
 FUNC_1(VAR_0, 1, 0x80c14);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0x8100c12);
 FUNC_1(VAR_0, 1, 0x27);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 1);
 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {

  FUNC_1(VAR_0, 0x40, 0);
  FUNC_1(VAR_0, 0x10, 0);
  FUNC_1(VAR_0, 0x10, 0);
 }

 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 1);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 4, 0);
 FUNC_1(VAR_0, 0x10, 0);
 FUNC_1(VAR_0, 1, 0);
 FUNC_1(VAR_0, 1, 0x8100c12);
 if (VAR_1->chipset != 0x50)
  FUNC_1(VAR_0, 1, 0);
}
