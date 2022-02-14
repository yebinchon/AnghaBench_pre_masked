
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct drm_device {int dummy; } ;
struct udl_device {TYPE_1__ urbs; int udev; int gem_lock; struct drm_device drm; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_device*,int ,int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*,int ) ;
 scalar_t__ FUNC_9 (struct udl_device*) ;

int FUNC_10(struct udl_device *VAR_4)
{
 struct drm_device *VAR_5 = &VAR_4->drm;
 int VAR_6 = -VAR_1;

 FUNC_0("\n");

 FUNC_3(&VAR_4->gem_lock);

 if (!FUNC_8(VAR_5, VAR_4->udev)) {
  VAR_6 = -VAR_0;
  FUNC_1("firmware not recognized. Assume incompatible device\n");
  goto err;
 }

 if (FUNC_9(VAR_4))
  FUNC_1("Selecting channel failed\n");

 if (!FUNC_4(VAR_5, VAR_3, VAR_2)) {
  FUNC_1("udl_alloc_urb_list failed\n");
  goto err;
 }

 FUNC_0("\n");
 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6)
  goto err;

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6)
  goto err;

 FUNC_2(VAR_5);

 return 0;

err:
 if (VAR_4->urbs.count)
  FUNC_6(VAR_5);
 FUNC_1("%d\n", VAR_6);
 return VAR_6;
}
