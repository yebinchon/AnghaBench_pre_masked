
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct TYPE_8__ {TYPE_1__ engine; } ;
struct gk104_fifo {TYPE_4__ base; TYPE_3__* func; } ;
struct TYPE_6__ {int (* fault ) (TYPE_4__*,int) ;} ;
struct TYPE_7__ {TYPE_2__ intr; } ;


 int FUNC_0 (int) ;
 struct gk104_fifo* FUNC_1 (struct nvkm_fifo*) ;
 int FUNC_2 (struct gk104_fifo*) ;
 int FUNC_3 (struct gk104_fifo*) ;
 int FUNC_4 (struct gk104_fifo*) ;
 int FUNC_5 (struct gk104_fifo*) ;
 int FUNC_6 (struct gk104_fifo*,int) ;
 int FUNC_7 (struct gk104_fifo*,int) ;
 int FUNC_8 (struct gk104_fifo*) ;
 int FUNC_9 (struct gk104_fifo*) ;
 int FUNC_10 (struct nvkm_subdev*,char*,...) ;
 int FUNC_11 (struct nvkm_device*,int,int,int) ;
 int FUNC_12 (struct nvkm_device*,int) ;
 int FUNC_13 (struct nvkm_device*,int,int) ;
 int FUNC_14 (TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_15(struct nvkm_fifo *VAR_0)
{
 struct gk104_fifo *VAR_1 = FUNC_1(VAR_0);
 struct nvkm_subdev *VAR_2 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 u32 VAR_4 = FUNC_12(VAR_3, 0x002140);
 u32 VAR_5 = FUNC_12(VAR_3, 0x002100) & VAR_4;

 if (VAR_5 & 0x00000001) {
  FUNC_2(VAR_1);
  FUNC_13(VAR_3, 0x002100, 0x00000001);
  VAR_5 &= ~0x00000001;
 }

 if (VAR_5 & 0x00000010) {
  FUNC_10(VAR_2, "PIO_ERROR\n");
  FUNC_13(VAR_3, 0x002100, 0x00000010);
  VAR_5 &= ~0x00000010;
 }

 if (VAR_5 & 0x00000100) {
  FUNC_9(VAR_1);
  FUNC_13(VAR_3, 0x002100, 0x00000100);
  VAR_5 &= ~0x00000100;
 }

 if (VAR_5 & 0x00010000) {
  FUNC_3(VAR_1);
  FUNC_13(VAR_3, 0x002100, 0x00010000);
  VAR_5 &= ~0x00010000;
 }

 if (VAR_5 & 0x00800000) {
  FUNC_10(VAR_2, "FB_FLUSH_TIMEOUT\n");
  FUNC_13(VAR_3, 0x002100, 0x00800000);
  VAR_5 &= ~0x00800000;
 }

 if (VAR_5 & 0x01000000) {
  FUNC_10(VAR_2, "LB_ERROR\n");
  FUNC_13(VAR_3, 0x002100, 0x01000000);
  VAR_5 &= ~0x01000000;
 }

 if (VAR_5 & 0x08000000) {
  FUNC_4(VAR_1);
  FUNC_13(VAR_3, 0x002100, 0x08000000);
  VAR_5 &= ~0x08000000;
 }

 if (VAR_5 & 0x10000000) {
  u32 VAR_6 = FUNC_12(VAR_3, 0x00259c);
  while (VAR_6) {
   u32 VAR_7 = FUNC_0(VAR_6);
   VAR_1->func->intr.fault(&VAR_1->base, VAR_7);
   FUNC_13(VAR_3, 0x00259c, (1 << VAR_7));
   VAR_6 &= ~(1 << VAR_7);
  }
  VAR_5 &= ~0x10000000;
 }

 if (VAR_5 & 0x20000000) {
  u32 VAR_8 = FUNC_12(VAR_3, 0x0025a0);
  while (VAR_8) {
   u32 VAR_9 = FUNC_0(VAR_8);
   FUNC_6(VAR_1, VAR_9);
   FUNC_7(VAR_1, VAR_9);
   FUNC_13(VAR_3, 0x0025a0, (1 << VAR_9));
   VAR_8 &= ~(1 << VAR_9);
  }
  VAR_5 &= ~0x20000000;
 }

 if (VAR_5 & 0x40000000) {
  FUNC_8(VAR_1);
  VAR_5 &= ~0x40000000;
 }

 if (VAR_5 & 0x80000000) {
  FUNC_13(VAR_3, 0x002100, 0x80000000);
  FUNC_5(VAR_1);
  VAR_5 &= ~0x80000000;
 }

 if (VAR_5) {
  FUNC_10(VAR_2, "INTR %08x\n", VAR_5);
  FUNC_11(VAR_3, 0x002140, VAR_5, 0x00000000);
  FUNC_13(VAR_3, 0x002100, VAR_5);
 }
}
