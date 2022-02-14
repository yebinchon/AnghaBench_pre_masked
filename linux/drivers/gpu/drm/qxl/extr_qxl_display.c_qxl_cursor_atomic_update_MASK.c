
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct qxl_release {int dummy; } ;
struct qxl_device {int dummy; } ;
struct TYPE_10__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {int visible; int shape; } ;
struct TYPE_11__ {TYPE_4__ position; TYPE_3__ set; } ;
struct qxl_cursor_cmd {int release_info; TYPE_5__ u; int type; } ;
struct TYPE_8__ {int data_size; int data; scalar_t__ prev_chunk; scalar_t__ next_chunk; } ;
struct TYPE_7__ {int width; int height; scalar_t__ hot_spot_y; scalar_t__ hot_spot_x; int type; scalar_t__ unique; } ;
struct qxl_cursor {int data_size; TYPE_2__ chunk; TYPE_1__ header; } ;
struct qxl_crtc {struct qxl_bo* cursor_bo; } ;
struct qxl_bo {int dummy; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_plane {TYPE_6__* state; struct drm_device* dev; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {scalar_t__ hot_y; scalar_t__ hot_x; struct drm_gem_object** obj; } ;
struct drm_device {struct qxl_device* dev_private; } ;
struct TYPE_12__ {scalar_t__ crtc_y; scalar_t__ crtc_x; int crtc; struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qxl_bo* FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (struct qxl_device*,struct qxl_release*,int,struct qxl_bo**) ;
 int FUNC_3 (struct qxl_device*,int,int ,struct qxl_release**,int *) ;
 int FUNC_4 (struct qxl_bo*,void**) ;
 int FUNC_5 (struct qxl_bo*) ;
 int FUNC_6 (struct qxl_device*,struct qxl_bo*,int ) ;
 int FUNC_7 (struct qxl_bo*) ;
 int FUNC_8 (struct qxl_bo*) ;
 int FUNC_9 (struct qxl_bo**) ;
 int FUNC_10 (struct qxl_device*,struct qxl_release*,int ,int) ;
 int FUNC_11 (struct qxl_release*) ;
 int FUNC_12 (struct qxl_release*) ;
 int FUNC_13 (struct qxl_device*,struct qxl_release*) ;
 scalar_t__ FUNC_14 (struct qxl_device*,struct qxl_release*) ;
 int FUNC_15 (struct qxl_release*,int) ;
 int FUNC_16 (struct qxl_device*,struct qxl_release*,int *) ;
 struct qxl_crtc* FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct drm_plane *VAR_5,
         struct drm_plane_state *VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct qxl_device *VAR_8 = VAR_7->dev_private;
 struct drm_framebuffer *VAR_9 = VAR_5->state->fb;
 struct qxl_crtc *VAR_10 = FUNC_17(VAR_5->state->crtc);
 struct qxl_release *VAR_11;
 struct qxl_cursor_cmd *VAR_12;
 struct qxl_cursor *VAR_13;
 struct drm_gem_object *VAR_14;
 struct qxl_bo *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 int VAR_18;
 void *VAR_19;
 int VAR_20 = 64*64*4;

 VAR_18 = FUNC_3(VAR_8, sizeof(*VAR_12),
      VAR_3,
      &VAR_11, ((void*)0));
 if (VAR_18)
  return;

 if (VAR_9 != VAR_6->fb) {
  VAR_14 = VAR_9->obj[0];
  VAR_16 = FUNC_0(VAR_14);


  VAR_18 = FUNC_4(VAR_16, &VAR_19);
  if (VAR_18)
   goto out_free_release;

  VAR_18 = FUNC_2(VAR_8, VAR_11,
         sizeof(struct qxl_cursor) + VAR_20,
         &VAR_15);
  if (VAR_18)
   goto out_kunmap;

  VAR_18 = FUNC_7(VAR_15);
  if (VAR_18)
   goto out_free_bo;

  VAR_18 = FUNC_15(VAR_11, 1);
  if (VAR_18)
   goto out_unpin;

  VAR_18 = FUNC_4(VAR_15, (void **)&VAR_13);
  if (VAR_18)
   goto out_backoff;

  VAR_13->header.unique = 0;
  VAR_13->header.type = VAR_4;
  VAR_13->header.width = 64;
  VAR_13->header.height = 64;
  VAR_13->header.hot_spot_x = VAR_9->hot_x;
  VAR_13->header.hot_spot_y = VAR_9->hot_y;
  VAR_13->data_size = VAR_20;
  VAR_13->chunk.next_chunk = 0;
  VAR_13->chunk.prev_chunk = 0;
  VAR_13->chunk.data_size = VAR_20;
  FUNC_1(VAR_13->chunk.data, VAR_19, VAR_20);
  FUNC_5(VAR_15);
  FUNC_5(VAR_16);

  VAR_12 = (struct qxl_cursor_cmd *) FUNC_14(VAR_8, VAR_11);
  VAR_12->u.set.visible = 1;
  VAR_12->u.set.shape = FUNC_6(VAR_8,
          VAR_15, 0);
  VAR_12->type = VAR_2;

  VAR_17 = VAR_10->cursor_bo;
  VAR_10->cursor_bo = VAR_15;
  VAR_15 = ((void*)0);
 } else {

  VAR_18 = FUNC_15(VAR_11, 1);
  if (VAR_18)
   goto out_free_release;

  VAR_12 = (struct qxl_cursor_cmd *) FUNC_14(VAR_8, VAR_11);
  VAR_12->type = VAR_1;
 }

 VAR_12->u.position.x = VAR_5->state->crtc_x + VAR_9->hot_x;
 VAR_12->u.position.y = VAR_5->state->crtc_y + VAR_9->hot_y;

 FUNC_16(VAR_8, VAR_11, &VAR_12->release_info);
 FUNC_10(VAR_8, VAR_11, VAR_0, 0);
 FUNC_12(VAR_11);

 if (VAR_17 != ((void*)0))
  FUNC_8(VAR_17);
 FUNC_9(&VAR_17);
 FUNC_9(&VAR_15);

 return;

out_backoff:
 FUNC_11(VAR_11);
out_unpin:
 FUNC_8(VAR_15);
out_free_bo:
 FUNC_9(&VAR_15);
out_kunmap:
 FUNC_5(VAR_16);
out_free_release:
 FUNC_13(VAR_8, VAR_11);
 return;

}
