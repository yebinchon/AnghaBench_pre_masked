
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {scalar_t__ max_cursor_width; scalar_t__ max_cursor_height; scalar_t__ cursor_width; scalar_t__ cursor_height; scalar_t__ cursor_hot_x; scalar_t__ cursor_hot_y; scalar_t__ cursor_x; scalar_t__ cursor_y; struct drm_gem_object* cursor_bo; int cursor_addr; int crtc_id; } ;
struct radeon_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_gem_object* FUNC_2 (struct drm_file*,scalar_t__) ;
 int FUNC_3 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_4 (struct drm_gem_object*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct radeon_bo*,int ,int,int *) ;
 int FUNC_7 (struct radeon_bo*,int) ;
 int FUNC_8 (struct radeon_bo*) ;
 int FUNC_9 (struct radeon_bo*) ;
 int FUNC_10 (struct drm_crtc*,int,int) ;
 int FUNC_11 (struct drm_crtc*) ;
 int FUNC_12 (struct drm_crtc*,int) ;
 int FUNC_13 (struct drm_crtc*) ;
 struct radeon_crtc* FUNC_14 (struct drm_crtc*) ;

int FUNC_15(struct drm_crtc *VAR_3,
       struct drm_file *VAR_4,
       uint32_t VAR_5,
       uint32_t VAR_6,
       uint32_t VAR_7,
       int32_t VAR_8,
       int32_t VAR_9)
{
 struct radeon_crtc *VAR_10 = FUNC_14(VAR_3);
 struct radeon_device *VAR_11 = VAR_3->dev->dev_private;
 struct drm_gem_object *VAR_12;
 struct radeon_bo *VAR_13;
 int VAR_14;

 if (!VAR_5) {

  FUNC_11(VAR_3);
  VAR_12 = ((void*)0);
  goto unpin;
 }

 if ((VAR_6 > VAR_10->max_cursor_width) ||
     (VAR_7 > VAR_10->max_cursor_height)) {
  FUNC_1("bad cursor width or height %d x %d\n", VAR_6, VAR_7);
  return -VAR_0;
 }

 VAR_12 = FUNC_2(VAR_4, VAR_5);
 if (!VAR_12) {
  FUNC_1("Cannot find cursor object %x for crtc %d\n", VAR_5, VAR_10->crtc_id);
  return -VAR_1;
 }

 VAR_13 = FUNC_4(VAR_12);
 VAR_14 = FUNC_7(VAR_13, 0);
 if (VAR_14 != 0) {
  FUNC_3(VAR_12);
  return VAR_14;
 }

 VAR_14 = FUNC_6(VAR_13, VAR_2,
           FUNC_0(VAR_11) ? 0 : 1 << 27,
           &VAR_10->cursor_addr);
 FUNC_9(VAR_13);
 if (VAR_14) {
  FUNC_1("Failed to pin new cursor BO (%d)\n", VAR_14);
  FUNC_3(VAR_12);
  return VAR_14;
 }

 FUNC_12(VAR_3, 1);

 if (VAR_6 != VAR_10->cursor_width ||
     VAR_7 != VAR_10->cursor_height ||
     VAR_8 != VAR_10->cursor_hot_x ||
     VAR_9 != VAR_10->cursor_hot_y) {
  int VAR_15, VAR_16;

  VAR_15 = VAR_10->cursor_x + VAR_10->cursor_hot_x - VAR_8;
  VAR_16 = VAR_10->cursor_y + VAR_10->cursor_hot_y - VAR_9;

  VAR_10->cursor_width = VAR_6;
  VAR_10->cursor_height = VAR_7;
  VAR_10->cursor_hot_x = VAR_8;
  VAR_10->cursor_hot_y = VAR_9;

  FUNC_10(VAR_3, VAR_15, VAR_16);
 }

 FUNC_13(VAR_3);

 FUNC_12(VAR_3, 0);

unpin:
 if (VAR_10->cursor_bo) {
  struct radeon_bo *VAR_17 = FUNC_4(VAR_10->cursor_bo);
  VAR_14 = FUNC_7(VAR_17, 0);
  if (FUNC_5(VAR_14 == 0)) {
   FUNC_8(VAR_17);
   FUNC_9(VAR_17);
  }
  FUNC_3(VAR_10->cursor_bo);
 }

 VAR_10->cursor_bo = VAR_12;
 return 0;
}
