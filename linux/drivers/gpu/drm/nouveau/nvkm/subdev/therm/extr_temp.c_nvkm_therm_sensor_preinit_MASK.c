
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_therm {int subdev; TYPE_1__* func; } ;
struct TYPE_2__ {scalar_t__ (* temp_get ) (struct nvkm_therm*) ;} ;


 int FUNC_0 (int *,char*,char const*) ;
 scalar_t__ FUNC_1 (struct nvkm_therm*) ;

void
FUNC_2(struct nvkm_therm *VAR_0)
{
 const char *VAR_1 = "yes";

 if (VAR_0->func->temp_get(VAR_0) < 0)
  VAR_1 = "no";

 FUNC_0(&VAR_0->subdev, "internal sensor: %s\n", VAR_1);
}
