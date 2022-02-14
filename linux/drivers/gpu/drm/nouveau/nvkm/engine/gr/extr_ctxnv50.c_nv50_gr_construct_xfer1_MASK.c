
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_grctx {int ctxvals_pos; int ctxvals_base; struct nvkm_device* device; } ;
struct nvkm_device {int chipset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nvkm_grctx*,int) ;
 int FUNC_1 (struct nvkm_grctx*,int ) ;
 int FUNC_2 (struct nvkm_grctx*,int ,int ) ;
 int FUNC_3 (struct nvkm_grctx*) ;
 int FUNC_4 (struct nvkm_grctx*) ;
 int FUNC_5 (struct nvkm_grctx*) ;
 int FUNC_6 (struct nvkm_grctx*) ;
 int FUNC_7 (struct nvkm_grctx*) ;
 int FUNC_8 (struct nvkm_grctx*) ;
 int FUNC_9 (struct nvkm_grctx*) ;
 int FUNC_10 (struct nvkm_grctx*) ;
 int FUNC_11 (struct nvkm_grctx*) ;
 int FUNC_12 (struct nvkm_grctx*) ;
 int FUNC_13 (struct nvkm_grctx*) ;
 int FUNC_14 (struct nvkm_grctx*) ;
 int FUNC_15 (struct nvkm_grctx*) ;
 int FUNC_16 (struct nvkm_grctx*) ;
 int FUNC_17 (struct nvkm_grctx*) ;
 int FUNC_18 (struct nvkm_grctx*) ;
 int FUNC_19 (struct nvkm_grctx*) ;
 int FUNC_20 (struct nvkm_grctx*) ;
 int FUNC_21 (struct nvkm_device*,int) ;

__attribute__((used)) static void
FUNC_22(struct nvkm_grctx *VAR_5)
{
 struct nvkm_device *VAR_6 = VAR_5->device;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 u32 VAR_10 = FUNC_21(VAR_6, 0x1540);

 VAR_8 = (VAR_5->ctxvals_pos+0x3f)&~0x3f;
 VAR_5->ctxvals_base = VAR_8;

 if (VAR_6->chipset < 0xa0) {

  VAR_5->ctxvals_pos = VAR_8;
  FUNC_6(VAR_5);
  FUNC_8(VAR_5);
  FUNC_16(VAR_5);
  FUNC_4(VAR_5);
  FUNC_19(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
   VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 0x1;
  FUNC_18(VAR_5);
  FUNC_7(VAR_5);
  FUNC_5(VAR_5);
  FUNC_10(VAR_5);
  FUNC_11(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
   VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 0x2;
  FUNC_3(VAR_5);
  FUNC_15(VAR_5);
  FUNC_12(VAR_5);
  FUNC_14(VAR_5);
  FUNC_13(VAR_5);
  FUNC_17(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
   VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 3;
  for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
   if (VAR_10 & (1 << (VAR_7 + 16)))
    FUNC_9(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
   VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;


  for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
   VAR_5->ctxvals_pos = VAR_8 + 4 + VAR_7;
   if (VAR_10 & (1 << (2 * VAR_7)))
    FUNC_20(VAR_5);
   if (VAR_10 & (1 << (2 * VAR_7 + 1)))
    FUNC_20(VAR_5);
   if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
    VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;
  }
 } else {

  VAR_5->ctxvals_pos = VAR_8;
  FUNC_6(VAR_5);
  FUNC_8(VAR_5);
  FUNC_17(VAR_5);
  FUNC_5(VAR_5);
  FUNC_15(VAR_5);
  FUNC_12(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
   VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 1;
  FUNC_13(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
   VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 2;
  if (VAR_6->chipset == 0xa0)
   FUNC_14(VAR_5);
  FUNC_16(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
   VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 3;
  FUNC_18(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
   VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 4;
  FUNC_3(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
   VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 5;
  FUNC_11(VAR_5);
  FUNC_10(VAR_5);

  for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
   if (VAR_10 & (1<<(VAR_7+16)))
    FUNC_9(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
   VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 6;
  FUNC_19(VAR_5);
  FUNC_4(VAR_5);
  FUNC_7(VAR_5);
  if (VAR_10 & (1 << 0))
   FUNC_20(VAR_5);
  if (VAR_10 & (1 << 1))
   FUNC_20(VAR_5);
  if (VAR_10 & (1 << 2))
   FUNC_20(VAR_5);
  if (VAR_10 & (1 << 3))
   FUNC_20(VAR_5);
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
   VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;


  VAR_5->ctxvals_pos = VAR_8 + 7;
  if (VAR_6->chipset == 0xa0) {
   if (VAR_10 & (1 << 4))
    FUNC_20(VAR_5);
   if (VAR_10 & (1 << 5))
    FUNC_20(VAR_5);
   if (VAR_10 & (1 << 6))
    FUNC_20(VAR_5);
   if (VAR_10 & (1 << 7))
    FUNC_20(VAR_5);
   if (VAR_10 & (1 << 8))
    FUNC_20(VAR_5);
   if (VAR_10 & (1 << 9))
    FUNC_20(VAR_5);
  } else {
   FUNC_14(VAR_5);
  }
  if ((VAR_5->ctxvals_pos-VAR_8)/8 > VAR_9)
   VAR_9 = (VAR_5->ctxvals_pos-VAR_8)/8;
 }

 VAR_5->ctxvals_pos = VAR_8 + VAR_9 * 8;
 VAR_5->ctxvals_pos = (VAR_5->ctxvals_pos+0x3f)&~0x3f;
 FUNC_0 (VAR_5, VAR_8);
 FUNC_1 (VAR_5, VAR_2);
 FUNC_0 (VAR_5, VAR_9);
 FUNC_1 (VAR_5, VAR_1);
 FUNC_1 (VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_4, VAR_0);
}
