
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct msm_ringbuffer {int submits; scalar_t__ seqno; } ;
struct msm_gpu {TYPE_3__* funcs; TYPE_1__* pdev; struct drm_device* dev; } ;
struct msm_gem_submit {int nr_bos; int fence; TYPE_2__* bos; int aspace; int node; scalar_t__ seqno; struct msm_ringbuffer* ring; } ;
struct msm_gem_object {int base; struct msm_gpu* gpu; } ;
struct msm_file_private {int dummy; } ;
struct msm_drm_private {struct msm_file_private* lastctx; int rd; } ;
struct drm_device {int struct_mutex; struct msm_drm_private* dev_private; } ;
struct TYPE_6__ {int (* submit ) (struct msm_gpu*,struct msm_gem_submit*,struct msm_file_private*) ;} ;
struct TYPE_5__ {int flags; struct msm_gem_object* obj; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct msm_gpu*) ;
 scalar_t__ FUNC_3 (struct msm_gem_object*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,struct msm_gpu*,int,int ) ;
 int FUNC_7 (struct msm_gpu*) ;
 int FUNC_8 (int ,struct msm_gem_submit*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct msm_gpu*,struct msm_gem_submit*,struct msm_file_private*) ;
 int FUNC_12 (struct msm_gpu*) ;

void FUNC_13(struct msm_gpu *VAR_2, struct msm_gem_submit *VAR_3,
  struct msm_file_private *VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->dev;
 struct msm_drm_private *VAR_6 = VAR_5->dev_private;
 struct msm_ringbuffer *VAR_7 = VAR_3->ring;
 int VAR_8;

 FUNC_0(!FUNC_9(&VAR_5->struct_mutex));

 FUNC_10(&VAR_2->pdev->dev);

 FUNC_7(VAR_2);

 VAR_3->seqno = ++VAR_7->seqno;

 FUNC_4(&VAR_3->node, &VAR_7->submits);

 FUNC_8(VAR_6->rd, VAR_3, ((void*)0));

 FUNC_12(VAR_2);

 for (VAR_8 = 0; VAR_8 < VAR_3->nr_bos; VAR_8++) {
  struct msm_gem_object *VAR_9 = VAR_3->bos[VAR_8].obj;
  uint64_t VAR_10;




  FUNC_0(FUNC_3(VAR_9) && (VAR_9->gpu != VAR_2));


  FUNC_1(&VAR_9->base);
  FUNC_5(&VAR_9->base, VAR_3->aspace, &VAR_10);

  if (VAR_3->bos[VAR_8].flags & VAR_1)
   FUNC_6(&VAR_9->base, VAR_2, 1, VAR_3->fence);
  else if (VAR_3->bos[VAR_8].flags & VAR_0)
   FUNC_6(&VAR_9->base, VAR_2, 0, VAR_3->fence);
 }

 VAR_2->funcs->submit(VAR_2, VAR_3, VAR_4);
 VAR_6->lastctx = VAR_4;

 FUNC_2(VAR_2);
}
