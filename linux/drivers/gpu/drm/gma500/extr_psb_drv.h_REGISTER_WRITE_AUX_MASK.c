
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct drm_psb_private {scalar_t__ aux_reg; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct drm_device *VAR_0, uint32_t VAR_1,
          uint32_t VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_0->dev_private;
 FUNC_0((VAR_2), VAR_3->aux_reg + (VAR_1));
}
