
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nvkm_pll_vals {int log2P; int M1; int N1; int M2; int N2; scalar_t__ NM2; } ;
struct nvkm_clk {int (* pll_calc ) (struct nvkm_clk*,struct nvbios_pll*,int,struct nvkm_pll_vals*) ;} ;
struct nvkm_bios {int dummy; } ;
struct TYPE_8__ {int max_freq; } ;
struct nvbios_pll {int vco2; TYPE_1__ vco1; } ;
struct nv04_mode_state {int pllsel; struct nv04_crtc_reg* crtc_reg; } ;
struct nv04_crtc_reg {struct nvkm_pll_vals pllvals; } ;
struct TYPE_9__ {int chipset; scalar_t__ family; } ;
struct TYPE_12__ {TYPE_2__ info; } ;
struct TYPE_10__ {TYPE_5__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct TYPE_11__ {int offset; int (* set_offset ) (struct nouveau_crtc*,int ) ;} ;
struct nouveau_crtc {size_t index; TYPE_4__ cursor; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_13__ {struct nv04_mode_state mode_reg; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int ,int ,int ,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ,int) ;
 struct nouveau_crtc* FUNC_2 (struct drm_crtc*) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 TYPE_7__* FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct nvkm_bios*,int ,struct nvbios_pll*) ;
 struct nvkm_bios* FUNC_6 (TYPE_5__*) ;
 struct nvkm_clk* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (struct nvkm_clk*,struct nvbios_pll*,int,struct nvkm_pll_vals*) ;
 int FUNC_9 (struct nouveau_crtc*,int ) ;

__attribute__((used)) static void FUNC_10(struct drm_crtc *VAR_9, struct drm_display_mode * VAR_10, int VAR_11)
{
 struct drm_device *VAR_12 = VAR_9->dev;
 struct nouveau_drm *VAR_13 = FUNC_3(VAR_12);
 struct nvkm_bios *VAR_14 = FUNC_6(&VAR_13->client.device);
 struct nvkm_clk *VAR_15 = FUNC_7(&VAR_13->client.device);
 struct nouveau_crtc *VAR_16 = FUNC_2(VAR_9);
 struct nv04_mode_state *VAR_17 = &FUNC_4(VAR_12)->mode_reg;
 struct nv04_crtc_reg *VAR_18 = &VAR_17->crtc_reg[VAR_16->index];
 struct nvkm_pll_vals *VAR_19 = &VAR_18->pllvals;
 struct nvbios_pll VAR_20;

 if (FUNC_5(VAR_14, VAR_16->index ? VAR_8 : VAR_7,
       &VAR_20))
  return;


 VAR_19->NM2 = 0;
 if (VAR_13->client.device.info.chipset > 0x40 && VAR_11 <= (VAR_20.vco1.max_freq / 2))
  FUNC_1(&VAR_20.vco2, 0, sizeof(VAR_20.vco2));


 if (!VAR_15->pll_calc(VAR_15, &VAR_20, VAR_11, VAR_19))
  return;

 VAR_17->pllsel &= VAR_5 | VAR_6 | VAR_4;


 if (VAR_13->client.device.info.family == VAR_0)
  VAR_17->pllsel |= VAR_3;

 if (VAR_13->client.device.info.chipset < 0x41)
  VAR_17->pllsel |= VAR_1 |
     VAR_2;
 VAR_17->pllsel |= VAR_16->index ? VAR_6 : VAR_5;

 if (VAR_19->NM2)
  FUNC_0(VAR_13, "vpll: n1 %d n2 %d m1 %d m2 %d log2p %d\n",
    VAR_19->N1, VAR_19->N2, VAR_19->M1, VAR_19->M2, VAR_19->log2P);
 else
  FUNC_0(VAR_13, "vpll: n %d m %d log2p %d\n",
    VAR_19->N1, VAR_19->M1, VAR_19->log2P);

 VAR_16->cursor.set_offset(VAR_16, VAR_16->cursor.offset);
}
