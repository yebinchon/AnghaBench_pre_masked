
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct gk20a_pll {scalar_t__ n; scalar_t__ m; scalar_t__ pl; } ;
struct gm20b_pll {scalar_t__ sdm_din; struct gk20a_pll base; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct gm20b_clk {TYPE_2__ base; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,struct gk20a_pll*) ;
 int FUNC_4 (struct gm20b_clk*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct gm20b_clk*) ;
 int FUNC_6 (struct gm20b_clk*) ;
 int FUNC_7 (struct gm20b_clk*,struct gm20b_pll*) ;
 int FUNC_8 (struct gm20b_clk*,struct gm20b_pll*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (struct nvkm_device*,int ,int ,int) ;
 int FUNC_11 (struct nvkm_device*,int ) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int
FUNC_13(struct gm20b_clk *VAR_5, const struct gk20a_pll *VAR_6)
{
 struct nvkm_subdev *VAR_7 = &VAR_5->base.base.subdev;
 struct nvkm_device *VAR_8 = VAR_7->device;
 struct gm20b_pll VAR_9;
 u32 VAR_10, VAR_11;

 bool VAR_12;
 int VAR_13;

 FUNC_4(VAR_5, VAR_6->n, &VAR_10, &VAR_11);
 FUNC_7(VAR_5, &VAR_9);
 VAR_12 = VAR_9.base.n == VAR_10 && VAR_9.sdm_din == VAR_11 &&
      VAR_9.base.m == VAR_6->m;


 if (!FUNC_2(&VAR_5->base))
  VAR_12 = 0;


 FUNC_10(VAR_8, VAR_0, VAR_3,
    VAR_2 << VAR_4);

 FUNC_10(VAR_8, VAR_0, VAR_3,
    VAR_2 << VAR_4);
 FUNC_11(VAR_8, VAR_0);
 FUNC_12(2);

 if (VAR_12) {
  u32 VAR_14 = VAR_9.base.pl;
  u32 VAR_15 = VAR_6->pl;







  if ((VAR_14 & VAR_15) == 0) {
   VAR_9.base.pl = FUNC_9(VAR_14 | FUNC_0(FUNC_1(VAR_15) - 1),
           VAR_15 | FUNC_0(FUNC_1(VAR_14) - 1));
   FUNC_3(&VAR_5->base, &VAR_9.base);
  }

  VAR_9.base.pl = VAR_15;
  FUNC_3(&VAR_5->base, &VAR_9.base);
 } else {

  FUNC_5(VAR_5);

  VAR_9.base = *VAR_6;
  VAR_9.base.n = VAR_10;
  VAR_9.sdm_din = VAR_11;
  FUNC_8(VAR_5, &VAR_9);

  VAR_13 = FUNC_6(VAR_5);
  if (VAR_13)
   return VAR_13;
 }


 FUNC_12(2);
 FUNC_10(VAR_8, VAR_0, VAR_3,
    VAR_1 << VAR_4);

 FUNC_10(VAR_8, VAR_0, VAR_3,
    VAR_1 << VAR_4);
 FUNC_11(VAR_8, VAR_0);

 return 0;
}
