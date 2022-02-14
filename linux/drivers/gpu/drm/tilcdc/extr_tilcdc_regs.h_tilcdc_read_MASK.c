
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tilcdc_drm_private {scalar_t__ mmio; } ;
struct drm_device {struct tilcdc_drm_private* dev_private; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct drm_device *VAR_0, u32 VAR_1)
{
 struct tilcdc_drm_private *VAR_2 = VAR_0->dev_private;
 return FUNC_0(VAR_2->mmio + VAR_1);
}
