
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_gpio {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_device*,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_gpio *VAR_1, int VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_1->subdev.device;
 if (VAR_2 < 2) {
  VAR_2 = VAR_2 * 16;
  VAR_2 = FUNC_0(VAR_3, 0x600818) >> VAR_2;
  return !!(VAR_2 & 0x0100);
 } else
 if (VAR_2 < 10) {
  VAR_2 = (VAR_2 - 2) * 4;
  VAR_2 = FUNC_0(VAR_3, 0x60081c) >> VAR_2;
  return !!(VAR_2 & 0x04);
 } else
 if (VAR_2 < 14) {
  VAR_2 = (VAR_2 - 10) * 4;
  VAR_2 = FUNC_0(VAR_3, 0x600850) >> VAR_2;
  return !!(VAR_2 & 0x04);
 }

 return -VAR_0;
}
