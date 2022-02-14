
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {struct vmw_overlay* overlay_priv; } ;
struct vmw_overlay {int dummy; } ;
struct drm_device {int dummy; } ;


 struct vmw_private* FUNC_0 (struct drm_device*) ;

__attribute__((used)) static inline struct vmw_overlay *FUNC_1(struct drm_device *VAR_0)
{
 struct vmw_private *VAR_1 = FUNC_0(VAR_0);
 return VAR_1 ? VAR_1->overlay_priv : ((void*)0);
}
