
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct nvkm_pll_vals {int refclk; } ;
struct nvkm_bios {int dummy; } ;
struct nvif_object {int dummy; } ;
struct nvbios_pll {int reg; int refclk; } ;
struct TYPE_4__ {scalar_t__ family; } ;
struct TYPE_6__ {TYPE_1__ info; struct nvif_object object; } ;
struct TYPE_5__ {TYPE_3__ device; } ;
struct nouveau_drm {TYPE_2__ client; } ;
struct drm_device {int dummy; } ;
typedef enum nvbios_pll_type { ____Placeholder_nvbios_pll_type } nvbios_pll_type ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*,int,int,int,struct nvkm_pll_vals*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct nvkm_bios*,int,struct nvbios_pll*) ;
 int FUNC_5 (struct nvif_object*,int) ;
 struct nvkm_bios* FUNC_6 (TYPE_3__*) ;

int
FUNC_7(struct drm_device *VAR_7, enum nvbios_pll_type VAR_8,
         struct nvkm_pll_vals *VAR_9)
{
 struct nouveau_drm *VAR_10 = FUNC_1(VAR_7);
 struct nvif_object *VAR_11 = &VAR_10->client.device.object;
 struct nvkm_bios *VAR_12 = FUNC_6(&VAR_10->client.device);
 uint32_t VAR_13, VAR_14, VAR_15 = 0;
 struct nvbios_pll VAR_16;
 int VAR_17;

 VAR_17 = FUNC_4(VAR_12, VAR_8, &VAR_16);
 if (VAR_17 || !(VAR_13 = VAR_16.reg))
  return -VAR_0;

 VAR_14 = FUNC_5(VAR_11, VAR_13);
 if (VAR_13 <= 0x405c)
  VAR_15 = FUNC_5(VAR_11, VAR_13 + 4);
 else if (FUNC_3(VAR_7)) {
  uint32_t VAR_18 = VAR_13 + (VAR_13 == VAR_6 ? 0x5c : 0x70);

  VAR_15 = FUNC_5(VAR_11, VAR_18);
 }

 if (VAR_10->client.device.info.family == VAR_1 && VAR_13 >= VAR_3) {
  uint32_t VAR_19 = FUNC_0(VAR_7, 0, VAR_2);


  if (VAR_13 == VAR_3) {
   if (VAR_19 & VAR_4)
    VAR_15 = 0;
  } else
   if (VAR_19 & VAR_5)
    VAR_15 = 0;
 }

 FUNC_2(VAR_7, VAR_13, VAR_14, VAR_15, VAR_9);
 VAR_9->refclk = VAR_16.refclk;
 return 0;
}
