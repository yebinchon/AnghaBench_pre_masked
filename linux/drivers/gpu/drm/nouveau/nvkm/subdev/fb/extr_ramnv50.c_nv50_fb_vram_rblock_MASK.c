
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_ram {int parts; int size; TYPE_1__* fb; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int,...) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int) ;

__attribute__((used)) static u32
FUNC_3(struct nvkm_ram *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->fb->subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 int VAR_3, VAR_4, VAR_5, VAR_6;
 u64 VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_9 = FUNC_1(VAR_2, 0x100200);
 VAR_10 = FUNC_1(VAR_2, 0x100204);
 VAR_11 = FUNC_1(VAR_2, 0x100250);
 FUNC_0(VAR_1, "memcfg %08x %08x %08x %08x\n",
     VAR_9, VAR_10, VAR_11, FUNC_1(VAR_2, 0x001540));

 VAR_3 = (VAR_10 & 0x0000f000) >> 12;
 VAR_4 = ((VAR_10 & 0x000f0000) >> 16) + 8;
 VAR_5 = ((VAR_10 & 0x00f00000) >> 20) + 8;
 VAR_6 = 1 << (((VAR_10 & 0x03000000) >> 24) + 2);

 VAR_7 = VAR_0->parts * VAR_6 * (1 << VAR_3) * 8;
 VAR_8 = VAR_7 << VAR_4;
 if (VAR_9 & 0x00000004)
  VAR_8 += VAR_7 << VAR_5;

 if (VAR_8 != VAR_0->size) {
  FUNC_2(VAR_1, "memory controller reports %d MiB VRAM\n",
     (u32)(VAR_0->size >> 20));
 }

 VAR_12 = VAR_7;
 if (VAR_11 & 1)
  VAR_12 *= 3;

 FUNC_0(VAR_1, "rblock %d bytes\n", VAR_12);
 return VAR_12;
}
