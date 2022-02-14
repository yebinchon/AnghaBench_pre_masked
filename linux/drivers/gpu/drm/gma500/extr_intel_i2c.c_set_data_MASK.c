
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psb_intel_i2c_chan {int reg; struct drm_device* drm_dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_7, int VAR_8)
{
 struct psb_intel_i2c_chan *VAR_9 = VAR_7;
 struct drm_device *VAR_10 = VAR_9->drm_dev;
 u32 VAR_11 = 0, VAR_12;


 VAR_11 =
      FUNC_0(VAR_9->reg) & (VAR_4 |
        VAR_0);

 if (VAR_8)
  VAR_12 = VAR_1 | VAR_2;
 else
  VAR_12 =
      VAR_3 | VAR_2 |
      VAR_5;

 FUNC_1(VAR_9->reg, VAR_11 | VAR_12);
 FUNC_2(VAR_6);
}
