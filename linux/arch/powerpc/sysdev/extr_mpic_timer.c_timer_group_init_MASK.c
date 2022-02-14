
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_group_priv {int flags; void* group_tcr; void* regs; int node; int lock; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct timer_group_priv*) ;
 struct timer_group_priv* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (struct device_node*,char*) ;
 void* FUNC_5 (struct device_node*,int ) ;
 int FUNC_6 (char*,struct device_node*) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device_node*,struct timer_group_priv*) ;
 int FUNC_10 (struct device_node*,struct timer_group_priv*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_11(struct device_node *VAR_4)
{
 struct timer_group_priv *VAR_5;
 unsigned int VAR_6 = 0;
 int VAR_7;

 VAR_5 = FUNC_2(sizeof(struct timer_group_priv), VAR_1);
 if (!VAR_5) {
  FUNC_6("%pOF: cannot allocate memory for group.\n", VAR_4);
  return;
 }

 if (FUNC_4(VAR_4, "fsl,mpic-global-timer"))
  VAR_5->flags |= VAR_0;

 VAR_5->regs = FUNC_5(VAR_4, VAR_6++);
 if (!VAR_5->regs) {
  FUNC_6("%pOF: cannot ioremap timer register address.\n", VAR_4);
  goto out;
 }

 if (VAR_5->flags & VAR_0) {
  VAR_5->group_tcr = FUNC_5(VAR_4, VAR_6++);
  if (!VAR_5->group_tcr) {
   FUNC_6("%pOF: cannot ioremap tcr address.\n", VAR_4);
   goto out;
  }
 }

 VAR_7 = FUNC_9(VAR_4, VAR_5);
 if (VAR_7 < 0) {
  FUNC_6("%pOF: cannot get timer frequency.\n", VAR_4);
  goto out;
 }

 VAR_7 = FUNC_10(VAR_4, VAR_5);
 if (VAR_7 < 0) {
  FUNC_6("%pOF: cannot get timer irqs.\n", VAR_4);
  goto out;
 }

 FUNC_8(&VAR_5->lock);


 if (VAR_5->flags & VAR_0)
  FUNC_7(VAR_5->group_tcr, VAR_2);

 FUNC_3(&VAR_5->node, &VAR_3);

 return;

out:
 if (VAR_5->regs)
  FUNC_0(VAR_5->regs);

 if (VAR_5->group_tcr)
  FUNC_0(VAR_5->group_tcr);

 FUNC_1(VAR_5);
}
