
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct lima_vm {int dummy; } ;
struct lima_submit {int nr_bos; int flags; int task; TYPE_2__* bos; scalar_t__ pipe; TYPE_1__* ctx; scalar_t__ out_sync; struct lima_bo** lbos; } ;
struct lima_drm_priv {struct lima_vm* vm; } ;
struct drm_gem_object {int resv; } ;
struct lima_bo {struct drm_gem_object gem; } ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_4__ {int flags; int handle; } ;
struct TYPE_3__ {scalar_t__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (int ,struct dma_fence*) ;
 int FUNC_2 (int ,struct dma_fence*) ;
 struct drm_gem_object* FUNC_3 (struct drm_file*,int ) ;
 int FUNC_4 (struct drm_gem_object*) ;
 struct drm_syncobj* FUNC_5 (struct drm_file*,scalar_t__) ;
 int FUNC_6 (struct drm_syncobj*) ;
 int FUNC_7 (struct drm_syncobj*,struct dma_fence*) ;
 int FUNC_8 (struct drm_file*,struct lima_submit*) ;
 int FUNC_9 (struct lima_bo**,int,struct ww_acquire_ctx*) ;
 int FUNC_10 (int ,struct lima_bo*,int,int) ;
 int FUNC_11 (struct lima_bo**,int,struct ww_acquire_ctx*) ;
 struct dma_fence* FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,scalar_t__,struct lima_bo**,int,struct lima_vm*) ;
 int FUNC_15 (struct lima_vm*,struct lima_bo*,int) ;
 int FUNC_16 (struct lima_vm*,struct lima_bo*) ;
 struct lima_bo* FUNC_17 (struct drm_gem_object*) ;
 struct lima_drm_priv* FUNC_18 (struct drm_file*) ;

int FUNC_19(struct drm_file *VAR_3, struct lima_submit *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct ww_acquire_ctx VAR_7;
 struct lima_drm_priv *VAR_8 = FUNC_18(VAR_3);
 struct lima_vm *VAR_9 = VAR_8->vm;
 struct drm_syncobj *VAR_10 = ((void*)0);
 struct dma_fence *VAR_11;
 struct lima_bo **VAR_12 = VAR_4->lbos;

 if (VAR_4->out_sync) {
  VAR_10 = FUNC_5(VAR_3, VAR_4->out_sync);
  if (!VAR_10)
   return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->nr_bos; VAR_5++) {
  struct drm_gem_object *VAR_13;
  struct lima_bo *VAR_14;

  VAR_13 = FUNC_3(VAR_3, VAR_4->bos[VAR_5].handle);
  if (!VAR_13) {
   VAR_6 = -VAR_0;
   goto err_out0;
  }

  VAR_14 = FUNC_17(VAR_13);




  VAR_6 = FUNC_15(VAR_9, VAR_14, 0);
  if (VAR_6) {
   FUNC_4(VAR_13);
   goto err_out0;
  }

  VAR_12[VAR_5] = VAR_14;
 }

 VAR_6 = FUNC_9(VAR_12, VAR_4->nr_bos, &VAR_7);
 if (VAR_6)
  goto err_out0;

 VAR_6 = FUNC_14(
  VAR_4->task, VAR_4->ctx->context + VAR_4->pipe,
  VAR_12, VAR_4->nr_bos, VAR_9);
 if (VAR_6)
  goto err_out1;

 VAR_6 = FUNC_8(VAR_3, VAR_4);
 if (VAR_6)
  goto err_out2;

 for (VAR_5 = 0; VAR_5 < VAR_4->nr_bos; VAR_5++) {
  VAR_6 = FUNC_10(
   VAR_4->task, VAR_12[VAR_5],
   VAR_4->bos[VAR_5].flags & VAR_1,
   VAR_4->flags & VAR_2);
  if (VAR_6)
   goto err_out2;
 }

 VAR_11 = FUNC_12(
  VAR_4->ctx->context + VAR_4->pipe, VAR_4->task);

 for (VAR_5 = 0; VAR_5 < VAR_4->nr_bos; VAR_5++) {
  if (VAR_4->bos[VAR_5].flags & VAR_1)
   FUNC_1(VAR_12[VAR_5]->gem.resv, VAR_11);
  else
   FUNC_2(VAR_12[VAR_5]->gem.resv, VAR_11);
 }

 FUNC_11(VAR_12, VAR_4->nr_bos, &VAR_7);

 for (VAR_5 = 0; VAR_5 < VAR_4->nr_bos; VAR_5++)
  FUNC_4(&VAR_12[VAR_5]->gem);

 if (VAR_10) {
  FUNC_7(VAR_10, VAR_11);
  FUNC_6(VAR_10);
 }

 FUNC_0(VAR_11);

 return 0;

err_out2:
 FUNC_13(VAR_4->task);
err_out1:
 FUNC_11(VAR_12, VAR_4->nr_bos, &VAR_7);
err_out0:
 for (VAR_5 = 0; VAR_5 < VAR_4->nr_bos; VAR_5++) {
  if (!VAR_12[VAR_5])
   break;
  FUNC_16(VAR_9, VAR_12[VAR_5]);
  FUNC_4(&VAR_12[VAR_5]->gem);
 }
 if (VAR_10)
  FUNC_6(VAR_10);
 return VAR_6;
}
