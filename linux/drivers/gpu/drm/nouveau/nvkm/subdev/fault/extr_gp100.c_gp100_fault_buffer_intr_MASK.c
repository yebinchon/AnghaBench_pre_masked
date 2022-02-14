
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_fault_buffer {TYPE_2__* fault; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_fault_buffer *VAR_1, bool VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_1->fault->subdev.device;
 FUNC_0(VAR_3, VAR_0, VAR_2);
}
