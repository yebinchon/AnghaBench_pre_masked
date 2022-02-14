
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_xive_src_block {struct kvmppc_xive_irq_state* irq_state; } ;
struct kvmppc_xive_irq_state {scalar_t__ act_priority; scalar_t__ pt_number; int * pt_data; scalar_t__ ipi_number; int ipi_data; scalar_t__ act_server; scalar_t__ eisn; int valid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct kvmppc_xive_src_block *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct kvmppc_xive_irq_state *VAR_5 = &VAR_3->irq_state[VAR_4];

  if (!VAR_5->valid)
   continue;

  if (VAR_5->act_priority == VAR_1)
   continue;

  VAR_5->eisn = 0;
  VAR_5->act_server = 0;
  VAR_5->act_priority = VAR_1;
  FUNC_1(&VAR_5->ipi_data, VAR_2);
  FUNC_0(VAR_5->ipi_number, 0, VAR_1, 0);
  if (VAR_5->pt_number) {
   FUNC_1(VAR_5->pt_data, VAR_2);
   FUNC_0(VAR_5->pt_number,
        0, VAR_1, 0);
  }
 }
}
