
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t4_offload_policy {int nrules; TYPE_1__* rule; } ;
struct TYPE_2__ {int bpf_prog; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct t4_offload_policy *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nrules; VAR_1++) {




  FUNC_1(&VAR_0->rule[VAR_1].bpf_prog);
 }
 FUNC_0(VAR_0->rule);
 VAR_0->nrules = 0;
 VAR_0->rule = ((void*)0);
}
