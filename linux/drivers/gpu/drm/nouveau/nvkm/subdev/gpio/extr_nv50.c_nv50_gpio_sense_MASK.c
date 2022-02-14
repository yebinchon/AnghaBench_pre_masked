
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_gpio {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int*,int*) ;
 int FUNC_1 (struct nvkm_device*,int) ;

int
FUNC_2(struct nvkm_gpio *VAR_1, int VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_1->subdev.device;
 u32 VAR_4, VAR_5;

 if (FUNC_0(VAR_2, &VAR_4, &VAR_5))
  return -VAR_0;

 return !!(FUNC_1(VAR_3, VAR_4) & (4 << VAR_5));
}
