
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_minor {TYPE_1__* kdev; scalar_t__ index; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {TYPE_2__ kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,int ) ;
 struct drm_minor** FUNC_1 (struct drm_device*,int ) ;
 char* FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_4)
{
 struct drm_minor *VAR_5;
 char *VAR_6;
 int VAR_7;

 if (!FUNC_0(VAR_4, VAR_0))
  return 0;

 VAR_5 = *FUNC_1(VAR_4, VAR_1);
 if (!VAR_5)
  return 0;
 VAR_6 = FUNC_2(VAR_3, "controlD%d", VAR_5->index + 64);
 if (!VAR_6)
  return -VAR_2;

 VAR_7 = FUNC_4(VAR_5->kdev->kobj.parent,
    &VAR_5->kdev->kobj,
    VAR_6);

 FUNC_3(VAR_6);

 return VAR_7;
}
