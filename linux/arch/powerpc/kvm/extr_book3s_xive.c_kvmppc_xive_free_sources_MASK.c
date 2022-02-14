
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_xive_src_block {struct kvmppc_xive_irq_state* irq_state; } ;
struct kvmppc_xive_irq_state {int valid; int * pt_data; scalar_t__ pt_number; scalar_t__ ipi_number; int ipi_data; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct kvmppc_xive_src_block *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct kvmppc_xive_irq_state *VAR_3 = &VAR_1->irq_state[VAR_2];

  if (!VAR_3->valid)
   continue;

  FUNC_0(VAR_3->ipi_number, &VAR_3->ipi_data);
  FUNC_1(&VAR_3->ipi_data);
  FUNC_2(VAR_3->ipi_number);


  if (VAR_3->pt_number)
   FUNC_0(VAR_3->pt_number, VAR_3->pt_data);

  VAR_3->valid = 0;
 }
}
