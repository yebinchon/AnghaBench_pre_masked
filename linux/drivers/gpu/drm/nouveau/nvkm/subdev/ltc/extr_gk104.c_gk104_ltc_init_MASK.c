
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_ltc {int tag_base; int ltc_nr; TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_ltc *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 u32 VAR_2 = !(FUNC_1(VAR_1, 0x100c80) & 0x00000001);

 FUNC_2(VAR_1, 0x17e8d8, VAR_0->ltc_nr);
 FUNC_2(VAR_1, 0x17e000, VAR_0->ltc_nr);
 FUNC_2(VAR_1, 0x17e8d4, VAR_0->tag_base);
 FUNC_0(VAR_1, 0x17e8c0, 0x00000002, VAR_2 ? 0x00000002 : 0x00000000);
}
