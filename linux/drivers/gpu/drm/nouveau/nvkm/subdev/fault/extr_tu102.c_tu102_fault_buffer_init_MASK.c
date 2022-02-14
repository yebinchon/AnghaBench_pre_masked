
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_fault_buffer {int id; int addr; TYPE_2__* fault; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_device*,int const,int,int) ;
 int FUNC_2 (struct nvkm_device*,int const,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_fault_buffer *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->fault->subdev.device;
 const u32 VAR_2 = VAR_0->id * 0x20;

 FUNC_1(VAR_1, 0xb83010 + VAR_2, 0xc0000000, 0x40000000);
 FUNC_2(VAR_1, 0xb83004 + VAR_2, FUNC_3(VAR_0->addr));
 FUNC_2(VAR_1, 0xb83000 + VAR_2, FUNC_0(VAR_0->addr));
 FUNC_1(VAR_1, 0xb83010 + VAR_2, 0x80000000, 0x80000000);
}
