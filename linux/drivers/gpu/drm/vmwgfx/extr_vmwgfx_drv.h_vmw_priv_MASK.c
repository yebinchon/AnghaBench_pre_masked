
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;



__attribute__((used)) static inline struct vmw_private *FUNC_0(struct drm_device *VAR_0)
{
 return (struct vmw_private *)VAR_0->dev_private;
}
