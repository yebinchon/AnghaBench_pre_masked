
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u32 ;
struct timer_list {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* ops; int lock; } ;
struct ata_link {int pmp; struct ata_port* ap; } ;
struct ahci_em_priv {unsigned long led_state; scalar_t__ saved_activity; scalar_t__ activity; scalar_t__ blink_policy; int timer; struct ata_link* link; } ;
struct TYPE_2__ {int (* transmit_led_message ) (struct ata_port*,unsigned long,int) ;} ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 struct ahci_em_priv* VAR_4 ;
 struct ahci_em_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct ata_port*,unsigned long,int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_7)
{
 struct ahci_em_priv *VAR_8 = FUNC_0(VAR_8, VAR_7, VAR_6);
 struct ata_link *VAR_9 = VAR_8->link;
 struct ata_port *VAR_10 = VAR_9->ap;

 unsigned long VAR_11 = VAR_8->led_state;
 u32 VAR_12;
 unsigned long VAR_13;

 VAR_11 &= VAR_1;
 VAR_11 |= VAR_10->port_no | (VAR_9->pmp << 8);





 FUNC_3(VAR_10->lock, VAR_13);
 if (VAR_8->saved_activity != VAR_8->activity) {
  VAR_8->saved_activity = VAR_8->activity;

  VAR_12 = VAR_11 & VAR_3;

  if (VAR_12)
   VAR_12 = 0;
  else
   VAR_12 = 1;


  VAR_11 &= ~VAR_2;


  VAR_11 |= (VAR_12 << 16);
  FUNC_1(&VAR_8->timer, VAR_5 + FUNC_2(100));
 } else {

  VAR_11 &= ~VAR_2;
  if (VAR_8->blink_policy == VAR_0)
   VAR_11 |= (1 << 16);
 }
 FUNC_4(VAR_10->lock, VAR_13);
 VAR_10->ops->transmit_led_message(VAR_10, VAR_11, 4);
}
