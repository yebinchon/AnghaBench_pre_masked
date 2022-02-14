
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_volt {int dummy; } ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {struct nvkm_volt* volt; } ;
struct nvkm_clk {TYPE_3__* func; } ;
struct gm20b_clk {int uv; } ;
struct TYPE_4__ {struct gm20b_clk* (* func ) (struct nvkm_clk*) ;struct nvkm_subdev subdev; } ;
struct gk20a_clk {TYPE_1__ base; } ;
struct TYPE_6__ {int (* prog ) (struct nvkm_clk*) ;TYPE_2__* pstates; int (* calc ) (struct nvkm_clk*,int *) ;} ;
struct TYPE_5__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct gk20a_clk* FUNC_1 (struct nvkm_clk*) ;
 int FUNC_2 (struct gk20a_clk*) ;
 struct gm20b_clk* FUNC_3 (struct nvkm_clk*) ;
 int FUNC_4 (struct gm20b_clk*) ;
 int FUNC_5 (struct nvkm_subdev*,char*) ;
 int FUNC_6 (struct nvkm_device*,int,int,int) ;
 int FUNC_7 (struct nvkm_device*,int) ;
 int FUNC_8 (struct nvkm_volt*) ;
 int FUNC_9 (struct nvkm_device*,int,int) ;
 int FUNC_10 (struct nvkm_clk*,int *) ;
 int FUNC_11 (struct nvkm_clk*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int
FUNC_13(struct nvkm_clk *VAR_8)
{
 struct gk20a_clk *VAR_9 = FUNC_1(VAR_8);
 struct nvkm_subdev *VAR_10 = &VAR_9->base.subdev;
 struct nvkm_device *VAR_11 = VAR_10->device;
 int VAR_12;
 u32 VAR_13;


 FUNC_6(VAR_11, VAR_6, VAR_7, 0);
 FUNC_7(VAR_11, VAR_6);
 FUNC_12(5);

 FUNC_6(VAR_11, VAR_3, VAR_4,
    VAR_5);


 FUNC_6(VAR_11, VAR_0,
        FUNC_0(VAR_2) << VAR_1,
        0);

 VAR_12 = FUNC_2(VAR_9);
 if (VAR_12)
  return VAR_12;


 VAR_13 = FUNC_7(VAR_11, 0x021944);
 if (!(VAR_13 & 0x3)) {
  VAR_13 |= 0x2;
  FUNC_9(VAR_11, 0x021944, VAR_13);

  VAR_13 = FUNC_7(VAR_11, 0x021948);
  VAR_13 |= 0x1;
  FUNC_9(VAR_11, 0x021948, VAR_13);
 }


 FUNC_6(VAR_11, 0x20160, 0x003f0000, 0x0);


 if (VAR_9->base.func == &FUNC_3) {
  struct gm20b_clk *VAR_14 = FUNC_3(VAR_8);
  struct nvkm_volt *VAR_15 = VAR_11->volt;


  VAR_14->uv = FUNC_8(VAR_15);


  VAR_12 = FUNC_4(VAR_14);
  if (VAR_12)
   return VAR_12;
 }


 VAR_8->func->calc(VAR_8, &VAR_8->func->pstates[0].base);
 VAR_12 = VAR_8->func->prog(VAR_8);
 if (VAR_12) {
  FUNC_5(VAR_10, "cannot initialize clock\n");
  return VAR_12;
 }

 return 0;
}
