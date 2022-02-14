
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ww_acquire_ctx {int dummy; } ;
struct vc4_fence {int base; scalar_t__ seqno; struct drm_device* dev; } ;
struct vc4_exec_info {scalar_t__ perfmon; int head; int * fence; scalar_t__ seqno; } ;
struct vc4_dev {int job_lock; int bin_job_list; int dma_fence_context; scalar_t__ emit_seqno; } ;
struct drm_syncobj {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int ,scalar_t__) ;
 int FUNC_1 (struct drm_syncobj*,int *) ;
 struct vc4_fence* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct vc4_dev* FUNC_6 (struct drm_device*) ;
 int VAR_2 ;
 struct vc4_exec_info* FUNC_7 (struct vc4_dev*) ;
 struct vc4_exec_info* FUNC_8 (struct vc4_dev*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*,struct vc4_exec_info*,struct ww_acquire_ctx*) ;
 int FUNC_12 (struct vc4_exec_info*,scalar_t__) ;

__attribute__((used)) static int
FUNC_13(struct drm_device *VAR_3, struct vc4_exec_info *VAR_4,
   struct ww_acquire_ctx *VAR_5,
   struct drm_syncobj *VAR_6)
{
 struct vc4_dev *VAR_7 = FUNC_6(VAR_3);
 struct vc4_exec_info *VAR_8;
 uint64_t VAR_9;
 unsigned long VAR_10;
 struct vc4_fence *VAR_11;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;
 VAR_11->dev = VAR_3;

 FUNC_4(&VAR_7->job_lock, VAR_10);

 VAR_9 = ++VAR_7->emit_seqno;
 VAR_4->seqno = VAR_9;

 FUNC_0(&VAR_11->base, &VAR_2, &VAR_7->job_lock,
         VAR_7->dma_fence_context, VAR_4->seqno);
 VAR_11->seqno = VAR_4->seqno;
 VAR_4->fence = &VAR_11->base;

 if (VAR_6)
  FUNC_1(VAR_6, VAR_4->fence);

 FUNC_12(VAR_4, VAR_9);

 FUNC_11(VAR_3, VAR_4, VAR_5);

 FUNC_3(&VAR_4->head, &VAR_7->bin_job_list);






 VAR_8 = FUNC_8(VAR_7);
 if (FUNC_7(VAR_7) == VAR_4 &&
     (!VAR_8 || VAR_8->perfmon == VAR_4->perfmon)) {
  FUNC_10(VAR_3);
  FUNC_9(VAR_3);
 }

 FUNC_5(&VAR_7->job_lock, VAR_10);

 return 0;
}
