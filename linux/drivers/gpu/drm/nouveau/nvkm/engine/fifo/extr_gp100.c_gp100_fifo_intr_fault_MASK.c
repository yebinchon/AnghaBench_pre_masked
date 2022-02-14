
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nvkm_fifo {TYPE_2__ engine; } ;
struct nvkm_fault_data {int inst; int addr; int engine; int valid; int gpc; int hub; int access; int client; int reason; scalar_t__ time; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_fifo*,struct nvkm_fault_data*) ;
 int FUNC_1 (struct nvkm_device*,int) ;

void
FUNC_2(struct nvkm_fifo *VAR_0, int VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->engine.subdev.device;
 u32 VAR_3 = FUNC_1(VAR_2, 0x002800 + (VAR_1 * 0x10));
 u32 VAR_4 = FUNC_1(VAR_2, 0x002804 + (VAR_1 * 0x10));
 u32 VAR_5 = FUNC_1(VAR_2, 0x002808 + (VAR_1 * 0x10));
 u32 VAR_6 = FUNC_1(VAR_2, 0x00280c + (VAR_1 * 0x10));
 struct nvkm_fault_data VAR_7;

 VAR_7.inst = (u64)VAR_3 << 12;
 VAR_7.addr = ((u64)VAR_5 << 32) | VAR_4;
 VAR_7.time = 0;
 VAR_7.engine = VAR_1;
 VAR_7.valid = 1;
 VAR_7.gpc = (VAR_6 & 0x1f000000) >> 24;
 VAR_7.hub = (VAR_6 & 0x00100000) >> 20;
 VAR_7.access = (VAR_6 & 0x00070000) >> 16;
 VAR_7.client = (VAR_6 & 0x00007f00) >> 8;
 VAR_7.reason = (VAR_6 & 0x0000001f);

 FUNC_0(VAR_0, &VAR_7);
}
