
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct drm_property {int dummy; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct armada_private {struct drm_property* saturation_prop; struct drm_property* contrast_prop; struct drm_property* brightness_prop; struct drm_property* colorkey_mode_prop; struct drm_property* colorkey_alpha_prop; struct drm_property* colorkey_val_prop; struct drm_property* colorkey_max_prop; struct drm_property* colorkey_min_prop; struct drm_property* colorkey_prop; } ;
struct TYPE_4__ {int colorkey_mode; int brightness; int contrast; int saturation; int colorkey_vb; int colorkey_ug; int colorkey_yr; } ;
struct TYPE_3__ {struct armada_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 TYPE_2__* FUNC_1 (struct drm_plane_state const*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_2,
 const struct drm_plane_state *VAR_3, struct drm_property *VAR_4,
 uint64_t *VAR_5)
{
 struct armada_private *VAR_6 = VAR_2->dev->dev_private;



 if (VAR_4 == VAR_6->colorkey_prop) {

  *VAR_5 = ((((FUNC_1(VAR_3)->colorkey_yr) >> (16)) & 0xff) << 0 | (((FUNC_1(VAR_3)->colorkey_ug) >> (16)) & 0xff) << 8 | (((FUNC_1(VAR_3)->colorkey_vb) >> (16)) & 0xff) << 16);



  if (*VAR_5 != ((((FUNC_1(VAR_3)->colorkey_yr) >> (24)) & 0xff) << 0 | (((FUNC_1(VAR_3)->colorkey_ug) >> (24)) & 0xff) << 8 | (((FUNC_1(VAR_3)->colorkey_vb) >> (24)) & 0xff) << 16) ||


      *VAR_5 != ((((FUNC_1(VAR_3)->colorkey_yr) >> (8)) & 0xff) << 0 | (((FUNC_1(VAR_3)->colorkey_ug) >> (8)) & 0xff) << 8 | (((FUNC_1(VAR_3)->colorkey_vb) >> (8)) & 0xff) << 16))


   return -VAR_1;
 } else if (VAR_4 == VAR_6->colorkey_min_prop) {
  *VAR_5 = ((((FUNC_1(VAR_3)->colorkey_yr) >> (16)) & 0xff) << 0 | (((FUNC_1(VAR_3)->colorkey_ug) >> (16)) & 0xff) << 8 | (((FUNC_1(VAR_3)->colorkey_vb) >> (16)) & 0xff) << 16);


 } else if (VAR_4 == VAR_6->colorkey_max_prop) {
  *VAR_5 = ((((FUNC_1(VAR_3)->colorkey_yr) >> (24)) & 0xff) << 0 | (((FUNC_1(VAR_3)->colorkey_ug) >> (24)) & 0xff) << 8 | (((FUNC_1(VAR_3)->colorkey_vb) >> (24)) & 0xff) << 16);


 } else if (VAR_4 == VAR_6->colorkey_val_prop) {
  *VAR_5 = ((((FUNC_1(VAR_3)->colorkey_yr) >> (8)) & 0xff) << 0 | (((FUNC_1(VAR_3)->colorkey_ug) >> (8)) & 0xff) << 8 | (((FUNC_1(VAR_3)->colorkey_vb) >> (8)) & 0xff) << 16);


 } else if (VAR_4 == VAR_6->colorkey_alpha_prop) {
  *VAR_5 = ((((FUNC_1(VAR_3)->colorkey_yr) >> (0)) & 0xff) << 0 | (((FUNC_1(VAR_3)->colorkey_ug) >> (0)) & 0xff) << 8 | (((FUNC_1(VAR_3)->colorkey_vb) >> (0)) & 0xff) << 16);


 } else if (VAR_4 == VAR_6->colorkey_mode_prop) {
  *VAR_5 = (FUNC_1(VAR_3)->colorkey_mode &
   VAR_0) >> FUNC_2(VAR_0);
 } else if (VAR_4 == VAR_6->brightness_prop) {
  *VAR_5 = FUNC_1(VAR_3)->brightness + 256;
 } else if (VAR_4 == VAR_6->contrast_prop) {
  *VAR_5 = FUNC_1(VAR_3)->contrast;
 } else if (VAR_4 == VAR_6->saturation_prop) {
  *VAR_5 = FUNC_1(VAR_3)->saturation;
 } else {
  return -VAR_1;
 }
 return 0;
}
