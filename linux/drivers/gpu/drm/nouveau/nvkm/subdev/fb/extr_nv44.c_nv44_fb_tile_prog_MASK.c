
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_fb_tile {int addr; int pitch; int limit; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_fb {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_device*,int,int ) ;

void
FUNC_2(struct nvkm_fb *VAR_0, int VAR_1, struct nvkm_fb_tile *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->subdev.device;
 FUNC_1(VAR_3, 0x100604 + (VAR_1 * 0x10), VAR_2->limit);
 FUNC_1(VAR_3, 0x100608 + (VAR_1 * 0x10), VAR_2->pitch);
 FUNC_1(VAR_3, 0x100600 + (VAR_1 * 0x10), VAR_2->addr);
 FUNC_0(VAR_3, 0x100600 + (VAR_1 * 0x10));
}
