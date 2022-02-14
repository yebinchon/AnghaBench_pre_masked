
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tilcdc_drm_private {int rev; } ;
struct drm_device {struct tilcdc_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u32 FUNC_0(struct drm_device *VAR_2)
{
 struct tilcdc_drm_private *VAR_3 = VAR_2->dev_private;
 return (VAR_3->rev == 2) ? VAR_0 : VAR_1;
}
