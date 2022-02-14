
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct timer_list {int dummy; } ;
struct msm_ringbuffer {scalar_t__ hangcheck_fence; scalar_t__ seqno; scalar_t__ id; TYPE_2__* memptrs; } ;
struct msm_gpu {int retire_work; int recover_work; int name; TYPE_1__* funcs; struct drm_device* dev; } ;
struct msm_drm_private {int wq; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct TYPE_4__ {scalar_t__ fence; } ;
struct TYPE_3__ {struct msm_ringbuffer* (* active_ring ) (struct msm_gpu*) ;} ;


 int FUNC_0 (int ,char*,int ,scalar_t__) ;
 struct msm_gpu* FUNC_1 (int ,struct timer_list*,int ) ;
 struct msm_gpu* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct msm_gpu*) ;
 int FUNC_3 (int ,int *) ;
 struct msm_ringbuffer* FUNC_4 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct msm_gpu *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);
 struct drm_device *VAR_4 = VAR_3->dev;
 struct msm_drm_private *VAR_5 = VAR_4->dev_private;
 struct msm_ringbuffer *VAR_6 = VAR_3->funcs->active_ring(VAR_3);
 uint32_t VAR_7 = VAR_6->memptrs->fence;

 if (VAR_7 != VAR_6->hangcheck_fence) {

  VAR_6->hangcheck_fence = VAR_7;
 } else if (VAR_7 < VAR_6->seqno) {

  VAR_6->hangcheck_fence = VAR_7;
  FUNC_0(VAR_4->dev, "%s: hangcheck detected gpu lockup rb %d!\n",
    VAR_3->name, VAR_6->id);
  FUNC_0(VAR_4->dev, "%s:     completed fence: %u\n",
    VAR_3->name, VAR_7);
  FUNC_0(VAR_4->dev, "%s:     submitted fence: %u\n",
    VAR_3->name, VAR_6->seqno);

  FUNC_3(VAR_5->wq, &VAR_3->recover_work);
 }


 if (VAR_6->seqno > VAR_6->hangcheck_fence)
  FUNC_2(VAR_3);


 FUNC_3(VAR_5->wq, &VAR_3->retire_work);
}
