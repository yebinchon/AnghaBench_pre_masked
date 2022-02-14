
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_drm_private {int omaprev; } ;
struct drm_omap_param {int param; int value; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;


__attribute__((used)) static int FUNC_1(struct drm_device *VAR_1, void *VAR_2,
  struct drm_file *VAR_3)
{
 struct omap_drm_private *VAR_4 = VAR_1->dev_private;
 struct drm_omap_param *VAR_5 = VAR_2;

 FUNC_0("%p: param=%llu", VAR_1, VAR_5->param);

 switch (VAR_5->param) {
 case 128:
  VAR_5->value = VAR_4->omaprev;
  break;
 default:
  FUNC_0("unknown parameter %lld", VAR_5->param);
  return -VAR_0;
 }

 return 0;
}
