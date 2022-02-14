
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecx_plat_data {int sgpio_pattern; int pre_clocks; int n_ports; int post_clocks; int * sgpio_gpiod; } ;
struct ata_port {int port_no; struct ahci_port_priv* private_data; TYPE_1__* host; } ;
struct ahci_port_priv {struct ahci_em_priv* em_priv; } ;
struct ahci_host_priv {int em_msg_type; struct ecx_plat_data* plat_data; } ;
struct ahci_em_priv {int led_state; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct ahci_host_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct ecx_plat_data*) ;
 int FUNC_1 (struct ecx_plat_data*,int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_7 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_5(struct ata_port *VAR_8, u32 VAR_9,
     ssize_t VAR_10)
{
 struct ahci_host_priv *VAR_11 = VAR_8->host->private_data;
 struct ecx_plat_data *VAR_12 = VAR_11->plat_data;
 struct ahci_port_priv *VAR_13 = VAR_8->private_data;
 unsigned long VAR_14;
 int VAR_15, VAR_16;
 struct ahci_em_priv *VAR_17;
 u32 VAR_18;


 VAR_15 = (VAR_9 & VAR_2) >> 8;
 if (VAR_15 < VAR_1)
  VAR_17 = &VAR_13->em_priv[VAR_15];
 else
  return -VAR_0;

 if (!(VAR_11->em_msg_type & VAR_3))
  return VAR_10;

 FUNC_3(&VAR_7, VAR_14);
 FUNC_1(VAR_12, VAR_8->port_no, VAR_9);
 VAR_18 = VAR_12->sgpio_pattern;
 for (VAR_16 = 0; VAR_16 < VAR_12->pre_clocks; VAR_16++)
  FUNC_0(VAR_12);

 FUNC_2(VAR_12->sgpio_gpiod[VAR_6], 1);
 FUNC_0(VAR_12);
 FUNC_2(VAR_12->sgpio_gpiod[VAR_6], 0);




 for (VAR_16 = 0; VAR_16 < (VAR_5 * VAR_12->n_ports); VAR_16++) {
  FUNC_2(VAR_12->sgpio_gpiod[VAR_4], VAR_18 & 1);
  VAR_18 >>= 1;
  FUNC_0(VAR_12);
 }
 for (VAR_16 = 0; VAR_16 < VAR_12->post_clocks; VAR_16++)
  FUNC_0(VAR_12);


 VAR_17->led_state = VAR_9;

 FUNC_4(&VAR_7, VAR_14);
 return VAR_10;
}
