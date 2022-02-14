
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltdc_device {int regs; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dev; struct ltdc_device* dev_private; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

bool FUNC_3(struct drm_device *VAR_8, unsigned int VAR_9,
     bool VAR_10, int *VAR_11, int *VAR_12,
     ktime_t *VAR_13, ktime_t *VAR_14,
     const struct drm_display_mode *VAR_15)
{
 struct ltdc_device *VAR_16 = VAR_8->dev_private;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 if (VAR_13)
  *VAR_13 = FUNC_0();
 if (FUNC_1(VAR_8->dev)) {
  VAR_17 = FUNC_2(VAR_16->regs, VAR_5) & VAR_2;
  VAR_18 = FUNC_2(VAR_16->regs, VAR_4) & VAR_1;
  VAR_19 = FUNC_2(VAR_16->regs, VAR_3) & VAR_0;
  VAR_20 = FUNC_2(VAR_16->regs, VAR_6) & VAR_7;

  if (VAR_17 > VAR_19)
   *VAR_11 = VAR_17 - VAR_20 - VAR_18;
  else
   *VAR_11 = VAR_17 - VAR_18;
 } else {
  *VAR_11 = 0;
 }

 *VAR_12 = 0;

 if (VAR_14)
  *VAR_14 = FUNC_0();

 return 1;
}
