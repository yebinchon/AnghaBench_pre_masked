
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_therm_func {int dummy; } ;
struct TYPE_2__ {int alarm_program_lock; } ;
struct nvkm_therm {int mode; int suspend; int clkgating_enabled; int attr_set; int attr_get; int fan_set; int fan_get; TYPE_1__ sensor; int lock; int alarm; struct nvkm_therm_func const* func; int subdev; } ;
struct nvkm_device {int cfgopt; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,struct nvkm_device*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct nvkm_therm *VAR_6, struct nvkm_device *VAR_7,
  int VAR_8, const struct nvkm_therm_func *VAR_9)
{
 FUNC_2(&VAR_0, VAR_7, VAR_8, &VAR_6->subdev);
 VAR_6->func = VAR_9;

 FUNC_0(&VAR_6->alarm, VAR_1);
 FUNC_3(&VAR_6->lock);
 FUNC_3(&VAR_6->sensor.alarm_program_lock);

 VAR_6->fan_get = VAR_4;
 VAR_6->fan_set = VAR_5;
 VAR_6->attr_get = VAR_2;
 VAR_6->attr_set = VAR_3;
 VAR_6->mode = VAR_6->suspend = -1;

 VAR_6->clkgating_enabled = FUNC_1(VAR_7->cfgopt,
      "NvPmEnableGating", 0);
}
