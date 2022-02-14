
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda998x_priv {scalar_t__ rev; } ;
struct drm_display_mode {int clock; scalar_t__ htotal; scalar_t__ vtotal; } ;
struct drm_bridge {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct tda998x_priv* FUNC_1 (struct drm_bridge*) ;

__attribute__((used)) static enum drm_mode_status FUNC_2(struct drm_bridge *VAR_5,
         const struct drm_display_mode *VAR_6)
{

 struct tda998x_priv *VAR_7 = FUNC_1(VAR_5);

 if (VAR_6->clock > ((VAR_7->rev == VAR_4) ? 165000 : 150000))
  return VAR_2;
 if (VAR_6->htotal >= FUNC_0(13))
  return VAR_0;
 if (VAR_6->vtotal >= FUNC_0(11))
  return VAR_1;
 return VAR_3;
}
