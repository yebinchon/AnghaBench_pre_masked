
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_clk {TYPE_1__* func; int work; int pwrsrc_ntfy; } ;
struct TYPE_2__ {int (* fini ) (struct nvkm_clk*) ;} ;


 int FUNC_0 (int *) ;
 struct nvkm_clk* FUNC_1 (struct nvkm_subdev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvkm_clk*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_subdev *VAR_0, bool VAR_1)
{
 struct nvkm_clk *VAR_2 = FUNC_1(VAR_0);
 FUNC_2(&VAR_2->pwrsrc_ntfy);
 FUNC_0(&VAR_2->work);
 if (VAR_2->func->fini)
  VAR_2->func->fini(VAR_2);
 return 0;
}
