
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_client_dev {struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_client_dev*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;

int FUNC_3(struct drm_client_dev *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 int VAR_3;

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_2);

 return VAR_3;
}
