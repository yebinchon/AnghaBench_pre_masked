
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_memory {int dummy; } ;
struct nvkm_fault_data {int addr; int inst; int time; int engine; int valid; int gpc; int hub; int access; int client; int reason; } ;
struct nvkm_fault_buffer {int entries; int get; TYPE_4__* fault; int put; struct nvkm_memory* mem; } ;
struct nvkm_device {int fifo; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_8__ {TYPE_3__* func; TYPE_1__ subdev; } ;
struct TYPE_6__ {int entry_size; } ;
struct TYPE_7__ {TYPE_2__ buffer; } ;


 int FUNC_0 (struct nvkm_memory*) ;
 int FUNC_1 (int ,struct nvkm_fault_data*) ;
 int FUNC_2 (struct nvkm_memory*) ;
 int FUNC_3 (struct nvkm_device*,int ) ;
 int FUNC_4 (struct nvkm_memory*,int const) ;
 int FUNC_5 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct nvkm_fault_buffer *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->fault->subdev.device;
 struct nvkm_memory *VAR_2 = VAR_0->mem;
 u32 VAR_3 = FUNC_3(VAR_1, VAR_0->get);
 u32 VAR_4 = FUNC_3(VAR_1, VAR_0->put);
 if (VAR_4 == VAR_3)
  return;

 FUNC_2(VAR_2);
 while (VAR_3 != VAR_4) {
  const u32 VAR_5 = VAR_3 * VAR_0->fault->func->buffer.entry_size;
  const u32 VAR_6 = FUNC_4(VAR_2, VAR_5 + 0x00);
  const u32 VAR_7 = FUNC_4(VAR_2, VAR_5 + 0x04);
  const u32 VAR_8 = FUNC_4(VAR_2, VAR_5 + 0x08);
  const u32 VAR_9 = FUNC_4(VAR_2, VAR_5 + 0x0c);
  const u32 VAR_10 = FUNC_4(VAR_2, VAR_5 + 0x10);
  const u32 VAR_11 = FUNC_4(VAR_2, VAR_5 + 0x14);
  const u32 VAR_12 = FUNC_4(VAR_2, VAR_5 + 0x18);
  const u32 VAR_13 = FUNC_4(VAR_2, VAR_5 + 0x1c);
  struct nvkm_fault_data VAR_14;

  if (++VAR_3 == VAR_0->entries)
   VAR_3 = 0;
  FUNC_5(VAR_1, VAR_0->get, VAR_3);

  VAR_14.addr = ((u64)VAR_9 << 32) | VAR_8;
  VAR_14.inst = ((u64)VAR_7 << 32) | VAR_6;
  VAR_14.time = ((u64)VAR_11 << 32) | VAR_10;
  VAR_14.engine = (VAR_12 & 0x000000ff);
  VAR_14.valid = (VAR_13 & 0x80000000) >> 31;
  VAR_14.gpc = (VAR_13 & 0x1f000000) >> 24;
  VAR_14.hub = (VAR_13 & 0x00100000) >> 20;
  VAR_14.access = (VAR_13 & 0x000f0000) >> 16;
  VAR_14.client = (VAR_13 & 0x00007f00) >> 8;
  VAR_14.reason = (VAR_13 & 0x0000001f);

  FUNC_1(VAR_1->fifo, &VAR_14);
 }
 FUNC_0(VAR_2);
}
