
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_file {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_4__ {int size; } ;
struct armada_gem_object {int * update; struct armada_crtc* update_data; TYPE_2__ obj; int addr; } ;
struct armada_crtc {int cursor_w; int cursor_h; struct armada_gem_object* cursor_obj; TYPE_1__* variant; } ;
struct TYPE_3__ {int has_spu_adv_reg; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct armada_crtc*,int) ;
 struct armada_gem_object* FUNC_2 (struct drm_file*,int) ;
 int * VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 struct armada_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_5(struct drm_crtc *VAR_5,
 struct drm_file *VAR_6, uint32_t VAR_7, uint32_t VAR_8, uint32_t VAR_9)
{
 struct armada_crtc *VAR_10 = FUNC_4(VAR_5);
 struct armada_gem_object *VAR_11 = ((void*)0);
 int VAR_12;


 if (!VAR_10->variant->has_spu_adv_reg)
  return -VAR_3;

 if (VAR_7 && VAR_8 > 0 && VAR_9 > 0) {

  if (VAR_8 > 64 || VAR_9 > 64 || (VAR_8 > 32 && VAR_9 > 32))
   return -VAR_2;

  VAR_11 = FUNC_2(VAR_6, VAR_7);
  if (!VAR_11)
   return -VAR_1;


  if (!VAR_11->addr) {
   FUNC_3(&VAR_11->obj);
   return -VAR_0;
  }

  if (VAR_11->obj.size < VAR_8 * VAR_9 * 4) {
   FUNC_0("buffer is too small\n");
   FUNC_3(&VAR_11->obj);
   return -VAR_2;
  }
 }

 if (VAR_10->cursor_obj) {
  VAR_10->cursor_obj->update = ((void*)0);
  VAR_10->cursor_obj->update_data = ((void*)0);
  FUNC_3(&VAR_10->cursor_obj->obj);
 }
 VAR_10->cursor_obj = VAR_11;
 VAR_10->cursor_w = VAR_8;
 VAR_10->cursor_h = VAR_9;
 VAR_12 = FUNC_1(VAR_10, 1);
 if (VAR_11) {
  VAR_11->update_data = VAR_10;
  VAR_11->update = VAR_4;
 }

 return VAR_12;
}
