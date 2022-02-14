
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v3d_dev {int pt_paddr; scalar_t__ pt; int dev; int mm; int cache_clean_lock; int sched_lock; int reset_lock; int bo_lock; int job_lock; int mm_lock; TYPE_1__* queue; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int fence_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int,int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,void*,int ) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct v3d_dev* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct v3d_dev*) ;
 int FUNC_10 (struct v3d_dev*) ;
 int FUNC_11 (struct v3d_dev*) ;

int
FUNC_12(struct drm_device *VAR_5)
{
 struct v3d_dev *VAR_6 = FUNC_8(VAR_5);
 u32 VAR_7 = 4096 * 1024;
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  VAR_6->queue[VAR_9].fence_context = FUNC_2(1);

 FUNC_7(&VAR_6->mm_lock);
 FUNC_7(&VAR_6->job_lock);
 FUNC_6(&VAR_6->bo_lock);
 FUNC_6(&VAR_6->reset_lock);
 FUNC_6(&VAR_6->sched_lock);
 FUNC_6(&VAR_6->cache_clean_lock);





 FUNC_4(&VAR_6->mm, 1, VAR_7 / sizeof(u32) - 1);

 VAR_6->pt = FUNC_1(VAR_6->dev, VAR_7,
          &VAR_6->pt_paddr,
          VAR_1 | VAR_3 | VAR_4);
 if (!VAR_6->pt) {
  FUNC_5(&VAR_6->mm);
  FUNC_0(VAR_6->dev,
   "Failed to allocate page tables. "
   "Please ensure you have CMA enabled.\n");
  return -VAR_0;
 }

 FUNC_9(VAR_6);
 FUNC_10(VAR_6);

 VAR_8 = FUNC_11(VAR_6);
 if (VAR_8) {
  FUNC_5(&VAR_6->mm);
  FUNC_3(VAR_6->dev, 4096 * 1024, (void *)VAR_6->pt,
      VAR_6->pt_paddr);
 }

 return 0;
}
