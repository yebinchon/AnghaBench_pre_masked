
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef void* u16 ;
struct drm_property_blob {int color_mgmt_changed; int gamma_lut; int ctm; int degamma_lut; struct drm_color_lut* data; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc_state {int color_mgmt_changed; int gamma_lut; int ctm; int degamma_lut; struct drm_color_lut* data; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_color_lut {void* blue; void* green; void* red; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_property_blob*) ;
 int FUNC_1 (struct drm_property_blob*) ;
 int FUNC_2 (struct drm_atomic_state*) ;
 struct drm_property_blob* FUNC_3 (struct drm_atomic_state*,struct drm_crtc*) ;
 struct drm_atomic_state* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_atomic_state*) ;
 int FUNC_6 (struct drm_property_blob*) ;
 struct drm_property_blob* FUNC_7 (struct drm_device*,int,int *) ;
 int FUNC_8 (int *,struct drm_property_blob*) ;

int FUNC_9(struct drm_crtc *VAR_1,
           u16 *VAR_2, u16 *VAR_3, u16 *VAR_4,
           uint32_t VAR_5,
           struct drm_modeset_acquire_ctx *VAR_6)
{
 struct drm_device *VAR_7 = VAR_1->dev;
 struct drm_atomic_state *VAR_8;
 struct drm_crtc_state *VAR_9;
 struct drm_property_blob *VAR_10 = ((void*)0);
 struct drm_color_lut *VAR_11;
 int VAR_12, VAR_13 = 0;
 bool VAR_14;

 VAR_8 = FUNC_4(VAR_1->dev);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_7(VAR_7,
     sizeof(struct drm_color_lut) * VAR_5,
     ((void*)0));
 if (FUNC_0(VAR_10)) {
  VAR_13 = FUNC_1(VAR_10);
  VAR_10 = ((void*)0);
  goto fail;
 }


 VAR_11 = VAR_10->data;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_11[VAR_12].red = VAR_2[VAR_12];
  VAR_11[VAR_12].green = VAR_3[VAR_12];
  VAR_11[VAR_12].blue = VAR_4[VAR_12];
 }

 VAR_8->acquire_ctx = VAR_6;
 VAR_9 = FUNC_3(VAR_8, VAR_1);
 if (FUNC_0(VAR_9)) {
  VAR_13 = FUNC_1(VAR_9);
  goto fail;
 }


 VAR_14 = FUNC_8(&VAR_9->degamma_lut, ((void*)0));
 VAR_14 |= FUNC_8(&VAR_9->ctm, ((void*)0));
 VAR_14 |= FUNC_8(&VAR_9->gamma_lut, VAR_10);
 VAR_9->color_mgmt_changed |= VAR_14;

 VAR_13 = FUNC_2(VAR_8);

fail:
 FUNC_5(VAR_8);
 FUNC_6(VAR_10);
 return VAR_13;
}
