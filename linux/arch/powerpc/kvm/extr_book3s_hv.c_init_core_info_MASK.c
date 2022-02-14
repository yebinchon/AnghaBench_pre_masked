
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcore {int num_threads; } ;
struct core_info {int n_subcores; struct kvmppc_vcore** vc; int * subcore_threads; int total_threads; int max_subcore_threads; } ;


 int FUNC_0 (struct core_info*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct core_info *VAR_0, struct kvmppc_vcore *VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->n_subcores = 1;
 VAR_0->max_subcore_threads = VAR_1->num_threads;
 VAR_0->total_threads = VAR_1->num_threads;
 VAR_0->subcore_threads[0] = VAR_1->num_threads;
 VAR_0->vc[0] = VAR_1;
}
