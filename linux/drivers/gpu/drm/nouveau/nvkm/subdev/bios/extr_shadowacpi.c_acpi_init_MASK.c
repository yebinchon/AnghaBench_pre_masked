
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_bios {TYPE_2__ subdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void *
FUNC_2(struct nvkm_bios *VAR_1, const char *VAR_2)
{
 if (!FUNC_1(VAR_1->subdev.device->dev))
  return FUNC_0(-VAR_0);
 return ((void*)0);
}
