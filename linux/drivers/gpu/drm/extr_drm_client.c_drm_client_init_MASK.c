
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* driver; } ;
struct drm_client_funcs {int owner; } ;
struct drm_client_dev {char const* name; struct drm_client_funcs const* funcs; struct drm_device* dev; } ;
struct TYPE_2__ {int dumb_create; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_client_dev*) ;
 int FUNC_1 (struct drm_client_dev*) ;
 int FUNC_2 (struct drm_client_dev*) ;
 int FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct drm_device *VAR_3, struct drm_client_dev *VAR_4,
      const char *VAR_5, const struct drm_client_funcs *VAR_6)
{
 int VAR_7;

 if (!FUNC_3(VAR_3, VAR_0) || !VAR_3->driver->dumb_create)
  return -VAR_2;

 if (VAR_6 && !FUNC_6(VAR_6->owner))
  return -VAR_1;

 VAR_4->dev = VAR_3;
 VAR_4->name = VAR_5;
 VAR_4->funcs = VAR_6;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7)
  goto err_put_module;

 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7)
  goto err_free;

 FUNC_4(VAR_3);

 return 0;

err_free:
 FUNC_1(VAR_4);
err_put_module:
 if (VAR_6)
  FUNC_5(VAR_6->owner);

 return VAR_7;
}
