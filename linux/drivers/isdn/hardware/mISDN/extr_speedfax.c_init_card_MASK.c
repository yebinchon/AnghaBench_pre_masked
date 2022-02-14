
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {int (* init ) (TYPE_1__*) ;} ;
struct sfax_hw {int irq; int name; int irqcnt; int lock; TYPE_1__ isac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sfax_hw*,int ,int) ;
 int VAR_4 ;
 int FUNC_1 (struct sfax_hw*) ;
 int FUNC_2 (int ,struct sfax_hw*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int,...) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,struct sfax_hw*) ;
 int VAR_5 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_10(struct sfax_hw *VAR_6)
{
 int VAR_7, VAR_8 = 3;
 u_long VAR_9;

 VAR_7 = FUNC_6(VAR_6->irq, VAR_5, VAR_2, VAR_6->name, VAR_6);
 if (VAR_7) {
  FUNC_4("%s: couldn't get interrupt %d\n", VAR_6->name, VAR_6->irq);
  return VAR_7;
 }
 while (VAR_8--) {
  FUNC_7(&VAR_6->lock, VAR_9);
  VAR_7 = VAR_6->isac.init(&VAR_6->isac);
  if (VAR_7) {
   FUNC_8(&VAR_6->lock, VAR_9);
   FUNC_4("%s: ISAC init failed with %d\n",
    VAR_6->name, VAR_7);
   break;
  }
  FUNC_1(VAR_6);

  FUNC_0(VAR_6, VAR_3, 0x41);
  FUNC_8(&VAR_6->lock, VAR_9);
  FUNC_3(10);
  if (VAR_4 & VAR_0)
   FUNC_5("%s: IRQ %d count %d\n", VAR_6->name,
      VAR_6->irq, VAR_6->irqcnt);
  if (!VAR_6->irqcnt) {
   FUNC_4("%s: IRQ(%d) got no requests during init %d\n",
    VAR_6->name, VAR_6->irq, 3 - VAR_8);
  } else
   return 0;
 }
 FUNC_2(VAR_6->irq, VAR_6);
 return -VAR_1;
}
