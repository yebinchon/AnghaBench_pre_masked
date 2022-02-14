
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_18__ {int enabled; TYPE_1__* funcs; } ;
struct drm_plane {size_t crtc_id; int otg_inst; TYPE_7__ base; int max_cursor_height; int max_cursor_width; int type; } ;
struct amdgpu_display_manager {TYPE_6__* adev; int ddev; } ;
struct amdgpu_crtc {size_t crtc_id; int otg_inst; TYPE_7__ base; int max_cursor_height; int max_cursor_width; int type; } ;
struct TYPE_16__ {struct drm_plane** crtcs; } ;
struct TYPE_15__ {TYPE_3__* dc; } ;
struct TYPE_17__ {TYPE_5__ mode_info; TYPE_4__ dm; } ;
struct TYPE_13__ {int max_cursor_size; } ;
struct TYPE_14__ {TYPE_2__ caps; } ;
struct TYPE_12__ {int (* reset ) (TYPE_7__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct amdgpu_display_manager*,struct drm_plane*,int ,int *) ;
 int FUNC_1 (TYPE_7__*,int ,int,int ) ;
 int FUNC_2 (TYPE_7__*,int *) ;
 int FUNC_3 (int ,TYPE_7__*,struct drm_plane*,struct drm_plane*,int *,int *) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 int FUNC_5 (struct drm_plane*) ;
 struct drm_plane* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_7__*) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_display_manager *VAR_7,
          struct drm_plane *VAR_8,
          uint32_t VAR_9)
{
 struct amdgpu_crtc *VAR_10 = ((void*)0);
 struct drm_plane *VAR_11;

 int VAR_12 = -VAR_1;

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  goto fail;

 VAR_11->type = VAR_0;
 VAR_12 = FUNC_0(VAR_7, VAR_11, 0, ((void*)0));

 VAR_10 = FUNC_6(sizeof(struct amdgpu_crtc), VAR_2);
 if (!VAR_10)
  goto fail;

 VAR_12 = FUNC_3(
   VAR_7->ddev,
   &VAR_10->base,
   VAR_8,
   VAR_11,
   &VAR_5, ((void*)0));

 if (VAR_12)
  goto fail;

 FUNC_2(&VAR_10->base, &VAR_6);


 if (VAR_10->base.funcs->reset)
  VAR_10->base.funcs->reset(&VAR_10->base);

 VAR_10->max_cursor_width = VAR_7->adev->dm.dc->caps.max_cursor_size;
 VAR_10->max_cursor_height = VAR_7->adev->dm.dc->caps.max_cursor_size;

 VAR_10->crtc_id = VAR_9;
 VAR_10->base.enabled = 0;
 VAR_10->otg_inst = -1;

 VAR_7->adev->mode_info.crtcs[VAR_9] = VAR_10;
 FUNC_1(&VAR_10->base, VAR_4,
       1, VAR_4);
 FUNC_4(&VAR_10->base, VAR_3);

 return 0;

fail:
 FUNC_5(VAR_10);
 FUNC_5(VAR_11);
 return VAR_12;
}
