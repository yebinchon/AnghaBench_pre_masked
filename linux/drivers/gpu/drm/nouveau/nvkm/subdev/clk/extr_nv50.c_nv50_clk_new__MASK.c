
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_device {int chipset; } ;
struct nvkm_clk_func {int dummy; } ;
struct nvkm_clk {int dummy; } ;
struct TYPE_2__ {void* r_mast; void* r_divs; void** r_nvpll; void** r_spll; void* r_fifo; } ;
struct nv50_clk {TYPE_1__ hwsq; struct nvkm_clk base; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 struct nv50_clk* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nvkm_clk_func const*,struct nvkm_device*,int,int,struct nvkm_clk*) ;

int
FUNC_3(const struct nvkm_clk_func *VAR_2, struct nvkm_device *VAR_3,
       int VAR_4, bool VAR_5, struct nvkm_clk **VAR_6)
{
 struct nv50_clk *VAR_7;
 int VAR_8;

 if (!(VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7->base);
 *VAR_6 = &VAR_7->base;
 if (VAR_8)
  return VAR_8;

 VAR_7->hwsq.r_fifo = FUNC_0(0x002504);
 VAR_7->hwsq.r_spll[0] = FUNC_0(0x004020);
 VAR_7->hwsq.r_spll[1] = FUNC_0(0x004024);
 VAR_7->hwsq.r_nvpll[0] = FUNC_0(0x004028);
 VAR_7->hwsq.r_nvpll[1] = FUNC_0(0x00402c);
 switch (VAR_3->chipset) {
 case 0x92:
 case 0x94:
 case 0x96:
  VAR_7->hwsq.r_divs = FUNC_0(0x004800);
  break;
 default:
  VAR_7->hwsq.r_divs = FUNC_0(0x004700);
  break;
 }
 VAR_7->hwsq.r_mast = FUNC_0(0x00c040);
 return 0;
}
