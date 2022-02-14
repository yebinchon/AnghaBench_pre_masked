
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {TYPE_1__* ops; struct ahci_port_priv* private_data; } ;
struct ahci_port_priv {struct ahci_em_priv* em_priv; } ;
struct ahci_em_priv {scalar_t__ blink_policy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* transmit_led_message ) (struct ata_port*,unsigned int,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned int*) ;
 int FUNC_2 (struct ata_port*,unsigned int,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct ata_port *VAR_4, const char *VAR_5,
    size_t VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;
 struct ahci_port_priv *VAR_9 = VAR_4->private_data;
 struct ahci_em_priv *VAR_10;

 if (FUNC_1(VAR_5, 0, &VAR_7) < 0)
  return -VAR_0;


 VAR_8 = (VAR_7 & VAR_2) >> 8;
 if (VAR_8 < VAR_1) {
  VAR_8 = FUNC_0(VAR_8, VAR_1);
  VAR_10 = &VAR_9->em_priv[VAR_8];
 } else {
  return -VAR_0;
 }





 if (VAR_10->blink_policy)
  VAR_7 &= ~VAR_3;

 return VAR_4->ops->transmit_led_message(VAR_4, VAR_7, VAR_6);
}
