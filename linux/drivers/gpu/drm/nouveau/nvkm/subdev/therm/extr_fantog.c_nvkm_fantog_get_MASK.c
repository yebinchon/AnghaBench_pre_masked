
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_therm {scalar_t__ fan; } ;
struct nvkm_fantog {int percent; } ;



__attribute__((used)) static int
FUNC_0(struct nvkm_therm *VAR_0)
{
 struct nvkm_fantog *VAR_1 = (void *)VAR_0->fan;
 return VAR_1->percent;
}
