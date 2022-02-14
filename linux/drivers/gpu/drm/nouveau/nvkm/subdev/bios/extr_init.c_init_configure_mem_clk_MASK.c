
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct nvbios_init {TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {int bios; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nvbios_init*,int,int) ;

__attribute__((used)) static u16
FUNC_2(struct nvbios_init *VAR_0)
{
 u16 VAR_1 = FUNC_0(VAR_0->subdev->device->bios);
 if (VAR_1)
  VAR_1 += (FUNC_1(VAR_0, 0x03d4, 0x3c) >> 4) * 66;
 return VAR_1;
}
