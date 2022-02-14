
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psb_intel_i2c_chan {int reg; struct drm_device* drm_dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
 struct psb_intel_i2c_chan *VAR_2 = VAR_1;
 struct drm_device *VAR_3 = VAR_2->drm_dev;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2->reg);
 return (VAR_4 & VAR_0) != 0;
}
