
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int * suspend_state; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_device*,int *) ;
 struct vmw_private* FUNC_2 (struct drm_device*) ;

int FUNC_3(struct drm_device *VAR_0)
{
 struct vmw_private *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (FUNC_0(!VAR_1->suspend_state))
  return 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1->suspend_state);
 VAR_1->suspend_state = ((void*)0);

 return VAR_2;
}
