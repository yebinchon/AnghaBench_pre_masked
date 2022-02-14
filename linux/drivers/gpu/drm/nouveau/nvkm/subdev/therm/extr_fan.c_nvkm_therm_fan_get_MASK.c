
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_therm {TYPE_1__* fan; } ;
struct TYPE_2__ {int (* get ) (struct nvkm_therm*) ;} ;


 int FUNC_0 (struct nvkm_therm*) ;

int
FUNC_1(struct nvkm_therm *VAR_0)
{
 return VAR_0->fan->get(VAR_0);
}
