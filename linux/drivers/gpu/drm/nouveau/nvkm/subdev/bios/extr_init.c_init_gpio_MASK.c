
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_gpio {int dummy; } ;
struct nvbios_init {int offset; TYPE_2__* subdev; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct nvkm_gpio* gpio; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvkm_gpio*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct nvbios_init *VAR_1)
{
 struct nvkm_gpio *VAR_2 = VAR_1->subdev->device->gpio;

 FUNC_2("GPIO\n");
 VAR_1->offset += 1;

 if (FUNC_0(VAR_1))
  FUNC_1(VAR_2, VAR_0);
}
