
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int enable_fb; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct vmw_private*) ;
 struct vmw_private* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct vmw_private*) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0,
       struct drm_file *VAR_1)
{
 struct vmw_private *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2);
 if (!VAR_2->enable_fb)
  FUNC_2(VAR_2);
}
