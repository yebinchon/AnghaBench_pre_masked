
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; int list; } ;
struct TYPE_3__ {int timer; int reset_work; } ;
struct vc4_dev {TYPE_2__ purgeable; int power_lock; int job_done_work; TYPE_1__ hangcheck; int job_lock; int seqno_cb_list; int job_done_list; int render_job_list; int bin_job_list; int dma_fence_context; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 struct vc4_dev* FUNC_6 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_7(struct drm_device *VAR_3)
{
 struct vc4_dev *VAR_4 = FUNC_6(VAR_3);

 VAR_4->dma_fence_context = FUNC_2(1);

 FUNC_0(&VAR_4->bin_job_list);
 FUNC_0(&VAR_4->render_job_list);
 FUNC_0(&VAR_4->job_done_list);
 FUNC_0(&VAR_4->seqno_cb_list);
 FUNC_4(&VAR_4->job_lock);

 FUNC_1(&VAR_4->hangcheck.reset_work, VAR_2);
 FUNC_5(&VAR_4->hangcheck.timer, VAR_0, 0);

 FUNC_1(&VAR_4->job_done_work, VAR_1);

 FUNC_3(&VAR_4->power_lock);

 FUNC_0(&VAR_4->purgeable.list);
 FUNC_3(&VAR_4->purgeable.lock);
}
