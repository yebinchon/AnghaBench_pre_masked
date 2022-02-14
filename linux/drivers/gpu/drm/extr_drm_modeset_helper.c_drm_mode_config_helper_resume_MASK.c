
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * suspend_state; } ;
struct drm_device {int fb_helper; TYPE_1__ mode_config; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_device*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct drm_device*) ;

int FUNC_5(struct drm_device *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return 0;

 if (FUNC_1(!VAR_1->mode_config.suspend_state))
  return -VAR_0;

 VAR_2 = FUNC_2(VAR_1, VAR_1->mode_config.suspend_state);
 if (VAR_2)
  FUNC_0("Failed to resume (%d)\n", VAR_2);
 VAR_1->mode_config.suspend_state = ((void*)0);

 FUNC_3(VAR_1->fb_helper, 0);
 FUNC_4(VAR_1);

 return VAR_2;
}
