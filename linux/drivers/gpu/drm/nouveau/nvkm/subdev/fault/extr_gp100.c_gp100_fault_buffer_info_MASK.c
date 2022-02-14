
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_fault_buffer {int get; int put; TYPE_2__* fault; int entries; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_fault_buffer *VAR_0)
{
 VAR_0->entries = FUNC_0(VAR_0->fault->subdev.device, 0x002a78);
 VAR_0->get = 0x002a7c;
 VAR_0->put = 0x002a80;
}
