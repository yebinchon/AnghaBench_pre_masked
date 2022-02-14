
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_client_dev {int modeset_mutex; struct drm_device* dev; } ;


 int FUNC_0 (struct drm_client_dev*,int) ;
 int FUNC_1 (struct drm_client_dev*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_client_dev *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 int VAR_2;

 FUNC_3(&VAR_0->modeset_mutex);
 if (FUNC_2(VAR_1))
  VAR_2 = FUNC_0(VAR_0, 1);
 else
  VAR_2 = FUNC_1(VAR_0);
 FUNC_4(&VAR_0->modeset_mutex);

 return VAR_2;
}
