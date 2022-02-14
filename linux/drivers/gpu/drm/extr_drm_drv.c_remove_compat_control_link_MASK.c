
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_minor {TYPE_2__* kdev; scalar_t__ index; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ) ;
 struct drm_minor** FUNC_1 (struct drm_device*,int ) ;
 char* FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_3)
{
 struct drm_minor *VAR_4;
 char *VAR_5;

 if (!FUNC_0(VAR_3, VAR_0))
  return;

 VAR_4 = *FUNC_1(VAR_3, VAR_1);
 if (!VAR_4)
  return;

 VAR_5 = FUNC_2(VAR_2, "controlD%d", VAR_4->index + 64);
 if (!VAR_5)
  return;

 FUNC_4(VAR_4->kdev->kobj.parent, VAR_5);

 FUNC_3(VAR_5);
}
