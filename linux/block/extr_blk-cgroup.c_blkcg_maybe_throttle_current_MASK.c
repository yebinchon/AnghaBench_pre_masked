
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct cgroup_subsys_state {int dummy; } ;
struct blkcg_gq {int dummy; } ;
struct blkcg {int dummy; } ;
struct TYPE_3__ {int use_memdelay; struct request_queue* throttle_queue; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct blkcg_gq*,int) ;
 struct blkcg_gq* FUNC_2 (struct blkcg*,struct request_queue*) ;
 int FUNC_3 (struct blkcg_gq*) ;
 int FUNC_4 (struct blkcg_gq*) ;
 struct blkcg* FUNC_5 (struct cgroup_subsys_state*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 struct cgroup_subsys_state* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct cgroup_subsys_state* FUNC_9 (TYPE_1__*,int ) ;

void FUNC_10(void)
{
 struct request_queue *VAR_2 = VAR_0->throttle_queue;
 struct cgroup_subsys_state *VAR_3;
 struct blkcg *VAR_4;
 struct blkcg_gq *VAR_5;
 bool VAR_6 = VAR_0->use_memdelay;

 if (!VAR_2)
  return;

 VAR_0->throttle_queue = ((void*)0);
 VAR_0->use_memdelay = 0;

 FUNC_7();
 VAR_3 = FUNC_6();
 if (VAR_3)
  VAR_4 = FUNC_5(VAR_3);
 else
  VAR_4 = FUNC_5(FUNC_9(VAR_0, VAR_1));

 if (!VAR_4)
  goto out;
 VAR_5 = FUNC_2(VAR_4, VAR_2);
 if (!VAR_5)
  goto out;
 if (!FUNC_4(VAR_5))
  goto out;
 FUNC_8();

 FUNC_1(VAR_5, VAR_6);
 FUNC_3(VAR_5);
 FUNC_0(VAR_2);
 return;
out:
 FUNC_8();
 FUNC_0(VAR_2);
}
