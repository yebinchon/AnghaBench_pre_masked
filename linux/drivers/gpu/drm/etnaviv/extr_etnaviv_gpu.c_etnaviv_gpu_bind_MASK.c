
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {int cooling; int wq; int dev; int fence_event; int sync_point_work; int fence_spinlock; int fence_idr; int fence_context; struct drm_device* drm; } ;
struct etnaviv_drm_private {int num_gpus; struct etnaviv_gpu** gpu; } ;
struct drm_device {struct etnaviv_drm_private* dev_private; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 struct etnaviv_gpu* FUNC_6 (struct device*) ;
 scalar_t__ FUNC_7 (struct device*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct etnaviv_gpu*) ;
 int FUNC_10 (struct etnaviv_gpu*) ;
 int FUNC_11 (struct etnaviv_gpu*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int VAR_3 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,char*,struct etnaviv_gpu*,int *) ;

__attribute__((used)) static int FUNC_20(struct device *VAR_4, struct device *VAR_5,
 void *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6;
 struct etnaviv_drm_private *VAR_8 = VAR_7->dev_private;
 struct etnaviv_gpu *VAR_9 = FUNC_6(VAR_4);
 int VAR_10;

 if (FUNC_1(VAR_0)) {
  VAR_9->cooling = FUNC_19(VAR_4->of_node,
    (char *)FUNC_7(VAR_4), VAR_9, &VAR_2);
  if (FUNC_2(VAR_9->cooling))
   return FUNC_3(VAR_9->cooling);
 }

 VAR_9->wq = FUNC_4(FUNC_7(VAR_4), 0);
 if (!VAR_9->wq) {
  VAR_10 = -VAR_1;
  goto out_thermal;
 }

 VAR_10 = FUNC_11(VAR_9);
 if (VAR_10)
  goto out_workqueue;




 VAR_10 = FUNC_9(VAR_9);

 if (VAR_10 < 0)
  goto out_sched;


 VAR_9->drm = VAR_7;
 VAR_9->fence_context = FUNC_8(1);
 FUNC_12(&VAR_9->fence_idr);
 FUNC_17(&VAR_9->fence_spinlock);

 FUNC_0(&VAR_9->sync_point_work, VAR_3);
 FUNC_13(&VAR_9->fence_event);

 VAR_8->gpu[VAR_8->num_gpus++] = VAR_9;

 FUNC_15(VAR_9->dev);
 FUNC_16(VAR_9->dev);

 return 0;

out_sched:
 FUNC_10(VAR_9);

out_workqueue:
 FUNC_5(VAR_9->wq);

out_thermal:
 if (FUNC_1(VAR_0))
  FUNC_18(VAR_9->cooling);

 return VAR_10;
}
