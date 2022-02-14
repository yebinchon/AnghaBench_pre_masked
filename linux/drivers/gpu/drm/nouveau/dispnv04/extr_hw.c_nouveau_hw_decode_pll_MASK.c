
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct nvkm_pll_vals {int log2P; int N2; int M2; int NM1; int NM2; int M1; } ;
struct TYPE_4__ {int chipset; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_2(struct drm_device *VAR_2, uint32_t VAR_3, uint32_t VAR_4,
        uint32_t VAR_5, struct nvkm_pll_vals *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_0(VAR_2);




 VAR_6->log2P = (VAR_4 >> 16) & 0x7;
 VAR_6->N2 = VAR_6->M2 = 1;

 if (VAR_3 <= 0x405c) {
  VAR_6->NM1 = VAR_5 & 0xffff;

  if (!(VAR_4 & 0x1100))
   VAR_6->NM2 = VAR_5 >> 16;
 } else {
  VAR_6->NM1 = VAR_4 & 0xffff;
  if (FUNC_1(VAR_2) && VAR_5 & VAR_1)
   VAR_6->NM2 = VAR_5 & 0xffff;
  else if (VAR_7->client.device.info.chipset == 0x30 || VAR_7->client.device.info.chipset == 0x35) {
   VAR_6->M1 &= 0xf;
   if (VAR_4 & VAR_0) {
    VAR_6->M2 = (VAR_4 >> 4) & 0x7;
    VAR_6->N2 = ((VAR_4 >> 21) & 0x18) |
           ((VAR_4 >> 19) & 0x7);
   }
  }
 }
}
