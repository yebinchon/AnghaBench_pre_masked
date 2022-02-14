
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_6__ {int sg_lock; int sg_threadcount; TYPE_1__* sg_pool; } ;
struct TYPE_5__ {int sp_name; int sp_proc; } ;
typedef TYPE_1__ SVCPOOL ;
typedef TYPE_2__ SVCGROUP ;


 int FUNC_0 (int ,TYPE_2__*,int ,struct thread**,int ,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(SVCGROUP *VAR_1)
{
 SVCPOOL *VAR_2 = VAR_1->sg_pool;
 struct thread *VAR_3;

 FUNC_1(&VAR_1->sg_lock);
 VAR_1->sg_threadcount++;
 FUNC_2(&VAR_1->sg_lock);
 FUNC_0(VAR_0, VAR_1, VAR_2->sp_proc, &VAR_3, 0, 0,
     "%s: service", VAR_2->sp_name);
}
