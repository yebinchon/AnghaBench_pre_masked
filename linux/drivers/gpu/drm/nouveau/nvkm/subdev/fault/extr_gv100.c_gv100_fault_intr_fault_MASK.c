
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_fault_data {int addr; int inst; int engine; int valid; int gpc; int hub; int access; int client; int reason; scalar_t__ time; } ;
struct nvkm_fault {struct nvkm_subdev subdev; } ;
struct nvkm_device {int fifo; } ;


 int FUNC_0 (int ,struct nvkm_fault_data*) ;
 int FUNC_1 (struct nvkm_device*,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_fault *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 struct nvkm_fault_data VAR_3;
 const u32 VAR_4 = FUNC_1(VAR_2, 0x100e4c);
 const u32 VAR_5 = FUNC_1(VAR_2, 0x100e50);
 const u32 VAR_6 = FUNC_1(VAR_2, 0x100e54);
 const u32 VAR_7 = FUNC_1(VAR_2, 0x100e58);
 const u32 VAR_8 = FUNC_1(VAR_2, 0x100e5c);

 VAR_3.addr = ((u64)VAR_5 << 32) | VAR_4;
 VAR_3.inst = ((u64)VAR_7 << 32) | (VAR_6 & 0xfffff000);
 VAR_3.time = 0;
 VAR_3.engine = (VAR_6 & 0x000000ff);
 VAR_3.valid = (VAR_8 & 0x80000000) >> 31;
 VAR_3.gpc = (VAR_8 & 0x1f000000) >> 24;
 VAR_3.hub = (VAR_8 & 0x00100000) >> 20;
 VAR_3.access = (VAR_8 & 0x000f0000) >> 16;
 VAR_3.client = (VAR_8 & 0x00007f00) >> 8;
 VAR_3.reason = (VAR_8 & 0x0000001f);

 FUNC_0(VAR_2->fifo, &VAR_3);
}
