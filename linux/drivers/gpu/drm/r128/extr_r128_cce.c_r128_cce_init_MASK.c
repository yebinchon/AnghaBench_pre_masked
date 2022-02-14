
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int func; } ;
typedef TYPE_1__ drm_r128_init_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;


 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,TYPE_1__*) ;

int FUNC_4(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 drm_r128_init_t *VAR_4 = VAR_2;

 FUNC_0("\n");

 FUNC_1(VAR_1, VAR_3);

 switch (VAR_4->func) {
 case 128:
  return FUNC_3(VAR_1, VAR_4);
 case 129:
  return FUNC_2(VAR_1);
 }

 return -VAR_0;
}
