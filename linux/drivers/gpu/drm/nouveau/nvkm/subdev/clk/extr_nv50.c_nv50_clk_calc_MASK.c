
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int chipset; } ;
struct nvkm_cstate {int* domain; } ;
struct nvkm_clk {int dummy; } ;
struct nv50_clk_hwsq {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct nv50_clk {TYPE_1__ base; struct nv50_clk_hwsq hwsq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int const,int const,int*) ;
 int FUNC_2 (struct nv50_clk*,int,int const,int*,int*,int*) ;
 int FUNC_3 (struct nv50_clk_hwsq*,struct nvkm_subdev*) ;
 int FUNC_4 (struct nv50_clk_hwsq*,int ,int,int) ;
 int FUNC_5 (struct nv50_clk_hwsq*,int) ;
 scalar_t__ FUNC_6 (int const,int) ;
 int FUNC_7 (struct nv50_clk_hwsq*,int,int) ;
 int FUNC_8 (struct nv50_clk_hwsq*,int,int) ;
 int FUNC_9 (struct nv50_clk_hwsq*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nv50_clk* FUNC_10 (struct nvkm_clk*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int * VAR_11 ;
 int FUNC_12 (struct nv50_clk*,int) ;
 int * VAR_12 ;

int
FUNC_13(struct nvkm_clk *VAR_13, struct nvkm_cstate *VAR_14)
{
 struct nv50_clk *VAR_15 = FUNC_10(VAR_13);
 struct nv50_clk_hwsq *VAR_16 = &VAR_15->hwsq;
 struct nvkm_subdev *VAR_17 = &VAR_15->base.subdev;
 struct nvkm_device *VAR_18 = VAR_17->device;
 const int VAR_19 = VAR_14->domain[VAR_9];
 const int VAR_20 = VAR_14->domain[VAR_4];
 const int VAR_21 = VAR_14->domain[VAR_10];
 const int VAR_22 = VAR_14->domain[VAR_5];
 u32 VAR_23 = 0, VAR_24 = 0;
 u32 VAR_25 = 0, VAR_26 = 0;
 int VAR_27, VAR_28, VAR_29, VAR_30;
 int VAR_31, VAR_32;


 VAR_32 = FUNC_3(VAR_16, VAR_17);
 if (VAR_32)
  return VAR_32;

 FUNC_9(VAR_16, VAR_2, 0x00000001);
 FUNC_5(VAR_16, 8000);
 FUNC_7(VAR_16, 0x10, 0x00);
 FUNC_8(VAR_16, 0x00, 0x01);





 if (VAR_21) {

  VAR_31 = FUNC_1(VAR_20, VAR_21, &VAR_29);


  if (VAR_18->chipset != 0x98)
   VAR_32 = FUNC_12(VAR_15, 0x004030);
  else
   VAR_32 = FUNC_11(&VAR_15->base, VAR_7);
  VAR_32 = FUNC_1(VAR_32, VAR_21, &VAR_30);


  if (FUNC_0(VAR_21 - VAR_31) <= FUNC_0(VAR_21 - VAR_32)) {
   if (VAR_18->chipset != 0x98)
    VAR_24 |= 0x00000c00;
   VAR_26 |= VAR_29 << 8;
  } else {
   VAR_24 |= 0x00000800;
   VAR_26 |= VAR_30 << 8;
  }

  VAR_23 |= 0x00000c00;
  VAR_25 |= 0x00000700;
 }




 if (VAR_22) {
  if (FUNC_6(VAR_22, FUNC_11(&VAR_15->base, VAR_8))) {
   VAR_24 |= 0x00000000;
  } else
  if (FUNC_6(VAR_22, FUNC_11(&VAR_15->base, VAR_6))) {
   VAR_24 |= 0x08000000;
  } else {
   VAR_31 = FUNC_11(&VAR_15->base, VAR_6) * 3;
   FUNC_1(VAR_31, VAR_22, &VAR_29);

   VAR_24 |= 0x0c000000;
   VAR_26 |= VAR_29;
  }

  VAR_23 |= 0x0c000000;
  VAR_25 |= 0x00000007;
 }




 FUNC_4(VAR_16, VAR_3, VAR_23, 0x00000000);
 FUNC_4(VAR_16, VAR_1, VAR_25, VAR_26);
 FUNC_4(VAR_16, VAR_3, VAR_23, VAR_24);




 if (VAR_18->chipset < 0x92)
  FUNC_4(VAR_16, VAR_3, 0x001000b0, 0x00100080);
 else
  FUNC_4(VAR_16, VAR_3, 0x000000b3, 0x00000081);


 VAR_31 = FUNC_2(VAR_15, 0x4028, VAR_20, &VAR_27, &VAR_28, &VAR_29);
 if (VAR_31 == 0)
  return -VAR_0;

 FUNC_4(VAR_16, VAR_11[0], 0xc03f0100,
     0x80000000 | (VAR_29 << 19) | (VAR_29 << 16));
 FUNC_4(VAR_16, VAR_11[1], 0x0000ffff, (VAR_27 << 8) | VAR_28);







 if (VAR_29-- && VAR_19 == (VAR_20 << 1)) {
  FUNC_4(VAR_16, VAR_12[0], 0xc03f0100, (VAR_29 << 19) | (VAR_29 << 16));
  FUNC_4(VAR_16, VAR_3, 0x00100033, 0x00000023);
 } else {
  VAR_31 = FUNC_2(VAR_15, 0x4020, VAR_19, &VAR_27, &VAR_28, &VAR_29);
  if (VAR_31 == 0)
   return -VAR_0;

  FUNC_4(VAR_16, VAR_12[0], 0xc03f0100,
     0x80000000 | (VAR_29 << 19) | (VAR_29 << 16));
  FUNC_4(VAR_16, VAR_12[1], 0x0000ffff, (VAR_27 << 8) | VAR_28);
  FUNC_4(VAR_16, VAR_3, 0x00100033, 0x00000033);
 }


 FUNC_7(VAR_16, 0x10, 0x01);
 FUNC_8(VAR_16, 0x00, 0x00);
 FUNC_9(VAR_16, VAR_2, 0x00000000);
 return 0;
}
