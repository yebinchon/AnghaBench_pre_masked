
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct nv44_mpeg_chan {int inst; struct nv44_mpeg* mpeg; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nv44_mpeg {TYPE_2__ engine; } ;


 struct nv44_mpeg_chan* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;
 scalar_t__ FUNC_2 (struct nvkm_device*,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_object *VAR_0, bool VAR_1)
{

 struct nv44_mpeg_chan *VAR_2 = FUNC_0(VAR_0);
 struct nv44_mpeg *VAR_3 = VAR_2->mpeg;
 struct nvkm_device *VAR_4 = VAR_3->engine.subdev.device;
 u32 VAR_5 = 0x80000000 | (VAR_2->inst >> 4);

 FUNC_1(VAR_4, 0x00b32c, 0x00000001, 0x00000000);
 if (FUNC_2(VAR_4, 0x00b318) == VAR_5)
  FUNC_1(VAR_4, 0x00b318, 0x80000000, 0x00000000);
 FUNC_1(VAR_4, 0x00b32c, 0x00000001, 0x00000001);
 return 0;
}
