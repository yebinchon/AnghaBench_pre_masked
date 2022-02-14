
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int time_timer; int time_work; int time_list; } ;
struct vc4_dev {int num_labels; TYPE_1__ bo_cache; int bo_lock; TYPE_2__* bo_labels; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 TYPE_2__* FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 struct vc4_dev* FUNC_7 (struct drm_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct drm_device*,char*,int ,int *) ;

int FUNC_9(struct drm_device *VAR_7)
{
 struct vc4_dev *VAR_8 = FUNC_7(VAR_7);
 int VAR_9;





 VAR_8->bo_labels = FUNC_4(VAR_2, sizeof(*VAR_8->bo_labels),
     VAR_1);
 if (!VAR_8->bo_labels)
  return -VAR_0;
 VAR_8->num_labels = VAR_2;

 FUNC_1(FUNC_0(VAR_3) != VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  VAR_8->bo_labels[VAR_9].name = VAR_3[VAR_9];

 FUNC_5(&VAR_8->bo_lock);

 FUNC_8(VAR_7, "bo_stats", VAR_6, ((void*)0));

 FUNC_2(&VAR_8->bo_cache.time_list);

 FUNC_3(&VAR_8->bo_cache.time_work, VAR_5);
 FUNC_6(&VAR_8->bo_cache.time_timer, VAR_4, 0);

 return 0;
}
