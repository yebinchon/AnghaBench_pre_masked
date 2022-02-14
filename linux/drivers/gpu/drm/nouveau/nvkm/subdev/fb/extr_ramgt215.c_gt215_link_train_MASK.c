
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int cfgopt; struct nvkm_clk* clk; struct nvkm_bios* bios; } ;
struct nvkm_clk {int dummy; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_M0205T {scalar_t__ freq; int member_0; } ;
struct gt215_ramfuc {int dummy; } ;
struct TYPE_6__ {TYPE_4__* fb; TYPE_1__* func; } ;
struct gt215_ltrain {int r_100720; int r_1111e0; int r_111400; int state; } ;
struct gt215_ram {TYPE_2__ base; struct gt215_ramfuc fuc; struct gt215_ltrain ltrain; } ;
struct TYPE_7__ {struct nvkm_subdev subdev; } ;
struct TYPE_5__ {int (* calc ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nvkm_clk*,unsigned long*) ;
 int FUNC_1 (struct nvkm_clk*,unsigned long*) ;
 int FUNC_2 (int*,struct gt215_ltrain*) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int,int ) ;
 int VAR_8 ;
 int FUNC_5 (struct nvkm_bios*,int *,int *,int *,int *,int *,int *,struct nvbios_M0205T*) ;
 int FUNC_6 (int ,char*,int) ;
 unsigned int FUNC_7 (struct nvkm_clk*,int ) ;
 int FUNC_8 (struct nvkm_subdev*,char*,int,...) ;
 int FUNC_9 (struct nvkm_device*,int,int,int) ;
 int FUNC_10 (struct nvkm_device*,int,int) ;
 int FUNC_11 (struct gt215_ramfuc*,int) ;
 int FUNC_12 (struct gt215_ramfuc*,int,int,int) ;
 int FUNC_13 (struct gt215_ramfuc*,int) ;
 int FUNC_14 (struct gt215_ramfuc*,int) ;
 int FUNC_15 (struct gt215_ramfuc*,int) ;
 int FUNC_16 (struct gt215_ramfuc*) ;
 int FUNC_17 (TYPE_4__*,int*,int) ;
 int FUNC_18 (struct gt215_ramfuc*,int,int,int,int) ;
 int FUNC_19 (struct gt215_ramfuc*) ;
 int FUNC_20 (struct gt215_ramfuc*,int,int) ;
 int FUNC_21 (TYPE_2__*,int) ;
 int FUNC_22 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static int
FUNC_23(struct gt215_ram *VAR_9)
{
 struct gt215_ltrain *VAR_10 = &VAR_9->ltrain;
 struct gt215_ramfuc *VAR_11 = &VAR_9->fuc;
 struct nvkm_subdev *VAR_12 = &VAR_9->base.fb->subdev;
 struct nvkm_device *VAR_13 = VAR_12->device;
 struct nvkm_bios *VAR_14 = VAR_13->bios;
 struct nvkm_clk *VAR_15 = VAR_13->clk;
 u32 *VAR_16, VAR_17;
 int VAR_18, VAR_19;
 struct nvbios_M0205T VAR_20 = { 0 };
 u8 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 unsigned int VAR_27;
 unsigned long VAR_28;
 unsigned long *VAR_29 = &VAR_28;

 if (FUNC_6(VAR_13->cfgopt, "NvMemExec", 1) != 1)
  return -VAR_3;


 VAR_16 = FUNC_4(64, sizeof(u32), VAR_4);
 if (!VAR_16)
  return -VAR_2;

 VAR_10->state = VAR_6;


 FUNC_5(VAR_14, &VAR_21, &VAR_22, &VAR_23, &VAR_24, &VAR_25, &VAR_26, &VAR_20);
 if (VAR_20.freq == 0) {
  FUNC_3(VAR_16);
  return -VAR_1;
 }

 VAR_27 = FUNC_7(VAR_15, VAR_8);

 VAR_18 = FUNC_1(VAR_15, VAR_29);
 if (VAR_18)
  goto out;


 VAR_18 = VAR_9->base.func->calc(&VAR_9->base, (u32) VAR_20.freq * 1000);
 if (VAR_18)
  goto out;


 FUNC_10(VAR_13, 0x111400, 0x00000000);

 FUNC_9(VAR_13, 0x100674, 0x0000ffff, 0x00000000);
 FUNC_9(VAR_13, 0x1005e4, 0x0000ffff, 0x00000000);
 FUNC_9(VAR_13, 0x100b0c, 0x000000ff, 0x00000000);
 FUNC_10(VAR_13, 0x100c04, 0x00000400);


 VAR_17 = FUNC_15(VAR_11, 0x001700);

 FUNC_12(VAR_11, 0x100200, 0x00000800, 0x00000000);
 FUNC_20(VAR_11, 0x611200, 0x3300);
 FUNC_19(VAR_11);
 FUNC_18(VAR_11, 0x611200, 0x00000003, 0x00000000, 500000);
 FUNC_12(VAR_11, 0x001610, 0x00000083, 0x00000003);
 FUNC_12(VAR_11, 0x100080, 0x00000020, 0x00000000);
 FUNC_12(VAR_11, 0x10f804, 0x80000000, 0x00000000);
 FUNC_20(VAR_11, 0x001700, 0x00000000);

 FUNC_16(VAR_11);


 FUNC_12(VAR_11, 0x10f804, 0x80000000, 0x80000000);
 FUNC_20(VAR_11, 0x10053c, 0x0);
 FUNC_20(VAR_11, 0x100720, VAR_10->r_100720);
 FUNC_20(VAR_11, 0x1111e0, VAR_10->r_1111e0);
 FUNC_20(VAR_11, 0x111400, VAR_10->r_111400);
 FUNC_14(VAR_11, 0x100080);
 FUNC_12(VAR_11, 0x100080, 0x00000020, 0x00000020);
 FUNC_13(VAR_11, 1000);

 FUNC_20(VAR_11, 0x001700, VAR_17);
 FUNC_12(VAR_11, 0x001610, 0x00000083, 0x00000080);
 FUNC_20(VAR_11, 0x611200, 0x3330);
 FUNC_12(VAR_11, 0x100200, 0x00000800, 0x00000800);

 FUNC_11(VAR_11, 1);

 VAR_9->base.func->calc(&VAR_9->base, VAR_27);
 FUNC_11(VAR_11, 1);


 FUNC_9(VAR_13, 0x616308, 0x10, 0x10);
 FUNC_9(VAR_13, 0x616b08, 0x10, 0x10);

 FUNC_0(VAR_15, VAR_29);

 FUNC_17(VAR_9->base.fb, VAR_16, 64);
 for (VAR_19 = 0; VAR_19 < 64; VAR_19++)
  FUNC_8(VAR_12, "Train: %08x", VAR_16[VAR_19]);
 FUNC_2(VAR_16, VAR_10);

 FUNC_8(VAR_12, "Train: %08x %08x %08x", VAR_10->r_100720,
     VAR_10->r_1111e0, VAR_10->r_111400);

 FUNC_3(VAR_16);

 VAR_10->state = VAR_5;

 return VAR_18;

out:
 if(VAR_18 == -VAR_0)
  VAR_29 = ((void*)0);

 VAR_10->state = VAR_7;

 FUNC_0(VAR_15, VAR_29);
 FUNC_3(VAR_16);
 return VAR_18;
}
