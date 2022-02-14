
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sg_lock; int sg_state; } ;
struct TYPE_5__ {TYPE_2__* sp_groups; int sp_lock; int sp_state; } ;
typedef TYPE_1__ SVCPOOL ;
typedef TYPE_2__ SVCGROUP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(SVCPOOL *VAR_3)
{
 SVCGROUP *VAR_4;
 int VAR_5;

 FUNC_2(VAR_3);


 FUNC_0(&VAR_3->sp_lock);
 VAR_3->sp_state = VAR_1;
 FUNC_1(&VAR_3->sp_lock);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = &VAR_3->sp_groups[VAR_5];
  FUNC_0(&VAR_4->sg_lock);
  VAR_4->sg_state = VAR_0;
  FUNC_1(&VAR_4->sg_lock);
 }
}
