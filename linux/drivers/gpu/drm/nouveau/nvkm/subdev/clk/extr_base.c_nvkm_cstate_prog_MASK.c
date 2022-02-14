
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_volt {int dummy; } ;
struct nvkm_therm {int dummy; } ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_cstate {int voltage; } ;
struct nvkm_pstate {int fanspeed; struct nvkm_cstate base; int list; } ;
struct nvkm_device {struct nvkm_volt* volt; struct nvkm_therm* therm; } ;
struct nvkm_clk {int temp; TYPE_1__* func; struct nvkm_subdev subdev; } ;
struct TYPE_2__ {int (* calc ) (struct nvkm_clk*,struct nvkm_cstate*) ;int (* prog ) (struct nvkm_clk*) ;int (* tidy ) (struct nvkm_clk*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nvkm_cstate* FUNC_1 (struct nvkm_clk*,struct nvkm_pstate*,struct nvkm_cstate*) ;
 struct nvkm_cstate* FUNC_2 (struct nvkm_clk*,struct nvkm_pstate*,int) ;
 int FUNC_3 (struct nvkm_subdev*,char*,int) ;
 int FUNC_4 (struct nvkm_therm*,int ,int) ;
 int FUNC_5 (struct nvkm_volt*,int ,int ,int ,int) ;
 int FUNC_6 (struct nvkm_clk*,struct nvkm_cstate*) ;
 int FUNC_7 (struct nvkm_clk*) ;
 int FUNC_8 (struct nvkm_clk*) ;

__attribute__((used)) static int
FUNC_9(struct nvkm_clk *VAR_1, struct nvkm_pstate *VAR_2, int VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_1->subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 struct nvkm_therm *VAR_6 = VAR_5->therm;
 struct nvkm_volt *VAR_7 = VAR_5->volt;
 struct nvkm_cstate *VAR_8;
 int VAR_9;

 if (!FUNC_0(&VAR_2->list)) {
  VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3);
  VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_8);
 } else {
  VAR_8 = &VAR_2->base;
 }

 if (VAR_6) {
  VAR_9 = FUNC_4(VAR_6, VAR_2->fanspeed, +1);
  if (VAR_9 && VAR_9 != -VAR_0) {
   FUNC_3(VAR_4, "failed to raise fan speed: %d\n", VAR_9);
   return VAR_9;
  }
 }

 if (VAR_7) {
  VAR_9 = FUNC_5(VAR_7, VAR_8->voltage,
           VAR_2->base.voltage, VAR_1->temp, +1);
  if (VAR_9 && VAR_9 != -VAR_0) {
   FUNC_3(VAR_4, "failed to raise voltage: %d\n", VAR_9);
   return VAR_9;
  }
 }

 VAR_9 = VAR_1->func->calc(VAR_1, VAR_8);
 if (VAR_9 == 0) {
  VAR_9 = VAR_1->func->prog(VAR_1);
  VAR_1->func->tidy(VAR_1);
 }

 if (VAR_7) {
  VAR_9 = FUNC_5(VAR_7, VAR_8->voltage,
           VAR_2->base.voltage, VAR_1->temp, -1);
  if (VAR_9 && VAR_9 != -VAR_0)
   FUNC_3(VAR_4, "failed to lower voltage: %d\n", VAR_9);
 }

 if (VAR_6) {
  VAR_9 = FUNC_4(VAR_6, VAR_2->fanspeed, -1);
  if (VAR_9 && VAR_9 != -VAR_0)
   FUNC_3(VAR_4, "failed to lower fan speed: %d\n", VAR_9);
 }

 return VAR_9;
}
