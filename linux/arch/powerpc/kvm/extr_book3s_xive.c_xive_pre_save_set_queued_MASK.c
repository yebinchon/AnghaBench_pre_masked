
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct kvmppc_xive_src_block {struct kvmppc_xive_irq_state* irq_state; } ;
struct kvmppc_xive_irq_state {int in_queue; int saved_p; int valid; } ;
struct kvmppc_xive {int dummy; } ;


 struct kvmppc_xive_src_block* FUNC_0 (struct kvmppc_xive*,int ,size_t*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct kvmppc_xive *VAR_0, u32 VAR_1)
{
 struct kvmppc_xive_src_block *VAR_2;
 struct kvmppc_xive_irq_state *VAR_3;
 u16 VAR_4;

 VAR_2 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (!VAR_2)
  return;

 VAR_3 = &VAR_2->irq_state[VAR_4];


 if (!VAR_3->valid) {
  FUNC_1("invalid irq 0x%x in cpu queue!\n", VAR_1);
  return;
 }






 if (!VAR_3->saved_p)
  FUNC_1("Interrupt 0x%x is marked in a queue but P not set !\n", VAR_1);


 VAR_3->in_queue = 1;
}
