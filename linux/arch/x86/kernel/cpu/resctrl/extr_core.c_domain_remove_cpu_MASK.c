
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdt_resource {int cache_level; } ;
struct rdt_domain {int mbm_work_cpu; int cqm_work_cpu; int cqm_limbo; int mbm_over; struct rdt_domain* mbm_local; struct rdt_domain* mbm_total; int rmid_busy_llc; struct rdt_domain* mbps_val; struct rdt_domain* ctrl_val; TYPE_1__* plr; int list; int id; int cpu_mask; } ;
struct TYPE_2__ {int * d; } ;


 scalar_t__ FUNC_0 (struct rdt_domain*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct rdt_domain*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct rdt_domain*,int ) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (struct rdt_resource*,struct rdt_domain*) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (struct rdt_domain*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct rdt_domain*,int ) ;
 int FUNC_14 (char*,int) ;
 struct rdt_domain* FUNC_15 (struct rdt_resource*,int,int *) ;
 int VAR_1 ;
 struct rdt_resource* VAR_2 ;
 int FUNC_16 (struct rdt_resource*,int ) ;
 scalar_t__ FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(int VAR_3, struct rdt_resource *VAR_4)
{
 int VAR_5 = FUNC_7(VAR_3, VAR_4->cache_level);
 struct rdt_domain *VAR_6;

 VAR_6 = FUNC_15(VAR_4, VAR_5, ((void*)0));
 if (FUNC_0(VAR_6)) {
  FUNC_14("Could't find cache id for cpu %d\n", VAR_3);
  return;
 }

 FUNC_4(VAR_3, &VAR_6->cpu_mask);
 if (FUNC_5(&VAR_6->cpu_mask)) {




  if (FUNC_17(&VAR_1))
   FUNC_16(VAR_4, VAR_6->id);
  FUNC_12(&VAR_6->list);
  if (FUNC_10())
   FUNC_3(&VAR_6->mbm_over);
  if (FUNC_9() && FUNC_8(VAR_4, VAR_6)) {
   FUNC_1(VAR_6, 1);
   FUNC_3(&VAR_6->cqm_limbo);
  }





  if (VAR_6->plr)
   VAR_6->plr->d = ((void*)0);

  FUNC_11(VAR_6->ctrl_val);
  FUNC_11(VAR_6->mbps_val);
  FUNC_2(VAR_6->rmid_busy_llc);
  FUNC_11(VAR_6->mbm_total);
  FUNC_11(VAR_6->mbm_local);
  FUNC_11(VAR_6);
  return;
 }

 if (VAR_4 == &VAR_2[VAR_0]) {
  if (FUNC_10() && VAR_3 == VAR_6->mbm_work_cpu) {
   FUNC_3(&VAR_6->mbm_over);
   FUNC_13(VAR_6, 0);
  }
  if (FUNC_9() && VAR_3 == VAR_6->cqm_work_cpu &&
      FUNC_8(VAR_4, VAR_6)) {
   FUNC_3(&VAR_6->cqm_limbo);
   FUNC_6(VAR_6, 0);
  }
 }
}
