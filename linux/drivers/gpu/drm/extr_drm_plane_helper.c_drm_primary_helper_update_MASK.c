
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_rect {int x1; int y1; int x2; int y2; } ;
struct drm_plane {TYPE_1__* funcs; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_mode_set {int x; int y; int num_connectors; struct drm_connector** connectors; int * mode; struct drm_framebuffer* fb; struct drm_crtc* crtc; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {TYPE_2__* funcs; int mode; } ;
struct drm_connector {int dummy; } ;
struct TYPE_4__ {int (* set_config ) (struct drm_mode_set*,struct drm_modeset_acquire_ctx*) ;} ;
struct TYPE_3__ {int (* disable_plane ) (struct drm_plane*,struct drm_modeset_acquire_ctx*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_plane*,struct drm_crtc*,struct drm_framebuffer*,struct drm_rect*,struct drm_rect*,int ,int ,int ,int,int,int*) ;
 int FUNC_2 (struct drm_crtc*,struct drm_connector**,int) ;
 struct drm_connector** FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct drm_connector**) ;
 int FUNC_5 (struct drm_plane*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_6 (struct drm_mode_set*,struct drm_modeset_acquire_ctx*) ;

__attribute__((used)) static int FUNC_7(struct drm_plane *VAR_4, struct drm_crtc *VAR_5,
         struct drm_framebuffer *VAR_6,
         int VAR_7, int VAR_8,
         unsigned int VAR_9, unsigned int VAR_10,
         uint32_t VAR_11, uint32_t VAR_12,
         uint32_t VAR_13, uint32_t VAR_14,
         struct drm_modeset_acquire_ctx *VAR_15)
{
 struct drm_mode_set VAR_16 = {
  .crtc = VAR_5,
  .fb = VAR_6,
  .mode = &VAR_5->mode,
  .x = VAR_11 >> 16,
  .y = VAR_12 >> 16,
 };
 struct drm_rect VAR_17 = {
  .x1 = VAR_11,
  .y1 = VAR_12,
  .x2 = VAR_11 + VAR_13,
  .y2 = VAR_12 + VAR_14,
 };
 struct drm_rect VAR_18 = {
  .x1 = VAR_7,
  .y1 = VAR_8,
  .x2 = VAR_7 + VAR_9,
  .y2 = VAR_8 + VAR_10,
 };
 struct drm_connector **VAR_19;
 int VAR_20, VAR_21;
 bool VAR_22;

 VAR_21 = FUNC_1(VAR_4, VAR_5, VAR_6,
         &VAR_17, &VAR_18,
         VAR_0,
         VAR_1,
         VAR_1,
         0, 0, &VAR_22);
 if (VAR_21)
  return VAR_21;

 if (!VAR_22)





  return VAR_4->funcs->disable_plane(VAR_4, VAR_15);


 VAR_20 = FUNC_2(VAR_5, ((void*)0), 0);
 FUNC_0(VAR_20 == 0);
 VAR_19 = FUNC_3(VAR_20, sizeof(*VAR_19),
     VAR_3);
 if (!VAR_19)
  return -VAR_2;
 FUNC_2(VAR_5, VAR_19, VAR_20);

 VAR_16.connectors = VAR_19;
 VAR_16.num_connectors = VAR_20;
 VAR_21 = VAR_5->funcs->set_config(&VAR_16, VAR_15);

 FUNC_4(VAR_19);
 return VAR_21;
}
