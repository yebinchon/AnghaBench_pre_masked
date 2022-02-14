
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_therm {TYPE_1__* fan; } ;
struct TYPE_4__ {int min_duty; int max_duty; } ;
struct TYPE_3__ {TYPE_2__ bios; } ;



__attribute__((used)) static void
FUNC_0(struct nvkm_therm *VAR_0)
{
 if (VAR_0->fan->bios.min_duty > 100)
  VAR_0->fan->bios.min_duty = 100;
 if (VAR_0->fan->bios.max_duty > 100)
  VAR_0->fan->bios.max_duty = 100;

 if (VAR_0->fan->bios.min_duty > VAR_0->fan->bios.max_duty)
  VAR_0->fan->bios.min_duty = VAR_0->fan->bios.max_duty;
}
