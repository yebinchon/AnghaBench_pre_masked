
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_pll_vals {scalar_t__ M1; scalar_t__ N1; scalar_t__ log2P; } ;
struct nvkm_clk {int (* pll_prog ) (struct nvkm_clk*,int ,struct nvkm_pll_vals*) ;} ;
struct nvkm_bios {int dummy; } ;
struct nvif_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ min_m; scalar_t__ max_m; scalar_t__ min_n; scalar_t__ max_n; } ;
struct nvbios_pll {scalar_t__ max_p; scalar_t__ max_p_usable; int reg; TYPE_2__ vco1; } ;
struct TYPE_3__ {struct nvif_device device; } ;
struct nouveau_drm {TYPE_1__ client; } ;
struct drm_device {int dummy; } ;
typedef enum nvbios_pll_type { ____Placeholder_nvbios_pll_type } nvbios_pll_type ;


 int FUNC_0 (struct nouveau_drm*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*,int,struct nvkm_pll_vals*) ;
 scalar_t__ FUNC_3 (struct nvkm_bios*,int,struct nvbios_pll*) ;
 struct nvkm_bios* FUNC_4 (struct nvif_device*) ;
 struct nvkm_clk* FUNC_5 (struct nvif_device*) ;
 int FUNC_6 (struct nvkm_clk*,int ,struct nvkm_pll_vals*) ;

__attribute__((used)) static void
FUNC_7(struct drm_device *VAR_2, int VAR_3)
{






 struct nouveau_drm *VAR_4 = FUNC_1(VAR_2);
 struct nvif_device *VAR_5 = &VAR_4->client.device;
 struct nvkm_clk *VAR_6 = FUNC_5(VAR_5);
 struct nvkm_bios *VAR_7 = FUNC_4(VAR_5);
 struct nvbios_pll VAR_8;
 struct nvkm_pll_vals VAR_9;
 enum nvbios_pll_type VAR_10 = VAR_3 ? VAR_1 : VAR_0;

 if (FUNC_3(VAR_7, VAR_10, &VAR_8))
  return;
 FUNC_2(VAR_2, VAR_10, &VAR_9);

 if (VAR_9.M1 >= VAR_8.vco1.min_m && VAR_9.M1 <= VAR_8.vco1.max_m &&
     VAR_9.N1 >= VAR_8.vco1.min_n && VAR_9.N1 <= VAR_8.vco1.max_n &&
     VAR_9.log2P <= VAR_8.max_p)
  return;

 FUNC_0(VAR_4, "VPLL %d outwith limits, attempting to fix\n", VAR_3 + 1);


 VAR_9.M1 = VAR_8.vco1.max_m;
 VAR_9.N1 = VAR_8.vco1.min_n;
 VAR_9.log2P = VAR_8.max_p_usable;
 VAR_6->pll_prog(VAR_6, VAR_8.reg, &VAR_9);
}
