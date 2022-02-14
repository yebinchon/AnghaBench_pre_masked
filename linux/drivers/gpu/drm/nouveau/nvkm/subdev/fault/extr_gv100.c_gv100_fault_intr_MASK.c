
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_fault {int event; scalar_t__* buffer; struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_fault*) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int) ;
 int FUNC_2 (int *,int,int,int *,int ) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_fault *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 u32 VAR_3 = FUNC_3(VAR_2, 0x100a20);

 if (VAR_3 & 0x80000000) {
  FUNC_0(VAR_0);
  FUNC_4(VAR_2, 0x100e60, 0x80000000);
  VAR_3 &= ~0x80000000;
 }

 if (VAR_3 & 0x20000000) {
  if (VAR_0->buffer[0]) {
   FUNC_2(&VAR_0->event, 1, 0, ((void*)0), 0);
   VAR_3 &= ~0x20000000;
  }
 }

 if (VAR_3 & 0x08000000) {
  if (VAR_0->buffer[1]) {
   FUNC_2(&VAR_0->event, 1, 1, ((void*)0), 0);
   VAR_3 &= ~0x08000000;
  }
 }

 if (VAR_3) {
  FUNC_1(VAR_1, "intr %08x\n", VAR_3);
 }
}
