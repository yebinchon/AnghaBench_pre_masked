
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_therm {int mode; TYPE_1__* func; struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* temp_get ) (struct nvkm_therm*) ;} ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nvkm_subdev*,char*,char const*) ;
 scalar_t__ FUNC_2 (struct nvkm_device*) ;
 int FUNC_3 (struct nvkm_therm*,int) ;
 scalar_t__ FUNC_4 (struct nvkm_therm*) ;

int
FUNC_5(struct nvkm_therm *VAR_3, int VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_3->subdev;
 struct nvkm_device *VAR_6 = VAR_5->device;
 static const char *VAR_7[] = {
  "disabled",
  "manual",
  "automatic"
 };


 if ((VAR_4 >= FUNC_0(VAR_7)) ||
     (VAR_4 != VAR_2 && FUNC_2(VAR_6)))
  return -VAR_0;



 if (VAR_4 == VAR_1 &&
     VAR_3->func->temp_get(VAR_3) < 0)
  return -VAR_0;

 if (VAR_3->mode == VAR_4)
  return 0;

 FUNC_1(VAR_5, "fan management: %s\n", VAR_7[VAR_4]);
 FUNC_3(VAR_3, VAR_4);
 return 0;
}
