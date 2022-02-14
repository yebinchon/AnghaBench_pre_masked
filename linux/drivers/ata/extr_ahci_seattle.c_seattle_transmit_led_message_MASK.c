
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seattle_plat_data {int sgpio_ctrl; } ;
struct ata_port {int lock; int port_no; struct ahci_port_priv* private_data; TYPE_1__* host; } ;
struct ahci_port_priv {struct ahci_em_priv* em_priv; } ;
struct ahci_host_priv {struct seattle_plat_data* plat_data; } ;
struct ahci_em_priv {int led_state; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct ahci_host_priv* private_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_7(struct ata_port *VAR_6, u32 VAR_7,
         ssize_t VAR_8)
{
 struct ahci_host_priv *VAR_9 = VAR_6->host->private_data;
 struct ahci_port_priv *VAR_10 = VAR_6->private_data;
 struct seattle_plat_data *VAR_11 = VAR_9->plat_data;
 unsigned long VAR_12;
 int VAR_13;
 struct ahci_em_priv *VAR_14;
 u32 VAR_15;


 VAR_13 = (VAR_7 & VAR_3) >> 8;
 if (VAR_13 >= VAR_2)
  return -VAR_1;
 VAR_14 = &VAR_10->em_priv[VAR_13];

 VAR_15 = FUNC_3(VAR_11->sgpio_ctrl);
 if (VAR_7 & VAR_0)
  VAR_15 |= 1 << FUNC_0((VAR_6->port_no));
 else
  VAR_15 &= ~(1 << FUNC_0((VAR_6->port_no)));

 if (VAR_7 & VAR_5)
  VAR_15 |= 1 << FUNC_2((VAR_6->port_no));
 else
  VAR_15 &= ~(1 << FUNC_2((VAR_6->port_no)));

 if (VAR_7 & VAR_4)
  VAR_15 |= 1 << FUNC_1((VAR_6->port_no));
 else
  VAR_15 &= ~(1 << FUNC_1((VAR_6->port_no)));

 FUNC_4(VAR_15, VAR_11->sgpio_ctrl);

 FUNC_5(VAR_6->lock, VAR_12);


 VAR_14->led_state = VAR_7;

 FUNC_6(VAR_6->lock, VAR_12);

 return VAR_8;
}
