
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int * suspend_state; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct drm_device*) ;
 struct vmw_private* FUNC_4 (struct drm_device*) ;

int FUNC_5(struct drm_device *VAR_0)
{
 struct vmw_private *VAR_1 = FUNC_4(VAR_0);

 VAR_1->suspend_state = FUNC_3(VAR_0);
 if (FUNC_1(VAR_1->suspend_state)) {
  int VAR_2 = FUNC_2(VAR_1->suspend_state);

  FUNC_0("Failed kms suspend: %d\n", VAR_2);
  VAR_1->suspend_state = ((void*)0);

  return VAR_2;
 }

 return 0;
}
