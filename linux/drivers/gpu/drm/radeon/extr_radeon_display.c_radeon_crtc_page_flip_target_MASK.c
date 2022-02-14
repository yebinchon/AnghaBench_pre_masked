
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct radeon_flip_work {int async; int base; int target_vblank; int fence; TYPE_7__* old_rbo; int flip_work; int crtc_id; struct drm_pending_vblank_event* event; struct radeon_device* rdev; int unpin_work; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {scalar_t__ flip_status; int flip_queue; struct radeon_flip_work* flip_work; scalar_t__ legacy_display_base_addr; int crtc_id; } ;
struct TYPE_8__ {int resv; } ;
struct TYPE_9__ {TYPE_1__ base; } ;
struct radeon_bo {TYPE_2__ tbo; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int* pitches; TYPE_3__* format; struct drm_gem_object** obj; } ;
struct drm_device {int event_lock; TYPE_4__* driver; struct radeon_device* dev_private; } ;
struct drm_crtc {int y; int x; struct drm_device* dev; TYPE_5__* primary; } ;
struct TYPE_13__ {int base; } ;
struct TYPE_14__ {TYPE_6__ tbo; } ;
struct TYPE_12__ {struct drm_framebuffer* fb; } ;
struct TYPE_11__ {int (* get_vblank_counter ) (struct drm_device*,int ) ;} ;
struct TYPE_10__ {int* cpp; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct drm_crtc*) ;
 int FUNC_9 (struct drm_gem_object*) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (struct drm_gem_object*) ;
 int FUNC_12 (struct radeon_flip_work*) ;
 struct radeon_flip_work* FUNC_13 (int,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct radeon_bo*,int*,int *) ;
 int FUNC_16 (struct radeon_bo*,int ,int,int*) ;
 int FUNC_17 (struct radeon_bo*,int) ;
 scalar_t__ FUNC_18 (struct radeon_bo*) ;
 int FUNC_19 (struct radeon_bo*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (struct drm_device*,int ) ;
 struct radeon_crtc* FUNC_23 (struct drm_crtc*) ;
 scalar_t__ FUNC_24 (int) ;

__attribute__((used)) static int FUNC_25(struct drm_crtc *VAR_11,
     struct drm_framebuffer *VAR_12,
     struct drm_pending_vblank_event *VAR_13,
     uint32_t VAR_14,
     uint32_t VAR_15,
     struct drm_modeset_acquire_ctx *VAR_16)
{
 struct drm_device *VAR_17 = VAR_11->dev;
 struct radeon_device *VAR_18 = VAR_17->dev_private;
 struct radeon_crtc *VAR_19 = FUNC_23(VAR_11);
 struct drm_gem_object *VAR_20;
 struct radeon_flip_work *VAR_21;
 struct radeon_bo *VAR_22;
 uint32_t VAR_23, VAR_24;
 uint64_t VAR_25;
 unsigned long VAR_26;
 int VAR_27;

 VAR_21 = FUNC_13(sizeof *VAR_21, VAR_4);
 if (VAR_21 == ((void*)0))
  return -VAR_3;

 FUNC_4(&VAR_21->flip_work, VAR_9);
 FUNC_4(&VAR_21->unpin_work, VAR_10);

 VAR_21->rdev = VAR_18;
 VAR_21->crtc_id = VAR_19->crtc_id;
 VAR_21->event = VAR_13;
 VAR_21->async = (VAR_14 & VAR_0) != 0;


 VAR_20 = VAR_11->primary->fb->obj[0];


 FUNC_9(VAR_20);
 VAR_21->old_rbo = FUNC_11(VAR_20);

 VAR_20 = VAR_12->obj[0];
 VAR_22 = FUNC_11(VAR_20);


 FUNC_2("flip-ioctl() cur_rbo = %p, new_rbo = %p\n",
    VAR_21->old_rbo, VAR_22);

 VAR_27 = FUNC_17(VAR_22, 0);
 if (FUNC_24(VAR_27 != 0)) {
  FUNC_3("failed to reserve new rbo buffer before flip\n");
  goto cleanup;
 }

 VAR_27 = FUNC_16(VAR_22, VAR_7,
         FUNC_0(VAR_18) ? 0 : 1 << 27, &VAR_25);
 if (FUNC_24(VAR_27 != 0)) {
  FUNC_19(VAR_22);
  VAR_27 = -VAR_2;
  FUNC_3("failed to pin new rbo buffer before flip\n");
  goto cleanup;
 }
 VAR_21->fence = FUNC_5(FUNC_7(VAR_22->tbo.base.resv));
 FUNC_15(VAR_22, &VAR_23, ((void*)0));
 FUNC_19(VAR_22);

 if (!FUNC_0(VAR_18)) {

  VAR_25 -= VAR_19->legacy_display_base_addr;
  VAR_24 = VAR_12->pitches[0] / VAR_12->format->cpp[0];

  if (VAR_23 & VAR_8) {
   if (FUNC_1(VAR_18)) {
    VAR_25 &= ~0x7ff;
   } else {
    int VAR_28 = VAR_12->format->cpp[0] * 8 >> 4;
    int VAR_29 = (((VAR_11->y >> 3) * VAR_24 + VAR_11->x) >> (8 - VAR_28)) << 11;
    VAR_25 += VAR_29 + ((VAR_11->x << VAR_28) % 256) + ((VAR_11->y % 8) << 8);
   }
  } else {
   int VAR_30 = VAR_11->y * VAR_24 + VAR_11->x;
   switch (VAR_12->format->cpp[0] * 8) {
   case 8:
   default:
    VAR_30 *= 1;
    break;
   case 15:
   case 16:
    VAR_30 *= 2;
    break;
   case 24:
    VAR_30 *= 3;
    break;
   case 32:
    VAR_30 *= 4;
    break;
   }
   VAR_25 += VAR_30;
  }
  VAR_25 &= ~7;
 }
 VAR_21->base = VAR_25;
 VAR_21->target_vblank = VAR_15 - (uint32_t)FUNC_8(VAR_11) +
  VAR_17->driver->get_vblank_counter(VAR_17, VAR_21->crtc_id);


 FUNC_20(&VAR_11->dev->event_lock, VAR_26);

 if (VAR_19->flip_status != VAR_5) {
  FUNC_2("flip queue: crtc already busy\n");
  FUNC_21(&VAR_11->dev->event_lock, VAR_26);
  VAR_27 = -VAR_1;
  goto pflip_cleanup;
 }
 VAR_19->flip_status = VAR_6;
 VAR_19->flip_work = VAR_21;


 VAR_11->primary->fb = VAR_12;

 FUNC_21(&VAR_11->dev->event_lock, VAR_26);

 FUNC_14(VAR_19->flip_queue, &VAR_21->flip_work);
 return 0;

pflip_cleanup:
 if (FUNC_24(FUNC_17(VAR_22, 0) != 0)) {
  FUNC_3("failed to reserve new rbo in error path\n");
  goto cleanup;
 }
 if (FUNC_24(FUNC_18(VAR_22) != 0)) {
  FUNC_3("failed to unpin new rbo in error path\n");
 }
 FUNC_19(VAR_22);

cleanup:
 FUNC_10(&VAR_21->old_rbo->tbo.base);
 FUNC_6(VAR_21->fence);
 FUNC_12(VAR_21);
 return VAR_27;
}
