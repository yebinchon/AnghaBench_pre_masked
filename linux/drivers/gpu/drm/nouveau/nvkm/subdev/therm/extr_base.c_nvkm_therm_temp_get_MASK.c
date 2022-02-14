
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_therm {TYPE_1__* func; } ;
struct TYPE_2__ {int (* temp_get ) (struct nvkm_therm*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_therm*) ;

int
FUNC_1(struct nvkm_therm *VAR_1)
{
 if (VAR_1->func->temp_get)
  return VAR_1->func->temp_get(VAR_1);
 return -VAR_0;
}
