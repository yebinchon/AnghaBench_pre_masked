
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_fault_buffer {int id; int entries; int get; int put; TYPE_2__* fault; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int FUNC_0 (struct nvkm_device*,int const,int,int) ;
 int FUNC_1 (struct nvkm_device*,int const) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_fault_buffer *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->fault->subdev.device;
 const u32 VAR_2 = VAR_0->id * 0x14;

 FUNC_0(VAR_1, 0x100e34 + VAR_2, 0x40000000, 0x40000000);

 VAR_0->entries = FUNC_1(VAR_1, 0x100e34 + VAR_2) & 0x000fffff;
 VAR_0->get = 0x100e2c + VAR_2;
 VAR_0->put = 0x100e30 + VAR_2;
}
