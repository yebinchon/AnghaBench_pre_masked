
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v3d_dev {TYPE_1__* queue; } ;
typedef enum v3d_queue { ____Placeholder_v3d_queue } v3d_queue ;
struct TYPE_4__ {scalar_t__ ready; } ;
struct TYPE_3__ {TYPE_2__ sched; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(struct v3d_dev *VAR_1)
{
 enum v3d_queue VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->queue[VAR_2].sched.ready)
   FUNC_0(&VAR_1->queue[VAR_2].sched);
 }
}
