
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_fb_tile {int addr; int limit; int pitch; } ;
struct nvkm_engine {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nv31_mpeg {TYPE_2__ engine; } ;


 struct nv31_mpeg* FUNC_0 (struct nvkm_engine*) ;
 int FUNC_1 (struct nvkm_device*,int,int ) ;

void
FUNC_2(struct nvkm_engine *VAR_0, int VAR_1, struct nvkm_fb_tile *VAR_2)
{
 struct nv31_mpeg *VAR_3 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_4 = VAR_3->engine.subdev.device;

 FUNC_1(VAR_4, 0x00b008 + (VAR_1 * 0x10), VAR_2->pitch);
 FUNC_1(VAR_4, 0x00b004 + (VAR_1 * 0x10), VAR_2->limit);
 FUNC_1(VAR_4, 0x00b000 + (VAR_1 * 0x10), VAR_2->addr);
}
