
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_therm {TYPE_1__* func; scalar_t__ fan; } ;
struct TYPE_4__ {int line; } ;
struct nvkm_fantog {TYPE_2__ func; } ;
struct TYPE_3__ {int (* pwm_ctrl ) (struct nvkm_therm*,int ,int) ;} ;


 int FUNC_0 (struct nvkm_fantog*,int) ;
 int FUNC_1 (struct nvkm_therm*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_therm *VAR_0, int VAR_1)
{
 struct nvkm_fantog *VAR_2 = (void *)VAR_0->fan;
 if (VAR_0->func->pwm_ctrl)
  VAR_0->func->pwm_ctrl(VAR_0, VAR_2->func.line, 0);
 FUNC_0(VAR_2, VAR_1);
 return 0;
}
