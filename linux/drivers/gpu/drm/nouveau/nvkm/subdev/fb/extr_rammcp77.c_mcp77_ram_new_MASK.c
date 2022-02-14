
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_ram {int stolen; int vram; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_fb {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;
struct mcp77_ram {int poller_base; struct nvkm_ram base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mcp77_ram* FUNC_0 (int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,int,int) ;
 int FUNC_3 (int *,struct nvkm_fb*,int ,int,struct nvkm_ram*) ;
 scalar_t__ FUNC_4 (struct nvkm_device*,int) ;

int
FUNC_5(struct nvkm_fb *VAR_6, struct nvkm_ram **VAR_7)
{
 struct nvkm_device *VAR_8 = VAR_6->subdev.device;
 u32 VAR_9 = ( 256 * 1024);
 u32 VAR_10 = (1024 * 1024) + 0x1000;
 u64 VAR_11 = (u64)FUNC_4(VAR_8, 0x100e10) << 12;
 u64 VAR_12 = (u64)FUNC_4(VAR_8, 0x100e14) << 12;
 struct mcp77_ram *VAR_13;
 int VAR_14;

 if (!(VAR_13 = FUNC_0(sizeof(*VAR_13), VAR_1)))
  return -VAR_0;
 *VAR_7 = &VAR_13->base;

 VAR_14 = FUNC_3(&VAR_5, VAR_6, VAR_4,
       VAR_12, &VAR_13->base);
 if (VAR_14)
  return VAR_14;

 VAR_13->poller_base = VAR_12 - VAR_10;
 VAR_13->base.stolen = VAR_11;
 FUNC_1(&VAR_13->base.vram);

 return FUNC_2(&VAR_13->base.vram, VAR_2,
       VAR_9 >> VAR_3,
       (VAR_12 - VAR_9 - VAR_10) >>
       VAR_3, 1);
}
