
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct drm_psb_private {scalar_t__ aux_reg; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline uint32_t FUNC_1(struct drm_device *VAR_0, uint32_t VAR_1)
{
 struct drm_psb_private *VAR_2 = VAR_0->dev_private;
 return FUNC_0(VAR_2->aux_reg + VAR_1);
}
