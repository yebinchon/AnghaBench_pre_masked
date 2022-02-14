
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int dev; } ;
struct drm_client_dev {TYPE_1__* funcs; int name; struct drm_device* dev; } ;
struct TYPE_2__ {int owner; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct drm_client_dev*) ;
 int FUNC_2 (struct drm_client_dev*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct drm_client_dev *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 FUNC_0(VAR_1->dev, "%s\n", VAR_0->name);

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_3(VAR_1);
 if (VAR_0->funcs)
  FUNC_4(VAR_0->funcs->owner);
}
