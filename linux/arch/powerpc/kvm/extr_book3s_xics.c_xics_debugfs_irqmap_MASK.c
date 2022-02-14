
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct kvmppc_passthru_irqmap {int n_mapped; TYPE_1__* mapped; } ;
struct TYPE_2__ {int v_hwirq; int r_hwirq; } ;


 int FUNC_0 (struct seq_file*,char*,int,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0,
    struct kvmppc_passthru_irqmap *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;
 FUNC_0(VAR_0, "========\nPIRQ mappings: %d maps\n===========\n",
    VAR_1->n_mapped);
 for (VAR_2 = 0; VAR_2 < VAR_1->n_mapped; VAR_2++) {
  FUNC_0(VAR_0, "r_hwirq=%x, v_hwirq=%x\n",
   VAR_1->mapped[VAR_2].r_hwirq, VAR_1->mapped[VAR_2].v_hwirq);
 }
}
