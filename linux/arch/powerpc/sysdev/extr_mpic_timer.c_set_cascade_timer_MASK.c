
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct timer_group_priv {TYPE_2__* regs; int group_tcr; TYPE_1__* timer; } ;
struct cascade_priv {int tcr_value; } ;
struct TYPE_4__ {int gtbcr; int gtccr; } ;
struct TYPE_3__ {struct cascade_priv* cascade_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct timer_group_priv *VAR_4, u64 VAR_5,
  unsigned int VAR_6)
{
 struct cascade_priv *VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;


 VAR_7 = VAR_4->timer[VAR_6].cascade_handle;
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = VAR_7->tcr_value |
  (VAR_7->tcr_value << VAR_2);
 FUNC_2(VAR_4->group_tcr, VAR_8);

 VAR_9 = FUNC_0(VAR_5, VAR_1, &VAR_10);

 FUNC_1(&VAR_4->regs[VAR_6].gtccr, 0);
 FUNC_1(&VAR_4->regs[VAR_6].gtbcr, VAR_9 | VAR_3);

 FUNC_1(&VAR_4->regs[VAR_6 - 1].gtccr, 0);
 FUNC_1(&VAR_4->regs[VAR_6 - 1].gtbcr, VAR_10);

 return 0;
}
