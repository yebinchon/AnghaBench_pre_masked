
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sg_lock; int sg_active; } ;
struct TYPE_4__ {int sp_groupcount; TYPE_2__* sp_groups; } ;
typedef int SVCXPRT ;
typedef TYPE_1__ SVCPOOL ;
typedef TYPE_2__ SVCGROUP ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(SVCPOOL *VAR_1)
{
 SVCGROUP *VAR_2;
 SVCXPRT *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->sp_groupcount; VAR_4++) {
  VAR_2 = &VAR_1->sp_groups[VAR_4];
  FUNC_2(&VAR_2->sg_lock);
  while ((VAR_3 = FUNC_0(&VAR_2->sg_active)) != ((void*)0)) {
   if (FUNC_4(VAR_3))
    FUNC_1(&VAR_2->sg_active, VAR_3, VAR_0);
   else
    break;
  }
  FUNC_3(&VAR_2->sg_lock);
 }
}
