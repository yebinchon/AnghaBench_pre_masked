
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct amdgpu_crtc {scalar_t__ max_cursor_width; scalar_t__ max_cursor_height; scalar_t__ cursor_width; scalar_t__ cursor_height; scalar_t__ cursor_hot_x; scalar_t__ cursor_hot_y; scalar_t__ cursor_x; scalar_t__ cursor_y; struct drm_gem_object* cursor_bo; int cursor_addr; int crtc_id; } ;
struct amdgpu_bo {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_bo*) ;
 int FUNC_2 (struct amdgpu_bo*,int ) ;
 int FUNC_3 (struct amdgpu_bo*,int) ;
 int FUNC_4 (struct amdgpu_bo*) ;
 int FUNC_5 (struct amdgpu_bo*) ;
 int FUNC_6 (struct drm_crtc*,int,int) ;
 int FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (struct drm_crtc*,int) ;
 int FUNC_9 (struct drm_crtc*) ;
 struct drm_gem_object* FUNC_10 (struct drm_file*,scalar_t__) ;
 int FUNC_11 (struct drm_gem_object*) ;
 struct amdgpu_bo* FUNC_12 (struct drm_gem_object*) ;
 scalar_t__ FUNC_13 (int) ;
 struct amdgpu_crtc* FUNC_14 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_15(struct drm_crtc *VAR_3,
          struct drm_file *VAR_4,
          uint32_t VAR_5,
          uint32_t VAR_6,
          uint32_t VAR_7,
          int32_t VAR_8,
          int32_t VAR_9)
{
 struct amdgpu_crtc *VAR_10 = FUNC_14(VAR_3);
 struct drm_gem_object *VAR_11;
 struct amdgpu_bo *VAR_12;
 int VAR_13;

 if (!VAR_5) {

  FUNC_7(VAR_3);
  VAR_11 = ((void*)0);
  goto unpin;
 }

 if ((VAR_6 > VAR_10->max_cursor_width) ||
     (VAR_7 > VAR_10->max_cursor_height)) {
  FUNC_0("bad cursor width or height %d x %d\n", VAR_6, VAR_7);
  return -VAR_1;
 }

 VAR_11 = FUNC_10(VAR_4, VAR_5);
 if (!VAR_11) {
  FUNC_0("Cannot find cursor object %x for crtc %d\n", VAR_5, VAR_10->crtc_id);
  return -VAR_2;
 }

 VAR_12 = FUNC_12(VAR_11);
 VAR_13 = FUNC_3(VAR_12, 0);
 if (VAR_13 != 0) {
  FUNC_11(VAR_11);
  return VAR_13;
 }

 VAR_13 = FUNC_2(VAR_12, VAR_0);
 FUNC_5(VAR_12);
 if (VAR_13) {
  FUNC_0("Failed to pin new cursor BO (%d)\n", VAR_13);
  FUNC_11(VAR_11);
  return VAR_13;
 }
 VAR_10->cursor_addr = FUNC_1(VAR_12);

 FUNC_8(VAR_3, 1);

 if (VAR_6 != VAR_10->cursor_width ||
     VAR_7 != VAR_10->cursor_height ||
     VAR_8 != VAR_10->cursor_hot_x ||
     VAR_9 != VAR_10->cursor_hot_y) {
  int VAR_14, VAR_15;

  VAR_14 = VAR_10->cursor_x + VAR_10->cursor_hot_x - VAR_8;
  VAR_15 = VAR_10->cursor_y + VAR_10->cursor_hot_y - VAR_9;

  FUNC_6(VAR_3, VAR_14, VAR_15);

  VAR_10->cursor_width = VAR_6;
  VAR_10->cursor_height = VAR_7;
  VAR_10->cursor_hot_x = VAR_8;
  VAR_10->cursor_hot_y = VAR_9;
 }

 FUNC_9(VAR_3);
 FUNC_8(VAR_3, 0);

unpin:
 if (VAR_10->cursor_bo) {
  struct amdgpu_bo *VAR_16 = FUNC_12(VAR_10->cursor_bo);
  VAR_13 = FUNC_3(VAR_16, 1);
  if (FUNC_13(VAR_13 == 0)) {
   FUNC_4(VAR_16);
   FUNC_5(VAR_16);
  }
  FUNC_11(VAR_10->cursor_bo);
 }

 VAR_10->cursor_bo = VAR_11;
 return 0;
}
