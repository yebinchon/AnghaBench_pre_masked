
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620 {int* devcap; } ;
struct drm_display_mode {int dummy; } ;
struct drm_bridge {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sii8620* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct sii8620*,struct drm_display_mode const*) ;

__attribute__((used)) static enum drm_mode_status FUNC_2(struct drm_bridge *VAR_4,
      const struct drm_display_mode *VAR_5)
{
 struct sii8620 *VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = FUNC_1(VAR_6, VAR_5);
 bool VAR_8 = VAR_6->devcap[VAR_0] &
   VAR_1;

 switch (VAR_7) {
 case 0:
  return VAR_3;
 case 1:
  return (VAR_8) ? VAR_3 : VAR_2;
 default:
  return VAR_2;
 }
}
