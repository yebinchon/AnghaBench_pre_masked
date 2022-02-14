
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_set_version {int drm_di_major; int drm_di_minor; int drm_dd_major; scalar_t__ drm_dd_minor; } ;
struct drm_file {int dummy; } ;
struct drm_device {int master_mutex; TYPE_1__* driver; int if_version; } ;
struct TYPE_2__ {int major; scalar_t__ minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 struct drm_set_version *VAR_6 = VAR_4;
 int VAR_7, VAR_8 = 0;

 FUNC_3(&VAR_3->master_mutex);
 if (VAR_6->drm_di_major != -1) {
  if (VAR_6->drm_di_major != VAR_0 ||
      VAR_6->drm_di_minor < 0 || VAR_6->drm_di_minor > VAR_1) {
   VAR_8 = -VAR_2;
   goto done;
  }
  VAR_7 = FUNC_0(VAR_6->drm_di_major,
         VAR_6->drm_di_minor);
  VAR_3->if_version = FUNC_2(VAR_7, VAR_3->if_version);
  if (VAR_6->drm_di_minor >= 1) {




   VAR_8 = FUNC_1(VAR_3, VAR_5);
   if (VAR_8)
    goto done;
  }
 }

 if (VAR_6->drm_dd_major != -1) {
  if (VAR_6->drm_dd_major != VAR_3->driver->major ||
      VAR_6->drm_dd_minor < 0 || VAR_6->drm_dd_minor >
      VAR_3->driver->minor) {
   VAR_8 = -VAR_2;
   goto done;
  }
 }

done:
 VAR_6->drm_di_major = VAR_0;
 VAR_6->drm_di_minor = VAR_1;
 VAR_6->drm_dd_major = VAR_3->driver->major;
 VAR_6->drm_dd_minor = VAR_3->driver->minor;
 FUNC_4(&VAR_3->master_mutex);

 return VAR_8;
}
