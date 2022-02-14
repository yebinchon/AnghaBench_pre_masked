
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ n; } ;
struct gm20b_pll {scalar_t__ sdm_din; TYPE_3__ base; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct gm20b_clk {TYPE_2__ base; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (struct gm20b_clk*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct gm20b_clk*,struct gm20b_pll*) ;
 int FUNC_4 (struct nvkm_device*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct nvkm_device*,int ) ;
 scalar_t__ FUNC_6 (struct nvkm_device*,int,int ,int ,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct gm20b_clk *VAR_11, u32 VAR_12)
{
 struct nvkm_subdev *VAR_13 = &VAR_11->base.base.subdev;
 struct nvkm_device *VAR_14 = VAR_13->device;
 struct gm20b_pll VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18 = 0;


 FUNC_2(VAR_11, VAR_12, &VAR_16, &VAR_17);


 FUNC_3(VAR_11, &VAR_15);

 if (VAR_16 == VAR_15.base.n && VAR_17 == VAR_15.sdm_din)
  return 0;


 FUNC_4(VAR_14, VAR_6,
  FUNC_0(VAR_8),
  FUNC_0(VAR_8));



 FUNC_4(VAR_14, VAR_1, VAR_3,
    VAR_17 << VAR_4);
 VAR_15.base.n = VAR_16;
 FUNC_7(1);
 FUNC_1(&VAR_11->base, &VAR_15.base);


 FUNC_7(1);
 FUNC_4(VAR_14, VAR_6,
    FUNC_0(VAR_7),
    FUNC_0(VAR_7));


 if (FUNC_6(VAR_14, 500, VAR_9,
  VAR_10,
  VAR_10) < 0)
  VAR_18 = -VAR_0;


 FUNC_4(VAR_14, VAR_1, VAR_2,
    VAR_17 << VAR_5);


 FUNC_4(VAR_14, VAR_6,
  FUNC_0(VAR_8) |
  FUNC_0(VAR_7), 0);
 FUNC_5(VAR_14, VAR_6);

 return VAR_18;
}
