
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_work_queue {int dummy; } ;
struct TYPE_2__ {int cb; } ;
struct completion_work {int done; TYPE_1__ w; } ;


 int FUNC_0 (struct drbd_work_queue*,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drbd_work_queue *VAR_1)
{
 struct completion_work VAR_2;

 VAR_2.w.cb = VAR_0;
 FUNC_1(&VAR_2.done);
 FUNC_0(VAR_1, &VAR_2.w);
 FUNC_2(&VAR_2.done);
}
