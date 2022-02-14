
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_plane_state {struct drm_crtc* crtc; } ;
struct TYPE_6__ {int id; } ;
struct drm_plane {scalar_t__ type; TYPE_1__ base; int state; } ;
struct drm_crtc_state {int dummy; } ;
struct TYPE_7__ {int id; } ;
struct drm_crtc {TYPE_3__* dev; TYPE_2__ base; } ;
struct drm_atomic_state {int dummy; } ;
struct dm_plane_state {struct dc_plane_state* dc_state; } ;
struct dm_crtc_state {int stream; } ;
struct dm_atomic_state {int context; } ;
struct TYPE_9__ {int full_update; } ;
struct TYPE_10__ {TYPE_4__ bits; } ;
struct dc_plane_state {TYPE_5__ update_flags; } ;
struct dc {int dummy; } ;
struct TYPE_8__ {int dev_private; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dc_plane_state*) ;
 int FUNC_3 (struct dc*,int ,struct dc_plane_state*,int ) ;
 struct dc_plane_state* FUNC_4 (struct dc*) ;
 int FUNC_5 (struct dc_plane_state*) ;
 int FUNC_6 (struct dc*,int ,struct dc_plane_state*,int ) ;
 int FUNC_7 (struct drm_atomic_state*,struct dm_atomic_state**) ;
 struct drm_crtc_state* FUNC_8 (struct drm_atomic_state*,struct drm_crtc*) ;
 struct drm_crtc_state* FUNC_9 (struct drm_atomic_state*,struct drm_crtc*) ;
 scalar_t__ FUNC_10 (int ,struct drm_plane_state*) ;
 int FUNC_11 (int ,struct dc_plane_state*,struct drm_plane_state*,struct drm_crtc_state*) ;
 int FUNC_12 (struct drm_atomic_state*,struct drm_plane*,struct drm_plane_state*,struct drm_plane_state*) ;
 struct dm_crtc_state* FUNC_13 (struct drm_crtc_state*) ;
 struct dm_plane_state* FUNC_14 (struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_15(struct dc *VAR_3,
     struct drm_atomic_state *VAR_4,
     struct drm_plane *VAR_5,
     struct drm_plane_state *VAR_6,
     struct drm_plane_state *VAR_7,
     bool VAR_8,
     bool *VAR_9)
{

 struct dm_atomic_state *VAR_10 = ((void*)0);
 struct drm_crtc *VAR_11, *VAR_12;
 struct drm_crtc_state *VAR_13, *VAR_14;
 struct dm_crtc_state *VAR_15, *VAR_16;
 struct dm_plane_state *VAR_17, *VAR_18;
 bool VAR_19;
 int VAR_20 = 0;


 VAR_11 = VAR_7->crtc;
 VAR_12 = VAR_6->crtc;
 VAR_17 = FUNC_14(VAR_7);
 VAR_18 = FUNC_14(VAR_6);


 if (VAR_5->type == VAR_0)
  return 0;

 VAR_19 = FUNC_12(VAR_4, VAR_5, VAR_6,
      VAR_7);


 if (!VAR_8) {
  if (!VAR_19)
   return 0;

  if (!VAR_12)
   return 0;

  VAR_13 = FUNC_9(
    VAR_4, VAR_12);
  VAR_16 = FUNC_13(VAR_13);

  if (!VAR_16->stream)
   return 0;

  FUNC_0("Disabling DRM plane: %d on DRM crtc %d\n",
    VAR_5->base.id, VAR_12->base.id);

  VAR_20 = FUNC_7(VAR_4, &VAR_10);
  if (VAR_20)
   return VAR_20;

  if (!FUNC_6(
    VAR_3,
    VAR_16->stream,
    VAR_18->dc_state,
    VAR_10->context)) {

   VAR_20 = VAR_1;
   return VAR_20;
  }


  FUNC_5(VAR_18->dc_state);
  VAR_17->dc_state = ((void*)0);

  *VAR_9 = 1;

 } else {
  struct dc_plane_state *VAR_21;

  if (FUNC_10(VAR_5->state, VAR_7))
   return 0;

  if (!VAR_11)
   return 0;

  VAR_14 = FUNC_8(VAR_4, VAR_11);
  VAR_15 = FUNC_13(VAR_14);

  if (!VAR_15->stream)
   return 0;

  if (!VAR_19)
   return 0;

  FUNC_2(VAR_17->dc_state);

  VAR_21 = FUNC_4(VAR_3);
  if (!VAR_21)
   return -VAR_2;

  FUNC_1("Enabling DRM plane: %d on DRM crtc %d\n",
    VAR_5->base.id, VAR_11->base.id);

  VAR_20 = FUNC_11(
   VAR_11->dev->dev_private,
   VAR_21,
   VAR_7,
   VAR_14);
  if (VAR_20) {
   FUNC_5(VAR_21);
   return VAR_20;
  }

  VAR_20 = FUNC_7(VAR_4, &VAR_10);
  if (VAR_20) {
   FUNC_5(VAR_21);
   return VAR_20;
  }
  if (!FUNC_3(
    VAR_3,
    VAR_15->stream,
    VAR_21,
    VAR_10->context)) {

   FUNC_5(VAR_21);
   return -VAR_1;
  }

  VAR_17->dc_state = VAR_21;




  VAR_17->dc_state->update_flags.bits.full_update = 1;

  *VAR_9 = 1;
 }


 return VAR_20;
}
