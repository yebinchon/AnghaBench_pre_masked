
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_domain {size_t name; } ;
struct TYPE_5__ {int* domain; } ;
struct TYPE_7__ {int pstate; TYPE_1__ base; int list; } ;
struct nvkm_clk {int pstate; int temp; scalar_t__ dstate; scalar_t__ state_nr; scalar_t__ astate; TYPE_2__* func; TYPE_3__ bstate; struct nvkm_domain* domains; } ;
struct TYPE_6__ {int (* init ) (struct nvkm_clk*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 size_t VAR_0 ;
 struct nvkm_clk* FUNC_2 (struct nvkm_subdev*) ;
 int FUNC_3 (struct nvkm_clk*,size_t) ;
 int FUNC_4 (struct nvkm_subdev*,char*,size_t) ;
 int FUNC_5 (struct nvkm_clk*,int) ;
 int FUNC_6 (struct nvkm_clk*,TYPE_3__*) ;
 int FUNC_7 (struct nvkm_clk*) ;

__attribute__((used)) static int
FUNC_8(struct nvkm_subdev *VAR_1)
{
 struct nvkm_clk *VAR_2 = FUNC_2(VAR_1);
 const struct nvkm_domain *VAR_3 = VAR_2->domains;
 int VAR_4;

 FUNC_1(&VAR_2->bstate, 0x00, sizeof(VAR_2->bstate));
 FUNC_0(&VAR_2->bstate.list);
 VAR_2->bstate.pstate = 0xff;

 while (VAR_3->name != VAR_0) {
  VAR_4 = FUNC_3(VAR_2, VAR_3->name);
  if (VAR_4 < 0) {
   FUNC_4(VAR_1, "%02x freq unknown\n", VAR_3->name);
   return VAR_4;
  }
  VAR_2->bstate.base.domain[VAR_3->name] = VAR_4;
  VAR_3++;
 }

 FUNC_6(VAR_2, &VAR_2->bstate);

 if (VAR_2->func->init)
  return VAR_2->func->init(VAR_2);

 VAR_2->astate = VAR_2->state_nr - 1;
 VAR_2->dstate = 0;
 VAR_2->pstate = -1;
 VAR_2->temp = 90;
 FUNC_5(VAR_2, 1);
 return 0;
}
