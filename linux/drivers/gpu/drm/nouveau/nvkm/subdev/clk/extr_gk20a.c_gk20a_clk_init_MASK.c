
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct nvkm_clk {TYPE_2__* func; } ;
struct TYPE_6__ {struct nvkm_subdev subdev; } ;
struct gk20a_clk {TYPE_3__ base; } ;
struct TYPE_5__ {int (* prog ) (TYPE_3__*) ;TYPE_1__* pstates; int (* calc ) (struct nvkm_clk*,int *) ;} ;
struct TYPE_4__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct gk20a_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (struct gk20a_clk*) ;
 int FUNC_2 (struct nvkm_subdev*,char*) ;
 int FUNC_3 (struct nvkm_device*,int ,int ,int ) ;
 int FUNC_4 (struct nvkm_device*,int ) ;
 int FUNC_5 (struct nvkm_clk*,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct nvkm_clk *VAR_5)
{
 struct gk20a_clk *VAR_6 = FUNC_0(VAR_5);
 struct nvkm_subdev *VAR_7 = &VAR_6->base.subdev;
 struct nvkm_device *VAR_8 = VAR_7->device;
 int VAR_9;


 FUNC_3(VAR_8, VAR_3, VAR_4, 0);
 FUNC_4(VAR_8, VAR_3);
 FUNC_7(5);

 FUNC_3(VAR_8, VAR_0, VAR_1,
    VAR_2);

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9)
  return VAR_9;


 VAR_5->func->calc(VAR_5, &VAR_5->func->pstates[0].base);
 VAR_9 = VAR_5->func->prog(&VAR_6->base);
 if (VAR_9) {
  FUNC_2(VAR_7, "cannot initialize clock\n");
  return VAR_9;
 }

 return 0;
}
