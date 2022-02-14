
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_therm {TYPE_2__ subdev; } ;
struct TYPE_3__ {int crystal; } ;



__attribute__((used)) static int
FUNC_0(struct nvkm_therm *VAR_0, int VAR_1)
{
 return VAR_0->subdev.device->crystal * 1000;
}
