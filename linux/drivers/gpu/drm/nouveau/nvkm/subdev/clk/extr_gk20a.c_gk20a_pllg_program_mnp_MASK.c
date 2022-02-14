
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct gk20a_pll {int dummy; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct gk20a_clk {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gk20a_clk*) ;
 int FUNC_1 (struct gk20a_clk*) ;
 int FUNC_2 (struct gk20a_clk*,struct gk20a_pll*) ;
 int FUNC_3 (struct gk20a_clk*,struct gk20a_pll const*) ;
 int FUNC_4 (struct nvkm_device*,int ,int ,int) ;
 int FUNC_5 (struct nvkm_device*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct gk20a_clk *VAR_5, const struct gk20a_pll *VAR_6)
{
 struct nvkm_subdev *VAR_7 = &VAR_5->base.subdev;
 struct nvkm_device *VAR_8 = VAR_7->device;
 struct gk20a_pll VAR_9;
 int VAR_10;

 FUNC_2(VAR_5, &VAR_9);


 FUNC_4(VAR_8, VAR_0, VAR_3,
    VAR_2 << VAR_4);

 FUNC_4(VAR_8, VAR_0, VAR_3,
    VAR_2 << VAR_4);
 FUNC_5(VAR_8, VAR_0);
 FUNC_6(2);

 FUNC_0(VAR_5);

 FUNC_3(VAR_5, VAR_6);

 VAR_10 = FUNC_1(VAR_5);
 if (VAR_10)
  return VAR_10;


 FUNC_6(2);
 FUNC_4(VAR_8, VAR_0, VAR_3,
    VAR_1 << VAR_4);

 FUNC_4(VAR_8, VAR_0, VAR_3,
    VAR_1 << VAR_4);
 FUNC_5(VAR_8, VAR_0);

 return 0;
}
