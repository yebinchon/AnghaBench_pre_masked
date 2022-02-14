
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ata_port {int port_no; TYPE_1__* ops; struct ahci_port_priv* private_data; } ;
struct ata_link {size_t pmp; int flags; struct ata_port* ap; } ;
struct ata_device {struct ata_link* link; } ;
struct ahci_port_priv {struct ahci_em_priv* em_priv; } ;
struct ahci_em_priv {int led_state; int blink_policy; } ;
typedef int ssize_t ;
typedef enum sw_activity { ____Placeholder_sw_activity } sw_activity ;
struct TYPE_2__ {int (* transmit_led_message ) (struct ata_port*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_port*,int,int) ;
 int FUNC_1 (struct ata_port*,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct ata_device *VAR_5, enum sw_activity VAR_6)
{
 struct ata_link *VAR_7 = VAR_5->link;
 struct ata_port *VAR_8 = VAR_7->ap;
 struct ahci_port_priv *VAR_9 = VAR_8->private_data;
 struct ahci_em_priv *VAR_10 = &VAR_9->em_priv[VAR_7->pmp];
 u32 VAR_11 = VAR_10->led_state;


 if (VAR_6 == VAR_4) {

  VAR_7->flags &= ~(VAR_0);


  VAR_11 &= VAR_2;
  VAR_11 |= (VAR_8->port_no | (VAR_7->pmp << 8));
  VAR_8->ops->transmit_led_message(VAR_8, VAR_11, 4);
 } else {
  VAR_7->flags |= VAR_0;
  if (VAR_6 == VAR_1) {

   VAR_11 &= VAR_2;
   VAR_11 |= (VAR_8->port_no | (VAR_7->pmp << 8));
   VAR_11 |= VAR_3;
   VAR_8->ops->transmit_led_message(VAR_8, VAR_11, 4);
  }
 }
 VAR_10->blink_policy = VAR_6;
 return 0;
}
