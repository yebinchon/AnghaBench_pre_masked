
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int pid; int event_list; int prime; int filp; TYPE_2__* minor; } ;
struct drm_device {TYPE_3__* driver; int open_count; } ;
struct TYPE_6__ {int (* postclose ) (struct drm_device*,struct drm_file*) ;int (* preclose ) (struct drm_device*,struct drm_file*) ;} ;
struct TYPE_5__ {TYPE_1__* kdev; struct drm_device* dev; } ;
struct TYPE_4__ {int devt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,long,int ) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_file*) ;
 int FUNC_4 (struct drm_file*) ;
 int FUNC_5 (struct drm_device*,struct drm_file*) ;
 scalar_t__ FUNC_6 (struct drm_file*) ;
 int FUNC_7 (struct drm_device*,struct drm_file*) ;
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (struct drm_device*,struct drm_file*) ;
 int FUNC_10 (struct drm_file*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct drm_device*,struct drm_file*) ;
 int FUNC_13 (struct drm_file*) ;
 int FUNC_14 (struct drm_file*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct drm_device*,struct drm_file*) ;
 int FUNC_19 (struct drm_device*,struct drm_file*) ;
 int FUNC_20 (int ) ;

void FUNC_21(struct drm_file *VAR_6)
{
 struct drm_device *VAR_7;

 if (!VAR_6)
  return;

 VAR_7 = VAR_6->minor->dev;

 FUNC_0("pid = %d, device = 0x%lx, open_count = %d\n",
    FUNC_20(VAR_5),
    (long)FUNC_16(VAR_6->minor->kdev->devt),
    VAR_7->open_count);

 if (FUNC_2(VAR_7, VAR_2) &&
     VAR_7->driver->preclose)
  VAR_7->driver->preclose(VAR_7, VAR_6);

 if (FUNC_2(VAR_7, VAR_2))
  FUNC_8(VAR_7, VAR_6->filp);

 if (FUNC_2(VAR_7, VAR_1))
  FUNC_9(VAR_7, VAR_6);

 FUNC_3(VAR_6);

 if (FUNC_2(VAR_7, VAR_3)) {
  FUNC_4(VAR_6);
  FUNC_12(VAR_7, VAR_6);
 }

 if (FUNC_2(VAR_7, VAR_4))
  FUNC_13(VAR_6);

 if (FUNC_2(VAR_7, VAR_0))
  FUNC_5(VAR_7, VAR_6);

 FUNC_7(VAR_7, VAR_6);

 if (FUNC_6(VAR_6))
  FUNC_10(VAR_6);

 if (VAR_7->driver->postclose)
  VAR_7->driver->postclose(VAR_7, VAR_6);

 FUNC_11(&VAR_6->prime);

 FUNC_1(!FUNC_15(&VAR_6->event_list));

 FUNC_17(VAR_6->pid);
 FUNC_14(VAR_6);
}
