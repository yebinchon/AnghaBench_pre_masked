
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {scalar_t__ queue; int thread; TYPE_1__* pers; } ;
struct TYPE_2__ {int (* quiesce ) (struct mddev*,int) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mddev*,int) ;
 int FUNC_4 (struct mddev*,int) ;

__attribute__((used)) static void FUNC_5(struct mddev *VAR_0)
{
 FUNC_1(VAR_0);
 if (VAR_0->pers && VAR_0->pers->quiesce) {
  VAR_0->pers->quiesce(VAR_0, 1);
  VAR_0->pers->quiesce(VAR_0, 0);
 }
 FUNC_2(&VAR_0->thread);
 if (VAR_0->queue)
  FUNC_0(VAR_0->queue);
}
