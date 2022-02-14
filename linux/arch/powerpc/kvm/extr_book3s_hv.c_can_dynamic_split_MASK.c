
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcore {int num_threads; scalar_t__ kvm; int preempt_list; } ;
struct core_info {int max_subcore_threads; int n_subcores; int total_threads; int* subcore_threads; struct kvmppc_vcore** vc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvmppc_vcore*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static bool FUNC_5(struct kvmppc_vcore *VAR_3, struct core_info *VAR_4)
{
 int VAR_5 = VAR_3->num_threads;
 int VAR_6;

 if (!FUNC_0(VAR_0))
  return 0;


 if (VAR_2 && VAR_3->kvm != VAR_4->vc[0]->kvm)
  return 0;


 if (VAR_1 &&
     FUNC_2(VAR_3->kvm) != FUNC_2(VAR_4->vc[0]->kvm))
  return 0;

 if (VAR_5 < VAR_4->max_subcore_threads)
  VAR_5 = VAR_4->max_subcore_threads;
 if (!FUNC_4(VAR_4->n_subcores + 1, VAR_5))
  return 0;
 VAR_4->max_subcore_threads = VAR_5;

 VAR_6 = VAR_4->n_subcores;
 ++VAR_4->n_subcores;
 VAR_4->total_threads += VAR_3->num_threads;
 VAR_4->subcore_threads[VAR_6] = VAR_3->num_threads;
 VAR_4->vc[VAR_6] = VAR_3;
 FUNC_1(VAR_3);
 FUNC_3(&VAR_3->preempt_list);

 return 1;
}
