
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hibmc_drm_private {int mode_config_initialized; int dev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct hibmc_drm_private *VAR_0)
{
 if (VAR_0->mode_config_initialized) {
  FUNC_0(VAR_0->dev);
  VAR_0->mode_config_initialized = 0;
 }
}
