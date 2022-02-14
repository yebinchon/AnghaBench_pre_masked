
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sg_lock; } ;
struct TYPE_6__ {int sp_sysctl; scalar_t__ sp_rcache; int sp_lock; TYPE_2__* sp_groups; } ;
typedef TYPE_1__ SVCPOOL ;
typedef TYPE_2__ SVCGROUP ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(SVCPOOL *VAR_2)
{
 SVCGROUP *VAR_3;
 int VAR_4;

 FUNC_3(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_2->sp_groups[VAR_4];
  FUNC_1(&VAR_3->sg_lock);
 }
 FUNC_1(&VAR_2->sp_lock);

 if (VAR_2->sp_rcache)
  FUNC_2(VAR_2->sp_rcache);

 FUNC_4(&VAR_2->sp_sysctl);
 FUNC_0(VAR_2, VAR_0);
}
