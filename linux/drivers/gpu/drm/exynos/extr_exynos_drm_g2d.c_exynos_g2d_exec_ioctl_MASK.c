
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct g2d_runqueue_node {int complete; scalar_t__ async; int list; struct drm_file* filp; int pid; struct list_head event_list; struct list_head run_cmdlist; } ;
struct g2d_data {int runqueue_work; int g2d_workq; int runqueue_mutex; int runqueue; int runqueue_slab; int dev; } ;
struct exynos_drm_private {int g2d_dev; } ;
struct drm_file {struct drm_exynos_file_private* driver_priv; } ;
struct drm_exynos_g2d_exec {scalar_t__ async; } ;
struct drm_exynos_file_private {int event_list; int inuse_cmdlist; } ;
struct drm_device {struct exynos_drm_private* dev_private; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct list_head*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,char*) ;
 struct g2d_data* FUNC_2 (int ) ;
 int FUNC_3 (struct g2d_data*,struct g2d_runqueue_node*) ;
 int FUNC_4 (int *) ;
 struct g2d_runqueue_node* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct g2d_runqueue_node*) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (struct list_head*) ;
 int FUNC_9 (int *,struct list_head*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct drm_device *VAR_4, void *VAR_5,
     struct drm_file *VAR_6)
{
 struct drm_exynos_file_private *VAR_7 = VAR_6->driver_priv;
 struct exynos_drm_private *VAR_8 = VAR_4->dev_private;
 struct g2d_data *VAR_9 = FUNC_2(VAR_8->g2d_dev);
 struct drm_exynos_g2d_exec *VAR_10 = VAR_5;
 struct g2d_runqueue_node *VAR_11;
 struct list_head *VAR_12;
 struct list_head *VAR_13;

 VAR_11 = FUNC_5(VAR_9->runqueue_slab, VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = &VAR_11->run_cmdlist;
 VAR_13 = &VAR_11->event_list;
 FUNC_0(VAR_12);
 FUNC_0(VAR_13);
 FUNC_4(&VAR_11->complete);
 VAR_11->async = VAR_10->async;

 FUNC_9(&VAR_7->inuse_cmdlist, VAR_12);
 FUNC_9(&VAR_7->event_list, VAR_13);

 if (FUNC_8(VAR_12)) {
  FUNC_1(VAR_9->dev, "there is no inuse cmdlist\n");
  FUNC_6(VAR_9->runqueue_slab, VAR_11);
  return -VAR_1;
 }

 FUNC_10(&VAR_9->runqueue_mutex);
 VAR_11->pid = VAR_3->pid;
 VAR_11->filp = VAR_6;
 FUNC_7(&VAR_11->list, &VAR_9->runqueue);
 FUNC_11(&VAR_9->runqueue_mutex);


 FUNC_12(VAR_9->g2d_workq, &VAR_9->runqueue_work);

 if (VAR_11->async)
  goto out;

 FUNC_13(&VAR_11->complete);
 FUNC_3(VAR_9, VAR_11);

out:
 return 0;
}
