
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; int id_entry; } ;
struct of_device_id {int data; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 struct drm_device* FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_device*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct drm_device*) ;
 struct of_device_id* FUNC_8 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct drm_device *VAR_4;
 const struct of_device_id *VAR_5 =
   FUNC_8(VAR_2, &VAR_3->dev);
 int VAR_6;

 if (!VAR_3->dev.of_node)
  return -VAR_0;

 if (VAR_5)
  VAR_3->id_entry = VAR_5->data;

 VAR_4 = FUNC_2(&VAR_1, &VAR_3->dev);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_6(VAR_4, 0);
 if (VAR_6)
  goto err_free;

 VAR_6 = FUNC_4(VAR_4, 0);
 if (VAR_6)
  goto err_unload;

 FUNC_5(VAR_4, 32);

 return 0;

err_unload:
 FUNC_7(VAR_4);
err_free:
 FUNC_3(VAR_4);

 return VAR_6;
}
