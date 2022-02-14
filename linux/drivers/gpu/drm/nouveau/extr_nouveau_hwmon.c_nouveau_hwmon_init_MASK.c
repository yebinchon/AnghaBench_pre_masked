
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_volt {int dummy; } ;
struct nvkm_therm {scalar_t__ (* fan_get ) (struct nvkm_therm*) ;scalar_t__ attr_set; scalar_t__ attr_get; } ;
struct nvkm_iccsense {int dummy; } ;
struct nouveau_hwmon {struct device* hwmon; struct drm_device* dev; } ;
struct TYPE_2__ {int device; } ;
struct nouveau_drm {struct nouveau_hwmon* hwmon; TYPE_1__ client; } ;
struct drm_device {int dev; } ;
struct device {int dummy; } ;
struct attribute_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct nouveau_drm*,char*) ;
 int FUNC_2 (struct nouveau_drm*,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct device*) ;
 struct device* FUNC_4 (int ,char*,struct drm_device*,int *,struct attribute_group const**) ;
 struct nouveau_hwmon* FUNC_5 (int,int ) ;
 int VAR_3 ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct nvkm_therm*) ;
 struct nvkm_iccsense* FUNC_8 (int *) ;
 struct nvkm_therm* FUNC_9 (int *) ;
 struct nvkm_volt* FUNC_10 (int *) ;
 struct attribute_group VAR_4 ;
 scalar_t__ FUNC_11 (struct nvkm_therm*) ;
 struct attribute_group VAR_5 ;

int
FUNC_12(struct drm_device *VAR_6)
{
 return 0;

}
