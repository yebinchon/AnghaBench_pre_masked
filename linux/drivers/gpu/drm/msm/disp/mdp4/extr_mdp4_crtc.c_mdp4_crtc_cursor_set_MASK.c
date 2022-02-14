
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef void* uint32_t ;
struct msm_kms {int aspace; } ;
struct TYPE_3__ {struct msm_kms base; } ;
struct mdp4_kms {TYPE_1__ base; } ;
struct TYPE_4__ {int stale; int lock; void* height; void* width; scalar_t__ next_iova; struct drm_gem_object* next_bo; } ;
struct mdp4_crtc {int unref_cursor_work; TYPE_2__ cursor; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dev; } ;
struct drm_crtc {struct drm_device* dev; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,char*,void*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_2 (struct drm_file*,void*) ;
 int FUNC_3 (struct drm_gem_object*) ;
 struct mdp4_kms* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_gem_object*,int ,scalar_t__*) ;
 int FUNC_6 (struct drm_crtc*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct mdp4_crtc* FUNC_9 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_10(struct drm_crtc *VAR_5,
  struct drm_file *VAR_6, uint32_t VAR_7,
  uint32_t VAR_8, uint32_t VAR_9)
{
 struct mdp4_crtc *VAR_10 = FUNC_9(VAR_5);
 struct mdp4_kms *VAR_11 = FUNC_4(VAR_5);
 struct msm_kms *VAR_12 = &VAR_11->base.base;
 struct drm_device *VAR_13 = VAR_5->dev;
 struct drm_gem_object *VAR_14, *VAR_15;
 unsigned long VAR_16;
 uint64_t VAR_17;
 int VAR_18;

 if ((VAR_8 > VAR_1) || (VAR_9 > VAR_0)) {
  FUNC_0(VAR_13->dev, "bad cursor size: %dx%d\n", VAR_8, VAR_9);
  return -VAR_2;
 }

 if (VAR_7) {
  VAR_14 = FUNC_2(VAR_6, VAR_7);
  if (!VAR_14)
   return -VAR_3;
 } else {
  VAR_14 = ((void*)0);
 }

 if (VAR_14) {
  VAR_18 = FUNC_5(VAR_14, VAR_12->aspace, &VAR_17);
  if (VAR_18)
   goto fail;
 } else {
  VAR_17 = 0;
 }

 FUNC_7(&VAR_10->cursor.lock, VAR_16);
 VAR_15 = VAR_10->cursor.next_bo;
 VAR_10->cursor.next_bo = VAR_14;
 VAR_10->cursor.next_iova = VAR_17;
 VAR_10->cursor.width = VAR_8;
 VAR_10->cursor.height = VAR_9;
 VAR_10->cursor.stale = 1;
 FUNC_8(&VAR_10->cursor.lock, VAR_16);

 if (VAR_15) {

  FUNC_1(&VAR_10->unref_cursor_work, VAR_15);
 }

 FUNC_6(VAR_5, VAR_4);

 return 0;

fail:
 FUNC_3(VAR_14);
 return VAR_18;
}
