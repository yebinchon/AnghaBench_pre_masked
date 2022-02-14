
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int bar0; TYPE_2__* bios; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int FUNC_0 (struct priv*) ;
 int FUNC_1 (struct nvkm_device*,int,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct priv *VAR_1 = VAR_0;
 if (VAR_1) {
  struct nvkm_device *VAR_2 = VAR_1->bios->subdev.device;
  FUNC_1(VAR_2, 0x001700, VAR_1->bar0);
  FUNC_0(VAR_1);
 }
}
