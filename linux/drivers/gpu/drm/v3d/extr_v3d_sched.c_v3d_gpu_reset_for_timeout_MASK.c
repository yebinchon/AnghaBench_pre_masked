
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v3d_dev {int reset_lock; TYPE_1__* queue; } ;
struct drm_sched_job {int dummy; } ;
typedef enum v3d_queue { ____Placeholder_v3d_queue } v3d_queue ;
struct TYPE_2__ {int sched; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_sched_job*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct drm_sched_job*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct v3d_dev*) ;

__attribute__((used)) static void
FUNC_7(struct v3d_dev *VAR_1, struct drm_sched_job *VAR_2)
{
 enum v3d_queue VAR_3;

 FUNC_4(&VAR_1->reset_lock);


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_3(&VAR_1->queue[VAR_3].sched, VAR_2);

 if (VAR_2)
  FUNC_0(VAR_2);


 FUNC_6(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(&VAR_1->queue[VAR_3].sched);


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_2(&VAR_1->queue[VAR_3].sched, 1);
 }

 FUNC_5(&VAR_1->reset_lock);
}
