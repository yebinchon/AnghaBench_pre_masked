
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* s_fence; } ;
struct v3d_job {TYPE_2__ base; int refcount; int done_fence; } ;
struct v3d_file_priv {int * sched_entity; } ;
typedef enum v3d_queue { ____Placeholder_v3d_queue } v3d_queue ;
struct TYPE_4__ {int finished; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *,struct v3d_file_priv*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct v3d_file_priv *VAR_0,
      struct v3d_job *VAR_1, enum v3d_queue VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_1->base, &VAR_0->sched_entity[VAR_2],
     VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_1->done_fence = FUNC_0(&VAR_1->base.s_fence->finished);


 FUNC_3(&VAR_1->refcount);

 FUNC_1(&VAR_1->base, &VAR_0->sched_entity[VAR_2]);

 return 0;
}
