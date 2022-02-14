
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct nvkm_therm {TYPE_1__* fan; TYPE_2__* func; } ;
struct TYPE_6__ {int min_duty; int max_duty; } ;
struct TYPE_5__ {scalar_t__ (* temp_get ) (struct nvkm_therm*) ;} ;
struct TYPE_4__ {TYPE_3__ bios; } ;


 scalar_t__ FUNC_0 (struct nvkm_therm*) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_therm *VAR_0, u8 VAR_1,
                               u8 VAR_2)
{
 u8 VAR_3 = VAR_0->func->temp_get(VAR_0);
 u16 VAR_4;


 if (VAR_3 < VAR_1)
  return VAR_0->fan->bios.min_duty;
 else if (VAR_3 > VAR_2)
  return VAR_0->fan->bios.max_duty;


 VAR_4 = (VAR_3 - VAR_1);
 VAR_4 *= (VAR_0->fan->bios.max_duty - VAR_0->fan->bios.min_duty);
 VAR_4 /= (VAR_2 - VAR_1);
 VAR_4 += VAR_0->fan->bios.min_duty;
 return VAR_4;
}
