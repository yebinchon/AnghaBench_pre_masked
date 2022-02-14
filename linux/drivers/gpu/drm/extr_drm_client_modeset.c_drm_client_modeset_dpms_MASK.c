
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_client_dev {int modeset_mutex; struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_client_dev*,int) ;
 int FUNC_1 (struct drm_client_dev*,int) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct drm_client_dev *VAR_2, int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 int VAR_5 = 0;

 if (!FUNC_3(VAR_4))
  return -VAR_1;

 FUNC_5(&VAR_2->modeset_mutex);
 if (FUNC_2(VAR_4))
  VAR_5 = FUNC_0(VAR_2, VAR_3 == VAR_0);
 else
  FUNC_1(VAR_2, VAR_3);
 FUNC_6(&VAR_2->modeset_mutex);

 FUNC_4(VAR_4);

 return VAR_5;
}
