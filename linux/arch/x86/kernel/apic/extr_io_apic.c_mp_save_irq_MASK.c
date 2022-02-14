
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc_intsrc {int irqflag; int dstirq; int dstapic; int srcbusirq; int srcbus; int irqtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_1 (int *,struct mpc_intsrc*,int) ;
 int FUNC_2 (int *,struct mpc_intsrc*,int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (char*) ;

void FUNC_4(struct mpc_intsrc *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_0, "Int: type %d, pol %d, trig %d, bus %02x,"
  " IRQ %02x, APIC ID %x, APIC INT %02x\n",
  VAR_4->irqtype, VAR_4->irqflag & 3, (VAR_4->irqflag >> 2) & 3, VAR_4->srcbus,
  VAR_4->srcbusirq, VAR_4->dstapic, VAR_4->dstirq);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (!FUNC_1(&VAR_3[VAR_5], VAR_4, sizeof(*VAR_4)))
   return;
 }

 FUNC_2(&VAR_3[VAR_2], VAR_4, sizeof(*VAR_4));
 if (++VAR_2 == VAR_1)
  FUNC_3("Max # of irq sources exceeded!!\n");
}
