
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct gf100_fifo {TYPE_2__ base; } ;


 int FUNC_0 (int) ;
 struct gf100_fifo* FUNC_1 (struct nvkm_fifo*) ;
 int FUNC_2 (struct gf100_fifo*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (struct gf100_fifo*,int) ;
 int FUNC_5 (struct gf100_fifo*) ;
 int FUNC_6 (struct gf100_fifo*) ;
 int FUNC_7 (struct nvkm_subdev*,char*,int) ;
 int FUNC_8 (struct nvkm_device*,int,int,int) ;
 int FUNC_9 (struct nvkm_device*,int) ;
 int FUNC_10 (struct nvkm_subdev*,char*,int) ;
 int FUNC_11 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_12(struct nvkm_fifo *VAR_0)
{
 struct gf100_fifo *VAR_1 = FUNC_1(VAR_0);
 struct nvkm_subdev *VAR_2 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 u32 VAR_4 = FUNC_9(VAR_3, 0x002140);
 u32 VAR_5 = FUNC_9(VAR_3, 0x002100) & VAR_4;

 if (VAR_5 & 0x00000001) {
  u32 VAR_6 = FUNC_9(VAR_3, 0x00252c);
  FUNC_10(VAR_2, "INTR 00000001: %08x\n", VAR_6);
  FUNC_11(VAR_3, 0x002100, 0x00000001);
  VAR_5 &= ~0x00000001;
 }

 if (VAR_5 & 0x00000100) {
  FUNC_6(VAR_1);
  FUNC_11(VAR_3, 0x002100, 0x00000100);
  VAR_5 &= ~0x00000100;
 }

 if (VAR_5 & 0x00010000) {
  u32 VAR_7 = FUNC_9(VAR_3, 0x00256c);
  FUNC_10(VAR_2, "INTR 00010000: %08x\n", VAR_7);
  FUNC_11(VAR_3, 0x002100, 0x00010000);
  VAR_5 &= ~0x00010000;
 }

 if (VAR_5 & 0x01000000) {
  u32 VAR_8 = FUNC_9(VAR_3, 0x00258c);
  FUNC_10(VAR_2, "INTR 01000000: %08x\n", VAR_8);
  FUNC_11(VAR_3, 0x002100, 0x01000000);
  VAR_5 &= ~0x01000000;
 }

 if (VAR_5 & 0x10000000) {
  u32 VAR_9 = FUNC_9(VAR_3, 0x00259c);
  while (VAR_9) {
   u32 VAR_10 = FUNC_0(VAR_9);
   FUNC_3(&VAR_1->base, VAR_10);
   FUNC_11(VAR_3, 0x00259c, (1 << VAR_10));
   VAR_9 &= ~(1 << VAR_10);
  }
  VAR_5 &= ~0x10000000;
 }

 if (VAR_5 & 0x20000000) {
  u32 VAR_11 = FUNC_9(VAR_3, 0x0025a0);
  while (VAR_11) {
   u32 VAR_12 = FUNC_0(VAR_11);
   FUNC_4(VAR_1, VAR_12);
   FUNC_11(VAR_3, 0x0025a0, (1 << VAR_12));
   VAR_11 &= ~(1 << VAR_12);
  }
  VAR_5 &= ~0x20000000;
 }

 if (VAR_5 & 0x40000000) {
  FUNC_5(VAR_1);
  VAR_5 &= ~0x40000000;
 }

 if (VAR_5 & 0x80000000) {
  FUNC_2(VAR_1);
  VAR_5 &= ~0x80000000;
 }

 if (VAR_5) {
  FUNC_7(VAR_2, "INTR %08x\n", VAR_5);
  FUNC_8(VAR_3, 0x002140, VAR_5, 0x00000000);
  FUNC_11(VAR_3, 0x002100, VAR_5);
 }
}
