
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct w6692_hw {int irq; int name; int irqcnt; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct w6692_hw*) ;
 int FUNC_1 (struct w6692_hw*) ;
 int FUNC_2 (int ,struct w6692_hw*) ;
 int FUNC_3 (struct w6692_hw*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int ,...) ;
 int FUNC_6 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,struct w6692_hw*) ;
 int FUNC_8 (struct w6692_hw*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_11(struct w6692_hw *VAR_5)
{
 int VAR_6 = 3;
 u_long VAR_7;

 FUNC_9(&VAR_5->lock, VAR_7);
 FUNC_0(VAR_5);
 FUNC_10(&VAR_5->lock, VAR_7);
 if (FUNC_7(VAR_5->irq, VAR_4, VAR_2, VAR_5->name, VAR_5)) {
  FUNC_5("%s: couldn't get interrupt %d\n", VAR_5->name,
   VAR_5->irq);
  return -VAR_1;
 }
 while (VAR_6--) {
  FUNC_9(&VAR_5->lock, VAR_7);
  FUNC_3(VAR_5);
  FUNC_1(VAR_5);
  FUNC_10(&VAR_5->lock, VAR_7);

  FUNC_4(10);
  if (VAR_3 & VAR_0)
   FUNC_6("%s: IRQ %d count %d\n", VAR_5->name,
      VAR_5->irq, VAR_5->irqcnt);
  if (!VAR_5->irqcnt) {
   FUNC_5("%s: IRQ(%d) getting no IRQs during init %d\n",
    VAR_5->name, VAR_5->irq, 3 - VAR_6);
   FUNC_8(VAR_5);
  } else
   return 0;
 }
 FUNC_2(VAR_5->irq, VAR_5);
 return -VAR_1;
}
