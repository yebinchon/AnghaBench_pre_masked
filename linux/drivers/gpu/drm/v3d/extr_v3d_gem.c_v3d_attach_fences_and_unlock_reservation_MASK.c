
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ww_acquire_ctx {int dummy; } ;
struct v3d_job {int bo_count; TYPE_1__** bo; int done_fence; } ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {int resv; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__**,int,struct ww_acquire_ctx*) ;
 struct drm_syncobj* FUNC_2 (struct drm_file*,int ) ;
 int FUNC_3 (struct drm_syncobj*) ;
 int FUNC_4 (struct drm_syncobj*,struct dma_fence*) ;

__attribute__((used)) static void
FUNC_5(struct drm_file *VAR_0,
      struct v3d_job *VAR_1,
      struct ww_acquire_ctx *VAR_2,
      u32 VAR_3,
      struct dma_fence *VAR_4)
{
 struct drm_syncobj *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1->bo_count; VAR_6++) {

  FUNC_0(VAR_1->bo[VAR_6]->resv,
        VAR_1->done_fence);
 }

 FUNC_1(VAR_1->bo, VAR_1->bo_count, VAR_2);


 VAR_5 = FUNC_2(VAR_0, VAR_3);
 if (VAR_5) {
  FUNC_4(VAR_5, VAR_4);
  FUNC_3(VAR_5);
 }
}
