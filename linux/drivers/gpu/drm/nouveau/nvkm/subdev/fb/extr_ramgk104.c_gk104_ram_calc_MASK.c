
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int timing_20_30_07; int ramcfg_11_02_03; int ramcfg_11_02_04; } ;
struct nvkm_ram_data {scalar_t__ freq; TYPE_4__ bios; } ;
struct nvkm_ram {int dummy; } ;
struct nvkm_clk {int dummy; } ;
struct TYPE_10__ {struct nvkm_ram_data* next; struct nvkm_ram_data target; struct nvkm_ram_data xition; struct nvkm_ram_data former; TYPE_3__* fb; } ;
struct gk104_ram {TYPE_5__ base; } ;
struct TYPE_7__ {TYPE_1__* device; } ;
struct TYPE_8__ {TYPE_2__ subdev; } ;
struct TYPE_6__ {struct nvkm_clk* clk; } ;


 int FUNC_0 (int) ;
 struct gk104_ram* FUNC_1 (struct nvkm_ram*) ;
 int FUNC_2 (struct gk104_ram*,int ,struct nvkm_ram_data*) ;
 int FUNC_3 (struct gk104_ram*,struct nvkm_ram_data*) ;
 scalar_t__ FUNC_4 (struct nvkm_ram_data*,struct nvkm_ram_data*,int) ;
 int VAR_0 ;
 int FUNC_5 (struct nvkm_clk*,int ) ;

int
FUNC_6(struct nvkm_ram *VAR_1, u32 VAR_2)
{
 struct gk104_ram *VAR_3 = FUNC_1(VAR_1);
 struct nvkm_clk *VAR_4 = VAR_3->base.fb->subdev.device->clk;
 struct nvkm_ram_data *VAR_5 = &VAR_3->base.xition;
 struct nvkm_ram_data *VAR_6;
 int VAR_7;

 if (VAR_3->base.next == ((void*)0)) {
  VAR_7 = FUNC_2(VAR_3,
       FUNC_5(VAR_4, VAR_0),
       &VAR_3->base.former);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_2(VAR_3, VAR_2, &VAR_3->base.target);
  if (VAR_7)
   return VAR_7;

  if (VAR_3->base.target.freq < VAR_3->base.former.freq) {
   *VAR_5 = VAR_3->base.target;
   VAR_6 = &VAR_3->base.former;
  } else {
   *VAR_5 = VAR_3->base.former;
   VAR_6 = &VAR_3->base.target;
  }

  VAR_5->bios.ramcfg_11_02_04 = VAR_6->bios.ramcfg_11_02_04;
  VAR_5->bios.ramcfg_11_02_03 = VAR_6->bios.ramcfg_11_02_03;
  VAR_5->bios.timing_20_30_07 = VAR_6->bios.timing_20_30_07;

  VAR_3->base.next = &VAR_3->base.target;
  if (FUNC_4(VAR_5, &VAR_3->base.former, sizeof(VAR_5->bios)))
   VAR_3->base.next = &VAR_3->base.xition;
 } else {
  FUNC_0(VAR_3->base.next != &VAR_3->base.xition);
  VAR_3->base.next = &VAR_3->base.target;
 }

 return FUNC_3(VAR_3, VAR_3->base.next);
}
