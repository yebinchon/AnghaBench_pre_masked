
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct gk20a_pll {scalar_t__ n; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct gk20a_clk {TYPE_1__ base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct gk20a_clk*,struct gk20a_pll*) ;
 int FUNC_2 (struct gk20a_clk*,struct gk20a_pll*) ;
 int FUNC_3 (struct nvkm_device*,int ,int,int) ;
 int FUNC_4 (struct nvkm_device*,int ) ;
 scalar_t__ FUNC_5 (struct nvkm_device*,int,int ,int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct gk20a_clk *VAR_6, u32 VAR_7)
{
 struct nvkm_subdev *VAR_8 = &VAR_6->base.subdev;
 struct nvkm_device *VAR_9 = VAR_8->device;
 struct gk20a_pll VAR_10;
 int VAR_11 = 0;


 FUNC_1(VAR_6, &VAR_10);

 if (VAR_7 == VAR_10.n)
  return 0;


 FUNC_3(VAR_9, VAR_1,
  FUNC_0(VAR_3),
  FUNC_0(VAR_3));


 VAR_10.n = VAR_7;
 FUNC_6(1);
 FUNC_2(VAR_6, &VAR_10);


 FUNC_6(1);
 FUNC_3(VAR_9, VAR_1,
    FUNC_0(VAR_2),
    FUNC_0(VAR_2));


 if (FUNC_5(VAR_9, 500, VAR_4,
  VAR_5,
  VAR_5) < 0)
  VAR_11 = -VAR_0;


 FUNC_3(VAR_9, VAR_1,
  FUNC_0(VAR_3) |
  FUNC_0(VAR_2), 0);
 FUNC_4(VAR_9, VAR_1);

 return VAR_11;
}
