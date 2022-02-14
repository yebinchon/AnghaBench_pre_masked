
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int dummy; } ;
struct nvkm_therm {int cstate; struct nvkm_subdev subdev; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int) ;
 int FUNC_1 (struct nvkm_therm*,int) ;

int
FUNC_2(struct nvkm_therm *VAR_0, int VAR_1, int VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_0->subdev;
 if (!VAR_2 || (VAR_2 < 0 && VAR_1 < VAR_0->cstate) ||
      (VAR_2 > 0 && VAR_1 > VAR_0->cstate)) {
  FUNC_0(VAR_3, "default fan speed -> %d%%\n", VAR_1);
  VAR_0->cstate = VAR_1;
  FUNC_1(VAR_0, -1);
 }
 return 0;
}
