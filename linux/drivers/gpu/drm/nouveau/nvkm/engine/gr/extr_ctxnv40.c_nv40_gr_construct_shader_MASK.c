
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_grctx {int ctxvals_pos; scalar_t__ mode; struct nvkm_device* device; struct nvkm_gpuobj* data; } ;
struct nvkm_gpuobj {int dummy; } ;
struct nvkm_device {int chipset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvkm_grctx*,int) ;
 int FUNC_1 (struct nvkm_grctx*,int) ;
 int FUNC_2 (struct nvkm_device*) ;
 scalar_t__ FUNC_3 (struct nvkm_device*) ;
 int FUNC_4 (struct nvkm_gpuobj*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_grctx *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->device;
 struct nvkm_gpuobj *VAR_3 = VAR_1->data;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_5 = FUNC_2(VAR_1->device);
 VAR_7 = 363;
 VAR_8 = VAR_2->chipset == 0x40 ? 128 : 64;
 if (VAR_2->chipset == 0x40) {
  VAR_9 = 0x2200/4;
  VAR_10 = 0x55a0/4;
  VAR_6 = 0x6aa0/4;
 } else
 if (VAR_2->chipset == 0x41 || VAR_2->chipset == 0x42) {
  VAR_9 = 0x2200/4;
  VAR_10 = 0x4400/4;
  VAR_6 = 0x4f00/4;
 } else {
  VAR_9 = 0x1d40/4;
  VAR_10 = 0x3f40/4;
  VAR_6 = FUNC_3(VAR_2) ? 0x4980/4 : 0x4a40/4;
 }

 FUNC_0(VAR_1, VAR_6 * VAR_5 + 0x300/4);
 FUNC_1(VAR_1, FUNC_3(VAR_2) ? 0x800029 : 0x800041);

 VAR_11 = VAR_1->ctxvals_pos;
 VAR_1->ctxvals_pos += (0x0300/4 + (VAR_5 * VAR_6));

 if (VAR_1->mode != VAR_0)
  return;

 VAR_11 += 0x0280/4;
 for (VAR_12 = 0; VAR_12 < 16; VAR_12++, VAR_11 += 2)
  FUNC_4(VAR_3, VAR_11 * 4, 0x3f800000);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++, VAR_11 += VAR_6) {
  for (VAR_12 = 0; VAR_12 < VAR_7 * 6; VAR_12 += 6)
   FUNC_4(VAR_3, (VAR_11 + VAR_9 + VAR_12) * 4, 0x00000001);
  for (VAR_12 = 0; VAR_12 < VAR_8 * 4; VAR_12 += 4)
   FUNC_4(VAR_3, (VAR_11 + VAR_10 + VAR_12) * 4, 0x3f800000);
 }
}
