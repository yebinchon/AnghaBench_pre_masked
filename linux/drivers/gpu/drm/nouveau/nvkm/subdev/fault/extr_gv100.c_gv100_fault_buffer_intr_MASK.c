
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_fault_buffer {scalar_t__ id; TYPE_2__* fault; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int FUNC_0 (struct nvkm_device*,int,int const,int const) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_fault_buffer *VAR_0, bool VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->fault->subdev.device;
 const u32 VAR_3 = VAR_0->id ? 0x08000000 : 0x20000000;
 if (VAR_1)
  FUNC_0(VAR_2, 0x100a2c, VAR_3, VAR_3);
 else
  FUNC_0(VAR_2, 0x100a34, VAR_3, VAR_3);
}
