
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int,int ,int ,int ) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_subdev *VAR_0, int VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->device;
 u32 VAR_3 = FUNC_2(VAR_2, 0x128120 + (VAR_1 * 0x0400));
 u32 VAR_4 = FUNC_2(VAR_2, 0x128124 + (VAR_1 * 0x0400));
 u32 VAR_5 = FUNC_2(VAR_2, 0x128128 + (VAR_1 * 0x0400));
 FUNC_0(VAR_0, "GPC%d: %06x %08x (%08x)\n", VAR_1, VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_2, 0x128128 + (VAR_1 * 0x0400), 0x00000200, 0x00000000);
}
