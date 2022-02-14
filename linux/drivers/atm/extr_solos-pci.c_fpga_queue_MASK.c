
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct solos_card {int tx_mask; int tx_queue_lock; int * tx_queue; } ;
struct sk_buff {int dummy; } ;
struct atm_vcc {int dummy; } ;
struct TYPE_2__ {struct atm_vcc* vcc; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct solos_card*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct solos_card *VAR_0, int VAR_1, struct sk_buff *VAR_2,
         struct atm_vcc *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_0(VAR_2)->vcc = VAR_3;

 FUNC_4(&VAR_0->tx_queue_lock, VAR_5);
 VAR_4 = FUNC_2(&VAR_0->tx_queue[VAR_1]);
 FUNC_3(&VAR_0->tx_queue[VAR_1], VAR_2);
 if (!VAR_4)
  VAR_0->tx_mask |= (1 << VAR_1);
 FUNC_5(&VAR_0->tx_queue_lock, VAR_5);



 if (!VAR_4)
  FUNC_1(VAR_0);
}
