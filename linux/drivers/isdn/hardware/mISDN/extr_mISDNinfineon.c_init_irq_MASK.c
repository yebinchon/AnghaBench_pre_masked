
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {int (* init ) (TYPE_2__*) ;} ;
struct inf_hw {int irq; int name; int irqcnt; int lock; TYPE_2__ ipac; TYPE_1__* ci; } ;
struct TYPE_3__ {int irqfunc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct inf_hw*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int,...) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,struct inf_hw*) ;
 int FUNC_5 (struct inf_hw*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_9(struct inf_hw *VAR_5)
{
 int VAR_6, VAR_7 = 3;
 u_long VAR_8;

 if (!VAR_5->ci->irqfunc)
  return -VAR_1;
 VAR_6 = FUNC_4(VAR_5->irq, VAR_5->ci->irqfunc, VAR_3, VAR_5->name, VAR_5);
 if (VAR_6) {
  FUNC_2("%s: couldn't get interrupt %d\n", VAR_5->name, VAR_5->irq);
  return VAR_6;
 }
 while (VAR_7--) {
  FUNC_6(&VAR_5->lock, VAR_8);
  FUNC_5(VAR_5);
  VAR_6 = VAR_5->ipac.init(&VAR_5->ipac);
  if (VAR_6) {
   FUNC_7(&VAR_5->lock, VAR_8);
   FUNC_2("%s: ISAC init failed with %d\n",
    VAR_5->name, VAR_6);
   break;
  }
  FUNC_7(&VAR_5->lock, VAR_8);
  FUNC_1(10);
  if (VAR_4 & VAR_0)
   FUNC_3("%s: IRQ %d count %d\n", VAR_5->name,
      VAR_5->irq, VAR_5->irqcnt);
  if (!VAR_5->irqcnt) {
   FUNC_2("%s: IRQ(%d) got no requests during init %d\n",
    VAR_5->name, VAR_5->irq, 3 - VAR_7);
  } else
   return 0;
 }
 FUNC_0(VAR_5->irq, VAR_5);
 return -VAR_2;
}
