
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v3d_file_priv {int * sched_entity; struct v3d_dev* v3d; } ;
struct v3d_dev {TYPE_2__* queue; } ;
struct drm_sched_rq {int dummy; } ;
struct drm_file {struct v3d_file_priv* driver_priv; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {struct drm_sched_rq* sched_rq; } ;
struct TYPE_4__ {TYPE_1__ sched; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct drm_sched_rq**,int,int *) ;
 struct v3d_file_priv* FUNC_1 (int,int ) ;
 struct v3d_dev* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static int
FUNC_3(struct drm_device *VAR_4, struct drm_file *VAR_5)
{
 struct v3d_dev *VAR_6 = FUNC_2(VAR_4);
 struct v3d_file_priv *VAR_7;
 struct drm_sched_rq *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->v3d = VAR_6;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_8 = &VAR_6->queue[VAR_9].sched.sched_rq[VAR_0];
  FUNC_0(&VAR_7->sched_entity[VAR_9], &VAR_8, 1, ((void*)0));
 }

 VAR_5->driver_priv = VAR_7;

 return 0;
}
