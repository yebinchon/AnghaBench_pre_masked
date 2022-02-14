
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_bios {TYPE_2__ subdev; } ;
struct firmware {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct firmware const**,char const*,struct device*) ;

__attribute__((used)) static void *
FUNC_2(struct nvkm_bios *VAR_1, const char *VAR_2)
{
 struct device *VAR_3 = VAR_1->subdev.device->dev;
 const struct firmware *VAR_4;
 int VAR_5 = FUNC_1(&VAR_4, VAR_2, VAR_3);
 if (VAR_5)
  return FUNC_0(-VAR_0);
 return (void *)VAR_4;
}
