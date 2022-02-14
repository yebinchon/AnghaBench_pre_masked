
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct noflush_work {int pw; TYPE_1__* tc; } ;
struct TYPE_2__ {int requeue_mode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 struct noflush_work* FUNC_2 (struct work_struct*) ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_0)
{
 struct noflush_work *VAR_1 = FUNC_2(VAR_0);
 VAR_1->tc->requeue_mode = 1;
 FUNC_1(VAR_1->tc);
 FUNC_0(&VAR_1->pw);
}
