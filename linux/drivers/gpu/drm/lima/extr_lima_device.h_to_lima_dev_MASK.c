
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_device {int dummy; } ;
struct drm_device {struct lima_device* dev_private; } ;



__attribute__((used)) static inline struct lima_device *
FUNC_0(struct drm_device *VAR_0)
{
 return VAR_0->dev_private;
}
