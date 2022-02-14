
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pq2ads_pci_pic {int host; TYPE_1__* regs; } ;
struct irq_desc {int dummy; } ;
struct TYPE_2__ {int mask; int stat; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct pq2ads_pci_pic* FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct irq_desc *VAR_0)
{
 struct pq2ads_pci_pic *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2, VAR_3, VAR_4;
 int VAR_5;

 for (;;) {
  VAR_2 = FUNC_1(&VAR_1->regs->stat);
  VAR_3 = FUNC_1(&VAR_1->regs->mask);

  VAR_4 = VAR_2 & ~VAR_3;

  if (!VAR_4)
   break;

  for (VAR_5 = 0; VAR_4 != 0; ++VAR_5, VAR_4 <<= 1) {
   if (VAR_4 & 0x80000000) {
    int VAR_6 = FUNC_3(VAR_1->host, VAR_5);
    FUNC_0(VAR_6);
   }
  }
 }
}
