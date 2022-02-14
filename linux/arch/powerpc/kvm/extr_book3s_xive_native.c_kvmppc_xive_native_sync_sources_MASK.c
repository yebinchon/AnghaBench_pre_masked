
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xive_irq_data {int dummy; } ;
struct kvmppc_xive_src_block {struct kvmppc_xive_irq_state* irq_state; } ;
struct kvmppc_xive_irq_state {scalar_t__ act_priority; int valid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kvmppc_xive_irq_state*,int *,struct xive_irq_data**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvmppc_xive_src_block *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct kvmppc_xive_irq_state *VAR_4 = &VAR_2->irq_state[VAR_3];
  struct xive_irq_data *VAR_5;
  u32 VAR_6;

  if (!VAR_4->valid)
   continue;
  if (VAR_4->act_priority == VAR_1)
   continue;

  FUNC_0(VAR_4, &VAR_6, &VAR_5);
  FUNC_2(VAR_6);
  FUNC_1(VAR_6);
 }
}
